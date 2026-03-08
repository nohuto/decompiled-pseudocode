/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x1406157F0
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x140615C08 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x140615CBC (MiComputeImageVadCommitCharge.c)
 *     MiRotatedToFrameBuffer @ 0x140630A34 (MiRotatedToFrameBuffer.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned __int64 v6; // r10
  __int64 v8; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  char v13; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v29; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  unsigned __int64 v33; // [rsp+50h] [rbp-48h]
  char i; // [rsp+B8h] [rbp+20h]

  v6 = (unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32;
  v29 = 0;
  v31 = 0LL;
  v8 = a3;
  v10 = 0LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 24) | v6) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v33 = v12;
  v13 = MiLockWorkingSetShared(a3);
  for ( i = v13; v11 <= v12; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v11, v12, 0LL, v13, 0, &v29);
    v15 = NextPageTable;
    if ( NextPageTable != v11 )
    {
      v16 = NextPageTable ? (__int64)(NextPageTable - v11) >> 3 : ((__int64)(v12 - v11) >> 3) + 1;
      v10 += MiComputeCommitChargeForZeroPteRange(a4, v11, v16);
      if ( !v15 )
        break;
    }
    v11 = v15;
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v12;
    v32 = v17;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v12 )
      v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v18 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v11);
        v30 = v19;
        if ( !v19 )
        {
          v20 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
LABEL_34:
          v10 += v20;
          goto LABEL_48;
        }
        if ( (v19 & 1) != 0 )
          break;
        if ( (v19 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v19) )
          {
            v24 = v10 + 1;
            if ( ((v23 >> 5) & 5) != 5 )
              v24 = v10;
            v10 = v24;
            goto LABEL_48;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v23) )
            goto LABEL_48;
          if ( *(_QWORD *)(a2 + 1264) )
          {
            if ( qword_140C657C0 && (v25 & 0x10) == 0 )
              v25 &= ~qword_140C657C0;
            if ( MiLocateCloneAddress(a2, v25 >> 16) )
              goto LABEL_48;
          }
          v20 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v31);
          goto LABEL_34;
        }
        if ( (v19 & 0x800) != 0 )
        {
          v26 = MiLockTransitionLeafPageEx(v11, 0LL, 0);
          if ( v26 )
          {
            if ( (*(_BYTE *)(v26 + 34) & 0x10) == 0 && (*(_DWORD *)(v26 + 16) & 4) == 0 && !*(_WORD *)(v26 + 32) )
              ++*a6;
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v11 -= 8LL;
          }
          goto LABEL_48;
        }
        if ( (v19 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_48;
          v22 = (unsigned __int16)v19 >> 12 == *(_DWORD *)(a1 + 1188);
          goto LABEL_20;
        }
        if ( ((v19 >> 5) & 0x1F) != 0x10 )
          goto LABEL_47;
LABEL_48:
        v11 += 8LL;
        if ( v11 > v18 )
        {
          v17 = v32;
          v12 = v33;
          goto LABEL_50;
        }
      }
      if ( (v19 & 0x200) == 0 || (*(_DWORD *)(a4 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v11) )
        goto LABEL_48;
      v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      if ( !_bittest64((const signed __int64 *)(v21 + 40), 0x28u) && *(__int64 *)(v21 + 8) > 0 )
        goto LABEL_48;
      if ( !*(_QWORD *)(a2 + 1264) )
      {
LABEL_47:
        ++v10;
        goto LABEL_48;
      }
      v22 = MiLocateCloneAddress(a2, *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) == 0LL;
LABEL_20:
      if ( v22 )
        goto LABEL_47;
      goto LABEL_48;
    }
LABEL_50:
    v27 = v17;
    v8 = a3;
    MiUnlockPageTableInternal(a3, v27);
  }
  MiUnlockWorkingSetShared(v8, v13);
  return v10;
}
