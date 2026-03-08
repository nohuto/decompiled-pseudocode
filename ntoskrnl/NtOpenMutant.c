/*
 * XREFs of NtOpenMutant @ 0x14078AA40
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenMutant(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  int v8; // ecx
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
  v8 = ObOpenObjectByName(a3, (__int64)ExMutantObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)v10);
  if ( v8 == -1073741788 && ExCrossVmMutantObjectType )
    v8 = ObOpenObjectByName(a3, (__int64)ExCrossVmMutantObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)v10);
  if ( v8 >= 0 )
    *a1 = v10[0];
  return (unsigned int)v8;
}
