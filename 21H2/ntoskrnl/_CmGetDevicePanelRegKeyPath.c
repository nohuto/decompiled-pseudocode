/*
 * XREFs of _CmGetDevicePanelRegKeyPath @ 0x140A28CA4
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140699B5C (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A281F8 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A28FC4 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     _CmValidateDevicePanelName @ 0x140A29BBC (_CmValidateDevicePanelName.c)
 */

NTSTATUS __fastcall CmGetDevicePanelRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    return -1073741811;
  result = CmValidateDevicePanelName(a1, a2);
  if ( result >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a2 + 2 * v10) );
    v11 = v10 + 47;
    if ( v11 > 0xFFFFFFFF )
    {
      return -1073741675;
    }
    else
    {
      if ( a8 )
        *a8 = v11;
      if ( (unsigned int)v11 <= (unsigned int)cchDest )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"System\\CurrentControlSet\\Control\\DevicePanels\\%s",
                 a2);
      else
        return -1073741789;
    }
  }
  return result;
}
