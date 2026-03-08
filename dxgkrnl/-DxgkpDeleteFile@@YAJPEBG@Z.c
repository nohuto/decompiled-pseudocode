/*
 * XREFs of ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C0306C8C
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0305F44 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1C0306750 (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0306E54 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkpDeleteFile(PCWSTR SourceString)
{
  struct _UNICODE_STRING v2; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = 0LL;
  RtlInitUnicodeString(&v2, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v2;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  return ZwDeleteFile(&ObjectAttributes);
}
