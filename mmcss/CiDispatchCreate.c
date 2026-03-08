/*
 * XREFs of CiDispatchCreate @ 0x1C000A010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Z @ 0x1C00046F0 (WPP_SF_Z.c)
 */

__int64 __fastcall CiDispatchCreate(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  PFILE_OBJECT FileObject; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  do
  {
    if ( !RtlCompareUnicodeString(
            &FileObject->FileName,
            (PCUNICODE_STRING)((char *)&CiObjectCreationTable + 24 * v4),
            0) )
      return (*((__int64 (__fastcall **)(IRP *, struct _IO_STACK_LOCATION *))&CiObjectCreationTable + 3 * v4 + 2))(
               a2,
               CurrentStackLocation);
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 3 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_Z((__int64)WPP_GLOBAL_Control->AttachedDevice, v6, v7, &FileObject->FileName.Length);
  a2->IoStatus.Status = -1073741275;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 3221226021LL;
}
