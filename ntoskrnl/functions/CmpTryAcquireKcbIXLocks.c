__int64 __fastcall CmpTryAcquireKcbIXLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  int v9; // ecx
  __int64 result; // rax

  v6 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 248, a2, a4);
  LOBYTE(v7) = 1;
  v8 = v6;
  v9 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 264, v7, a4);
  result = 3221226029LL;
  if ( v8 >= 0 )
  {
    if ( v9 >= 0 )
      return 0LL;
    goto LABEL_5;
  }
  if ( v8 != -1073741267 )
    return (unsigned int)v8;
  if ( v9 < 0 )
  {
LABEL_5:
    if ( v9 != -1073741267 )
      return (unsigned int)v9;
  }
  return result;
}
