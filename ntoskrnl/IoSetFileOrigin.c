/*
 * XREFs of IoSetFileOrigin @ 0x1403C9B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetFileOrigin(PFILE_OBJECT FileObject, BOOLEAN Remote)
{
  ULONG Flags; // eax
  NTSTATUS v3; // r8d
  int v4; // r9d
  ULONG v5; // eax

  Flags = FileObject->Flags;
  v3 = -1073741776;
  v4 = Flags & 0x1000000;
  if ( !Remote )
  {
    if ( !v4 )
      return v3;
    v5 = Flags & 0xFEFFFFFF;
    goto LABEL_4;
  }
  if ( !v4 )
  {
    v5 = Flags | 0x1000000;
LABEL_4:
    v3 = 0;
    FileObject->Flags = v5;
  }
  return v3;
}
