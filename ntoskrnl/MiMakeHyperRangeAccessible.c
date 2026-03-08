/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1403219F0
 * Callers:
 *     MiExpandVadBitMap @ 0x1407295BC (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x140A3970C (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiFillHyperPtes @ 0x1402DEAE0 (MiFillHyperPtes.c)
 *     MiMakeHyperPteDemandZero @ 0x1402DEC64 (MiMakeHyperPteDemandZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastReadLeafPte @ 0x140321CA0 (MiFastReadLeafPte.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  __int64 *v5; // rsi
  _KPROCESS *Process; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int i; // eax
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  unsigned __int64 NextPageTable; // r13
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-88h] BYREF
  __int64 v26; // [rsp+38h] [rbp-80h]
  unsigned __int64 v27; // [rsp+40h] [rbp-78h]
  unsigned __int64 v28; // [rsp+48h] [rbp-70h]
  _KPROCESS *v29; // [rsp+50h] [rbp-68h]
  _DWORD v30[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v31; // [rsp+60h] [rbp-58h]
  unsigned __int64 v32; // [rsp+68h] [rbp-50h]
  unsigned __int8 v33; // [rsp+C0h] [rbp+8h]
  int v34; // [rsp+C8h] [rbp+10h]
  int v36; // [rsp+D8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  *a3 = 0LL;
  v5 = a3;
  v25 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v36 = 0;
  v30[1] = 0;
  v29 = Process;
  v7 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = v8;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v8 != v9 || (int)MiFastReadLeafPte(a1, &v25) < 0 || !v25 )
  {
    v26 = 0LL;
    v30[0] = 0;
    v11 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
    v14 = v11;
    v33 = v11;
    for ( i = 0; ; i = 1 )
    {
      v34 = i;
      v16 = 0LL;
      v31 = 0LL;
      v17 = 0LL;
      v32 = 0LL;
      if ( v8 <= v9 )
        break;
LABEL_14:
      if ( i || !v16 )
      {
        if ( v17 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(MiGetSharedVm(v7, v14, v12, v13) + 48), v17);
          v17 = v32;
          v16 = v31;
        }
        MiUnlockWorkingSetShared(v7, v14);
        v21 = *v5;
        if ( v16 != *v5 )
        {
          *v5 = v16;
          v4 = v21 - v16;
        }
        if ( v17 != v26 )
          v4 += v26 - v17;
        if ( v4 )
          MiReturnFullProcessCommitment(Process, v4);
        return 0LL;
      }
      MiUnlockWorkingSetShared(v7, v14);
      v26 = v17;
      result = MiChargeFullProcessCommitment(Process, v16 + v17);
      if ( (int)result < 0 )
        return result;
      *v5 = v16;
      v30[0] = 1;
      MiLockWorkingSetShared(v7);
      v14 = v33;
    }
    v18 = v8;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v18, v9, 0, v33, 0, (__int64)&v36);
      if ( NextPageTable )
      {
        v22 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = v22;
        if ( NextPageTable == v18 )
        {
          v23 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v23 > v9 )
            v23 = v9;
          if ( v18 <= v23 )
          {
            do
            {
              if ( !MI_READ_PTE_LOCK_FREE(v18) )
                MiMakeHyperPteDemandZero(v18, v24, (__int64)v30);
              v18 += 8LL;
            }
            while ( (v18 & 0xFFF) != 0 && v18 <= v23 );
            v22 = v27;
          }
          MiUnlockPageTableInternal(v7, v22);
          goto LABEL_12;
        }
        MiUnlockPageTableInternal(v7, ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v20 = NextPageTable - 8;
      }
      else
      {
        v20 = v9;
      }
      MiFillHyperPtes(v18, v20, v33, (__int64)v30);
      v18 = v20 + 8;
LABEL_12:
      if ( v18 > v9 )
      {
        v5 = a3;
        v8 = v28;
        Process = v29;
        v17 = v32;
        v16 = v31;
        v14 = v33;
        i = v34;
        goto LABEL_14;
      }
    }
  }
  return 0LL;
}
