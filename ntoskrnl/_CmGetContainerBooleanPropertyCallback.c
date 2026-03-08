/*
 * XREFs of _CmGetContainerBooleanPropertyCallback @ 0x140A61490
 * Callers:
 *     <none>
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall CmGetContainerBooleanPropertyCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _DWORD v6[6]; // [rsp+60h] [rbp-18h] BYREF
  char v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v6[0] = 0;
  v8 = 0;
  v7 = 0;
  if ( a3
    && (int)PnpGetObjectProperty(a1, a2, 1LL, 0LL, 0LL, *(_QWORD *)a3, (__int64)v6, (__int64)&v7, 1, (__int64)&v8, 0) >= 0
    && v7 == -1 )
  {
    *(_BYTE *)(a3 + 8) = -1;
    return 2;
  }
  return v3;
}
