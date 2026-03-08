/*
 * XREFs of IoCheckQuerySetFileInformation @ 0x14087B210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetFileInformation(
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 *v3; // r9
  ULONG v4; // ecx

  if ( (unsigned int)FileInformationClass >= (FileRenameInformationExBypassAccessCheck|FileModeInformation) )
    return -1073741821;
  v3 = IopSetOperationLength;
  if ( !SetOperation )
    v3 = IopQueryOperationLength;
  v4 = *((char *)v3 + (int)FileInformationClass);
  if ( (_BYTE)v4 )
    return Length < v4 ? 0xC0000004 : 0;
  else
    return -1073741821;
}
