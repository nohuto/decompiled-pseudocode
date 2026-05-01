/*
 * XREFs of _lambda_86e5fad454e1f42def22d3aa1faf1060_::operator() @ 0x180097F8C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_86e5fad454e1f42def22d3aa1faf1060__&_::Run @ 0x1800987B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_86e5fad454e1f42def22d3aa1faf1060__-_--Run.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007F418 (--4-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1801E6AEC (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBB8C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

void __fastcall lambda_86e5fad454e1f42def22d3aa1faf1060_::operator()(__int64 a1)
{
  CCriticalFailureHandler *v2; // rcx
  int *v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 *v5; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  **(_DWORD **)a1 = CApplicationFrameService::_CreateFrameManager(*(_QWORD *)(a1 + 8), **(unsigned int **)(a1 + 16));
  if ( !**(_DWORD **)(a1 + 16) )
  {
    v3 = *(int **)a1;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v7) >= 0 )
      {
        switch ( v7 )
        {
          case 2u:
            *v3 = -2023406815;
            break;
          case 3u:
            *v3 = -2023406814;
            break;
          case 4u:
            *v3 = -2147418094;
            break;
          case 5u:
            *v3 = -2147022986;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( *v3 < 0 && *v3 != -2147024882 && *v3 != -2144862209 )
      CCriticalFailureHandler::HandleFailure(
        v2,
        v3,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4BDu,
        v5,
        v6);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(*(_QWORD *)v4 + 196LL) = ((**(int **)a1 >> 31) & 0xFFFFFFFE) + 2;
  WakeByAddressAll((PVOID)(*(_QWORD *)v4 + 196LL));
  if ( **(int **)a1 >= 0 )
    Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::operator=(
      *(__int64 **)(a1 + 32),
      (__int64 *)(*(_QWORD *)(a1 + 8) + 176LL));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
