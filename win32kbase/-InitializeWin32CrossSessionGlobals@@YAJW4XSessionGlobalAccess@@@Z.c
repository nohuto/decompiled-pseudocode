/*
 * XREFs of ?InitializeWin32CrossSessionGlobals@@YAJW4XSessionGlobalAccess@@@Z @ 0x1C00CF780
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C00CF8B0 (ZwWin32CreateSectionRetainHandle.c)
 */

NTSTATUS __fastcall InitializeWin32CrossSessionGlobals(__int64 a1, __int64 a2)
{
  NTSTATUS v2; // ebx
  _QWORD v4[2]; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  void *SectionHandle; // [rsp+A8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+B0h] [rbp+77h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v4[1] = L"\\Win32kCrossSessionGlobals";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v4;
  v4[0] = 3538996LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 66112;
  if ( (_DWORD)a1 )
  {
    SectionHandle = 0LL;
    v2 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v2 < 0 )
      return v2;
    Object = 0LL;
    v2 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    gxsSection = Object;
    ZwClose(SectionHandle);
  }
  else
  {
    SectionHandle = (void *)40;
    v2 = ZwWin32CreateSectionRetainHandle(a1, a2, &ObjectAttributes, &SectionHandle);
  }
  if ( v2 >= 0 )
  {
    ViewSize = 40LL;
    return MmMapViewInSessionSpace(gxsSection, &gpxsGlobals, &ViewSize);
  }
  return v2;
}
