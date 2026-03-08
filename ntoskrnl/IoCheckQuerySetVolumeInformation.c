/*
 * XREFs of IoCheckQuerySetVolumeInformation @ 0x14087B5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetVolumeInformation(
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 *v3; // r9
  ULONG v4; // ecx

  if ( (unsigned int)FsInformationClass >= 0x10 )
    return -1073741821;
  v3 = IopSetFsOperationLength;
  if ( !SetOperation )
    v3 = IopQueryFsOperationLength;
  v4 = *((char *)v3 + (int)FsInformationClass);
  if ( (_BYTE)v4 )
    return Length < v4 ? 0xC0000004 : 0;
  else
    return -1073741821;
}
