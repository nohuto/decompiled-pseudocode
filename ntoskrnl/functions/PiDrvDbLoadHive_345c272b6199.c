__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int Key; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v8[3]; // [rsp+78h] [rbp+27h] BYREF
  int v9; // [rsp+90h] [rbp+3Fh]
  int v10; // [rsp+94h] [rbp+43h]
  __int128 v11; // [rsp+98h] [rbp+47h]

  *a4 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v10 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v8[1] = 0LL;
  ObjectAttributes.ObjectName = a1;
  v8[2] = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v8[0] = 48LL;
  ObjectAttributes.Attributes = 576;
  v9 = 576;
  v11 = 0LL;
  Key = ZwLoadKeyEx((__int64)&ObjectAttributes, (__int64)v8);
  if ( Key >= 0 )
  {
    Key = ZwOpenKey(a4, 0x2000000u, &ObjectAttributes);
    if ( Key < 0 )
      ZwUnloadKey2((__int64)&ObjectAttributes, 0LL);
  }
  return (unsigned int)Key;
}
