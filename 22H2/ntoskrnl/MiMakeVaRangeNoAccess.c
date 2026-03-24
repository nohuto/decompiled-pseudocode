/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x140321CF4
 * Callers:
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x14025A9BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePfnProtection @ 0x14028E950 (MiUpdatePfnProtection.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x140307C88 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnlockVa @ 0x140338B10 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rcx
  BOOL v15; // edi
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx
  __int64 v18; // r12
  unsigned __int64 LeafVa; // rax
  int v20; // r13d
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  char v26; // r12
  _KPROCESS *Process; // rdi
  __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  BOOL v32; // [rsp+20h] [rbp-E0h]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  _DWORD *v35; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v36; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+48h] [rbp-B8h]
  _QWORD v38[24]; // [rsp+50h] [rbp-B0h] BYREF

  v34 = a1;
  v35 = a6;
  memset(v38, 0, 0xB8uLL);
  v10 = *(_DWORD *)(a1 + 48);
  if ( (v10 & 0x500000) == 0x500000 )
  {
    v11 = (v10 >> 18) & 3;
    v12 = MiVadPageSizes[v11];
    if ( v12 != 1 )
    {
      v13 = (v10 & 0x300000) == 3145728;
      v14 = 16LL;
      v15 = v13;
      v32 = v13;
      if ( v12 != 16 )
        v14 = 1LL;
      v36 = v14;
      v16 = MiVadPageIndices[v11];
      if ( v16 > 1 )
        MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v12, 0);
      else
        MiInsertLargeTbFlushEntry(a4, 2 - v16, a2);
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v37 = v17;
      v35 = (_DWORD *)(48 * v17 - 0x58000000000LL);
      v18 = 0LL;
      while ( 1 )
      {
        if ( v15 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(a2);
          MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v34);
          v32 = 0;
        }
        TransitionPte = MiMakeTransitionPte(v17 + v18, 24);
        v20 = 0;
        v21 = TransitionPte;
        v22 = TransitionPte;
        if ( !MiPteInShadowRange(a2) )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( !HIBYTE(word_140C4E008) && (v22 & 1) != 0 )
            goto LABEL_20;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
               && (v22 & 1) != 0 )
        {
          v21 = TransitionPte;
LABEL_20:
          v21 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *(_QWORD *)a2 = v21;
        if ( v20 )
          MiWritePteShadow(a2, v21, v23);
        v15 = v32;
        a2 += 8LL;
        v17 = v37;
        if ( ++v18 >= v36 )
        {
          MiUpdatePfnProtection(v34, (__int64)v35, 24LL, v24);
          return 1LL;
        }
      }
    }
  }
  v26 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v38[2] = 0LL;
  v28 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v38[3] = 0LL;
  LODWORD(v38[0]) = 1;
  WORD2(v38[0]) = 4;
  LODWORD(v38[1]) = 20;
  v29 = (__int64)(a2 << 25) >> 16;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
    a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( a2 > a3 )
    return 0LL;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
    if ( (TransitionPte & 1) == 0 || (*(_DWORD *)(v34 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2) )
      break;
    v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      break;
    if ( (MiGetWsleContents(v31, v29) & 0xF) == 8 )
    {
      v26 = 1;
      *v35 = 1;
LABEL_35:
      if ( HIDWORD(v38[1]) )
        MiFreeWsleList(v28, (__int64)v38, 0);
      if ( v26 == 1 )
      {
        MiUnlockVa(v28, v29);
        v26 = 0;
      }
      goto LABEL_39;
    }
    MiInsertTbFlushEntry((__int64)v38, v29, 1LL, 0);
    if ( HIDWORD(v38[1]) == LODWORD(v38[1]) )
      goto LABEL_35;
LABEL_39:
    v29 += 4096LL;
    a2 += 8LL;
  }
  while ( a2 <= a3 );
  if ( HIDWORD(v38[1]) )
    MiFreeWsleList(v28, (__int64)v38, 0);
  return 0LL;
}
