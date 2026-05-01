/*
 * XREFs of ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18001279C
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180037550 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003A6A8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetAppIdFromProcessId(DWORD dwProcessId, _QWORD *a2, unsigned __int16 **a3)
{
  char *v4; // rbx
  unsigned __int16 **v5; // r8
  signed int ProcessAppId; // edi
  signed int LastError; // eax

  *a2 = 0LL;
  v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( v4 )
    goto LABEL_2;
  LastError = GetLastError();
  ProcessAppId = LastError;
  if ( LastError > 0 )
    ProcessAppId = (unsigned __int16)LastError | 0x80070000;
  if ( ProcessAppId >= 0 )
LABEL_2:
    ProcessAppId = CallerIdentity::GetProcessAppId(v4, a2, v5);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  return (unsigned int)ProcessAppId;
}
