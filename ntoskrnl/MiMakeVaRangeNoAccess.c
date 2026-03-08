/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x1402EF244
 * Callers:
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUpdatePfnProtection @ 0x140344B44 (MiUpdatePfnProtection.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiUnlockVa @ 0x14034A190 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiRotatedToFrameBuffer @ 0x140630A34 (MiRotatedToFrameBuffer.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v9; // rcx
  char v10; // r15
  _KPROCESS *Process; // rdi
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r13
  unsigned int v18; // ecx
  BOOL v19; // edi
  unsigned __int64 v20; // rbx
  __int64 v21; // r15
  unsigned __int64 LeafVa; // rax
  char v23; // di
  int v24; // r12d
  __int64 v25; // rbx
  __int64 v26; // r8
  bool v27; // zf
  BOOL v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-D8h] BYREF
  __int64 **v30; // [rsp+30h] [rbp-D0h]
  _DWORD *v31; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  _QWORD v33[24]; // [rsp+50h] [rbp-B0h] BYREF

  v30 = (__int64 **)a1;
  v31 = a5;
  memset(v33, 0, 0xB8uLL);
  v9 = *(unsigned int *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
  {
    v15 = (v9 >> 19) & 3;
    v16 = MiVadPageSizes[v15];
    if ( v16 != 1 )
    {
      v17 = 16LL;
      v27 = (v9 & 0x600000) == 6291456;
      v18 = MiVadPageIndices[v15];
      v19 = v27;
      v28 = v27;
      if ( v16 != 16 )
        v17 = 1LL;
      if ( v18 > 1 )
        MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v16);
      else
        MiInsertLargeTbFlushEntry(a4, 2 - v18, a2);
      v29 = MI_READ_PTE_LOCK_FREE(a2);
      v20 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFFLL;
      v32 = v20;
      v31 = (_DWORD *)(48 * v20 - 0x220000000000LL);
      v21 = 0LL;
      while ( 1 )
      {
        if ( v19 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(a2);
          MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v30);
          v28 = 0;
        }
        v29 = MiSwizzleInvalidPte(((v20 + v21) << 12) & 0xFFFFFFFFFF000LL | 0xB00);
        v23 = v29;
        v24 = 0;
        v25 = v29;
        if ( !(unsigned int)MiPteInShadowRange(a2) )
          goto LABEL_32;
        if ( MiPteHasShadow() )
        {
          v24 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v27 = (v23 & 1) == 0;
            goto LABEL_30;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v27 = (v23 & 1) == 0;
LABEL_30:
          if ( !v27 )
            v25 |= 0x8000000000000000uLL;
        }
LABEL_32:
        *(_QWORD *)a2 = v25;
        if ( v24 )
          MiWritePteShadow(a2, v25, v26);
        v19 = v28;
        a2 += 8LL;
        v20 = v32;
        if ( ++v21 >= v17 )
        {
          MiUpdatePfnProtection(v30, v31, 24LL);
          return 1LL;
        }
      }
    }
  }
  v10 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v33[2] = 0LL;
  v12 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v33[3] = 0LL;
  LODWORD(v33[0]) = 1;
  WORD2(v33[0]) = 4;
  LODWORD(v33[1]) = 20;
  v13 = (__int64)(a2 << 25) >> 16;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
    a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( a2 <= a3 )
  {
    while ( 1 )
    {
      v29 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v29 & 1) == 0
        || ((_DWORD)v30[6] & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(a2)
        || *(__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
      {
        goto LABEL_11;
      }
      if ( (MiGetWsleContents(0xFFFFDE0000000028uLL, v13) & 0xF) == 8 )
        break;
      MiInsertTbFlushEntry(v33, v13, 1LL);
      if ( HIDWORD(v33[1]) == LODWORD(v33[1]) )
        goto LABEL_39;
LABEL_10:
      v13 += 4096LL;
      a2 += 8LL;
      if ( a2 > a3 )
        goto LABEL_11;
    }
    v10 = 1;
    *v31 = 1;
LABEL_39:
    if ( HIDWORD(v33[1]) )
      MiFreeWsleList(v12, v33, 0LL);
    if ( v10 )
    {
      MiUnlockVa(v12, v13);
      v10 = 0;
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( HIDWORD(v33[1]) )
    MiFreeWsleList(v12, v33, 0LL);
  return 0LL;
}
