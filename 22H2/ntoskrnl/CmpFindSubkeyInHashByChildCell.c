/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x140765B90
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpLockTwoKcbsShared @ 0x1405F38C0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14066D0B0 (CmpReferenceKeyControlBlock.c)
 *     CmpLockHashEntryShared @ 0x14069E03C (CmpLockHashEntryShared.c)
 *     CmpHashUnicodeComponent @ 0x1406E3014 (CmpHashUnicodeComponent.c)
 *     CmpHashCompressedComponent @ 0x140765D24 (CmpHashCompressedComponent.c)
 *     CmpIsKcbLockAllowed @ 0x140765D74 (CmpIsKcbLockAllowed.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR *a5)
{
  int v5; // ebx
  ULONG_PTR *v7; // r13
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rbx
  ULONG_PTR v18; // rbx
  ULONG_PTR v19; // rcx
  ULONG_PTR v21; // rcx
  PVOID *v22; // [rsp+20h] [rbp-20h]
  __m128i v23; // [rsp+28h] [rbp-18h] BYREF
  int v24; // [rsp+80h] [rbp+40h] BYREF
  int v25; // [rsp+84h] [rbp+44h]
  __int64 v26; // [rsp+90h] [rbp+50h]

  v5 = *(_DWORD *)(a1 + 16);
  v23.m128i_i32[1] = 0;
  v7 = a5;
  v24 = -1;
  v9 = a1;
  v25 = 0;
  v10 = *(_QWORD *)(a3 + 1640);
  *a5 = 0LL;
  v26 = v10;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v24);
  if ( !v12 )
    return 3221225626LL;
  v13 = *(unsigned __int16 *)(v12 + 72);
  v14 = 37 * v5;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v15 = CmpHashCompressedComponent(v12 + 76, v13);
  }
  else
  {
    v23.m128i_i64[1] = v12 + 76;
    v23.m128i_i16[0] = v13;
    v23.m128i_i16[1] = v13;
    v15 = CmpHashUnicodeComponent(&v23);
  }
  v16 = v14 + v15;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v24);
  CmpUnlockTwoKcbs(v9, a2);
  v22 = (PVOID *)(v9 + 32);
  CmpLockHashEntryShared(*(_QWORD *)(v9 + 32), v16);
  CmpLockTwoKcbsShared(v9, a2);
  v17 = *(_QWORD *)(v26
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a3 + 1648) - 1) & ((101027 * (v16 ^ (v16 >> 9))) ^ ((unsigned __int64)(101027 * (v16 ^ (v16 >> 9))) >> 9)))
                  + 16);
  if ( v17 )
  {
    LOBYTE(a5) = 0;
    while ( v16 != *(_DWORD *)v17 || a4 != *(_DWORD *)(v17 + 24) || a3 != *(_QWORD *)(v17 + 16) )
    {
      v17 = *(_QWORD *)(v17 + 8);
      if ( !v17 )
        goto LABEL_13;
    }
    v18 = v17 - 16;
    if ( (unsigned __int8)CmpIsKcbLockAllowed(v9, v18, &a5) )
    {
      if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v18, &a5) )
      {
        v9 = v18;
      }
      else
      {
        CmpUnlockKcb(v21);
        ExAcquirePushLockSharedEx(v18 + 48, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 56));
        v9 = a2;
      }
    }
    else
    {
      CmpUnlockKcb(v19);
      ExAcquirePushLockSharedEx(v18 + 48, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 56));
    }
    ExAcquirePushLockSharedEx(v9 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 56));
    CmpReferenceKeyControlBlock(v18);
    *v7 = v18;
    CmpUnlockKcb(v18);
  }
LABEL_13:
  CmpUnlockHashEntry(*v22, v16);
  return 0LL;
}
