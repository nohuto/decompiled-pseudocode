/*
 * XREFs of CmpGetCallbackObjectContext @ 0x140738A30
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1406E1220 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     CmpUnlockContextList @ 0x140738DA0 (CmpUnlockContextList.c)
 *     CmpLockContextListShared @ 0x140738ED8 (CmpLockContextListShared.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v4 = a1 + 18;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  CmpLockContextListShared();
  v6 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v7 = *a2;
    while ( v6[4] != v7 )
    {
      if ( v6[4] >= v7 )
      {
        v6 = (_QWORD *)*v6;
        if ( v6 != v4 )
          continue;
      }
      goto LABEL_10;
    }
    v2 = v6[7];
  }
LABEL_10:
  CmpUnlockContextList();
  return v2;
}
