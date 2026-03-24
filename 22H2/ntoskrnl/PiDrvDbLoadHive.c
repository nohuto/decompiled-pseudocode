/*
 * XREFs of PiDrvDbLoadHive @ 0x140725F74
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725C90 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7EB4 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x1403FBB60 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x1403FD360 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int Key; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v8[2]; // [rsp+78h] [rbp+27h] BYREF
  __int64 v9; // [rsp+80h] [rbp+2Fh]
  __int64 v10; // [rsp+88h] [rbp+37h]
  int v11; // [rsp+90h] [rbp+3Fh]
  int v12; // [rsp+94h] [rbp+43h]
  __int128 v13; // [rsp+98h] [rbp+47h]

  *a4 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v8[1] = 0;
  v12 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v9 = 0LL;
  ObjectAttributes.Length = 48;
  v8[0] = 48;
  ObjectAttributes.ObjectName = a1;
  v10 = a2;
  ObjectAttributes.Attributes = 576;
  v11 = 576;
  v13 = 0LL;
  Key = ZwLoadKeyEx((__int64)&ObjectAttributes, (__int64)v8);
  if ( Key >= 0 )
  {
    Key = ZwOpenKey(a4, 0x2000000u, &ObjectAttributes);
    if ( Key < 0 )
      ZwUnloadKey2((__int64)&ObjectAttributes, 0LL);
  }
  return (unsigned int)Key;
}
