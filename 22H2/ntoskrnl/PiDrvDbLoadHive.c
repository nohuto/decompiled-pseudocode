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

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, UNICODE_STRING *a2, int a3, HANDLE *a4)
{
  NTSTATUS v5; // ebx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+78h] [rbp+27h] BYREF

  *a4 = 0LL;
  *(&TargetKey.Length + 1) = 0;
  memset(&TargetKey.Attributes + 1, 0, 20);
  *(&SourceFile.Length + 1) = 0;
  memset(&SourceFile.Attributes + 1, 0, 20);
  TargetKey.RootDirectory = 0LL;
  SourceFile.RootDirectory = 0LL;
  TargetKey.Length = 48;
  SourceFile.Length = 48;
  TargetKey.ObjectName = a1;
  SourceFile.ObjectName = a2;
  TargetKey.Attributes = 576;
  SourceFile.Attributes = 576;
  v5 = ZwLoadKeyEx(&TargetKey, &SourceFile, a3 | 0x80, 0LL, 0LL, 0, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ZwOpenKey(a4, 0x2000000u, &TargetKey);
    if ( v5 < 0 )
      ZwUnloadKey2(&TargetKey, 0);
  }
  return (unsigned int)v5;
}
