/*
 * XREFs of HalpAcquirePccInterface @ 0x1409328F4
 * Callers:
 *     HaliInitializePlatformDebugTriggers @ 0x140525970 (HaliInitializePlatformDebugTriggers.c)
 *     HalpStartPccCommand @ 0x140932CDC (HalpStartPccCommand.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     HalpQueryPccInterface @ 0x140932B30 (HalpQueryPccInterface.c)
 */

__int64 __fastcall HalpAcquirePccInterface(unsigned __int8 a1, UNICODE_STRING *a2, void *a3)
{
  int PccInterface; // edi
  int v5; // esi
  PVOID v6; // rbx
  void *v8; // [rsp+28h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  Object = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  PccInterface = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a1;
  IoStatusBlock = 0LL;
  if ( a2 && a2->Buffer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PccInterface = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0);
    if ( PccInterface >= 0 )
    {
      PccInterface = ObpReferenceObjectByHandleWithTag((ULONG_PTR)FileHandle, 0, 0LL, 0, 0x746C6644u, &Object, 0LL, 0LL);
      if ( PccInterface >= 0 )
      {
        v8 = a3;
        v6 = Object;
        PccInterface = HalpQueryPccInterface(*((PDEVICE_OBJECT *)Object + 1), v5, v8);
        ObfDereferenceObject(v6);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)PccInterface;
}
