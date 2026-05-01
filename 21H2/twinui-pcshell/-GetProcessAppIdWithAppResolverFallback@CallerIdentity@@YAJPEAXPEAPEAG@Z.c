/*
 * XREFs of ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1804DAFE4
 * Callers:
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x18004A318 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1803BA398 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003A6A8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CoCreateInstance_0 @ 0x18009136F (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppIdWithAppResolverFallback(
        HANDLE Process,
        unsigned int **a2,
        unsigned __int16 **a3)
{
  int ProcessAppId; // ebx
  DWORD ProcessId; // eax
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  ProcessAppId = CallerIdentity::GetProcessAppId(Process, a2, a3);
  if ( ProcessAppId < 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    ProcessAppId = CoCreateInstance_0(
                     &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     &ppv);
    if ( ProcessAppId >= 0 )
    {
      ProcessId = GetProcessId(Process);
      ProcessAppId = (*(__int64 (__fastcall **)(LPVOID, _QWORD, unsigned int **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppv + 48LL))(
                       ppv,
                       ProcessId,
                       a2,
                       0LL,
                       0LL,
                       0LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)ProcessAppId;
}
