/*
 * XREFs of MiResizeAweBitMap @ 0x140A3F4A0
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     RtlCopyBitMapEx @ 0x1402D6890 (RtlCopyBitMapEx.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiLockAwePagesExclusive @ 0x140648A44 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x14064985C (MiUnlockAwePagesExclusive.c)
 *     MiCreateAweInfoBitMap @ 0x140A3E8D0 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x140A3ED88 (MiDeleteAweBitMap.c)
 */

__int64 __fastcall MiResizeAweBitMap(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 *v9; // r14
  __int64 *v10; // rdx
  __int128 v11; // [rsp+28h] [rbp-19h] BYREF
  __int128 v12; // [rsp+38h] [rbp-9h] BYREF
  __m256i v13; // [rsp+48h] [rbp+7h] BYREF
  __int128 v14; // [rsp+68h] [rbp+27h]
  __int128 v15; // [rsp+78h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+47h]

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = 0LL;
  v4 = *(_OWORD *)(a1 + 16);
  v12 = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)v13.m256i_i8 = v4;
  v6 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&v13.m256i_u64[2] = v5;
  v7 = *(_OWORD *)(a1 + 64);
  v14 = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 80);
  v15 = v7;
  v16 = v6;
  result = MiCreateAweInfoBitMap((__int64)&v12);
  if ( (int)result >= 0 )
  {
    v9 = (__int128 *)(a1 + 24);
    if ( Process )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        MiDeleteAweBitMap((struct _KPROCESS *)Process, (__int64)&v13.m256i_i64[1]);
        return 3221225738LL;
      }
    }
    MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
    if ( v13.m256i_i64[1] > *(_QWORD *)v9 )
    {
      RtlCopyBitMapEx(a1 + 24, &v13.m256i_i64[1], 0LL);
      v11 = *v9;
      *v9 = *(_OWORD *)&v13.m256i_u64[1];
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      if ( !*((_QWORD *)&v11 + 1) )
        return 0LL;
      v10 = (__int64 *)&v11;
    }
    else
    {
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      v10 = &v13.m256i_i64[1];
    }
    MiDeleteAweBitMap((struct _KPROCESS *)Process, (__int64)v10);
    return 0LL;
  }
  return result;
}
