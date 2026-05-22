/*
 * XREFs of ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004353C
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180043430 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x180011864 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x180011D90 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18004413C (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@QEAA_NXZ @ 0x180044470 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@detail.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputModule::LoadModule(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v4; // ebp
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int SystemDirPath; // eax
  int v8; // edx
  unsigned int v9; // ebx
  const struct std::nothrow_t *v10; // rdx
  WCHAR *v12; // rbx
  DWORD FileAttributesW; // eax
  const struct GameInputVersion *v14; // rdx
  HMODULE Library; // rax
  HMODULE v16; // rbp
  FARPROC ProcAddress; // r15
  FARPROC v18; // r12
  FARPROC v19; // rax
  LPCWSTR lpFileName; // [rsp+70h] [rbp+18h] BYREF

  lpFileName = a3;
  v4 = *(_DWORD *)a1;
  v5 = 0;
  if ( *(_DWORD *)a1 )
    goto LABEL_21;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v4 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
LABEL_20:
    LeaveCriticalSection(v6);
LABEL_21:
    if ( v4 != 1 )
      return 2147549183LL;
    LOBYTE(v5) = *(_QWORD *)(a1 + 32) == 0LL;
    return v5;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::GetImpl'::`2'::impl);
  lpFileName = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::GetImpl'::`2'::impl);
  SystemDirPath = GameInputModule::GetSystemDirPath(
                    (__int64)L"GameInput.dll",
                    (const struct std::nothrow_t *)&lpFileName);
  v9 = SystemDirPath;
  if ( SystemDirPath >= 0 )
  {
    v12 = (WCHAR *)lpFileName;
    FileAttributesW = GetFileAttributesW(lpFileName);
    if ( FileAttributesW != -1
      && (FileAttributesW & 0x550) == 0
      && (int)GameInputModule::ValidateModuleCertChain(v12) >= 0 )
    {
      Library = LoadLibraryExW(v12, 0LL, 0x800u);
      v16 = Library;
      if ( Library )
      {
        if ( GameInputModule::ValidateModuleVersion(Library, v14) )
        {
          ProcAddress = GetProcAddress(v16, "GameInputCreate");
          if ( ProcAddress )
          {
            v18 = GetProcAddress(v16, "DllCanUnloadNow");
            if ( v18 )
            {
              v19 = GetProcAddress(v16, "DllGetClassObject");
              if ( v19 )
              {
                *(_QWORD *)(a1 + 8) = ProcAddress;
                *(_QWORD *)(a1 + 16) = v18;
                *(_QWORD *)(a1 + 24) = v19;
                *(_QWORD *)(a1 + 32) = v16;
                v16 = 0LL;
              }
            }
          }
        }
        if ( v16 )
          FreeLibrary(v16);
      }
    }
    *(_DWORD *)a1 = 1;
    v4 = 1;
    if ( v12 )
      operator delete(v12, v14);
    goto LABEL_20;
  }
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)SystemDirPath, v8);
  if ( lpFileName )
    operator delete((void *)lpFileName, v10);
  LeaveCriticalSection(v6);
  return v9;
}
