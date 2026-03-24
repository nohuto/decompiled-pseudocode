/*
 * XREFs of InitializeWin32CrossSessionGlobals @ 0x1C01347A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C00A88E0 (ZwWin32CreateSectionRetainHandle.c)
 */

NTSTATUS InitializeWin32CrossSessionGlobals()
{
  NTSTATUS v0; // ebx
  int v2; // [rsp+28h] [rbp-11h]
  void *v3; // [rsp+38h] [rbp-1h]
  int v4; // [rsp+40h] [rbp+7h]
  _QWORD v5[2]; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  void *SectionHandle; // [rsp+A0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp+77h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v5[1] = L"\\Win32kCrossSessionGlobals";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  v5[0] = 3538996LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 66112;
  if ( gSessionId == gServiceSessionId )
  {
    SectionHandle = (void *)48;
    v0 = ZwWin32CreateSectionRetainHandle(
           &gxsSection,
           *(__int64 *)&gSessionId,
           &ObjectAttributes,
           (union _LARGE_INTEGER *)&SectionHandle,
           4u,
           v2,
           0LL,
           v3,
           v4,
           &gxsSectionHandle);
  }
  else
  {
    SectionHandle = 0LL;
    v0 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v0 < 0 )
      return v0;
    Object = 0LL;
    v0 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    gxsSection = Object;
    ZwClose(SectionHandle);
  }
  if ( v0 >= 0 )
  {
    ViewSize = 48LL;
    return MmMapViewInSessionSpace(gxsSection, &gpxsGlobals, &ViewSize);
  }
  return v0;
}
