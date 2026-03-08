/*
 * XREFs of NtOpenTimer @ 0x1409F8880
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenTimer(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  int v8; // edx
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(a3, (__int64)ExTimerObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)v10);
  if ( v8 >= 0 )
    *a1 = v10[0];
  return (unsigned int)v8;
}
