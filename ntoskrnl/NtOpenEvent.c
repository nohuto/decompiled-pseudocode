/*
 * XREFs of NtOpenEvent @ 0x1406C37F0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenEvent(_QWORD *a1, int a2, int a3)
{
  int v3; // esi
  char PreviousMode; // di
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v11[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  LOBYTE(a3) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)ExEventObjectType, a3, 0, a2, 0LL, (__int64)v11);
  if ( v8 == -1073741788 && ExCrossVmEventObjectType )
  {
    LOBYTE(v9) = PreviousMode;
    v8 = ObOpenObjectByName(v3, (_DWORD)ExCrossVmEventObjectType, v9, 0, a2, 0LL, (__int64)v11);
  }
  if ( v8 >= 0 )
    *a1 = v11[0];
  return (unsigned int)v8;
}
