/*
 * XREFs of ?WaitForDeploymentOperation@Deployment@Management@Windows@@YAJKPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@3@PEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAPEAUIDeploymentResult@123@@Z @ 0x1800AACA4
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Callback@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@V_lambda_9a0aae7dbba35881869cec547d91271e_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@@01@$$QEAV_lambda_9a0aae7dbba35881869cec547d91271e_@@@Z @ 0x18009D7B0 (--$Callback@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Manag.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Windows::Management::Deployment::WaitForDeploymentOperation(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        ...)
{
  __int64 v4; // rbx
  HANDLE Event; // rax
  void *v6; // r15
  signed int v7; // eax
  signed int v8; // esi
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rsi
  DWORD v13; // eax
  signed int LastError; // eax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  int v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF
  va_list va; // [rsp+78h] [rbp+48h]
  __int64 v21; // [rsp+80h] [rbp+50h]
  va_list va1; // [rsp+88h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v4 = 0LL;
  v18 = 0LL;
  v17 = 0;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  v6 = Event;
  if ( Event )
  {
    v16[0] = Event;
    v16[1] = 0LL;
    v9 = Microsoft::WRL::Callback<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,_lambda_9a0aae7dbba35881869cec547d91271e_>(
           (__int64 *)va,
           (__int64)v16);
    v10 = 0LL;
    v4 = 0LL;
    if ( v16 != v9 )
    {
      v4 = *v9;
      v10 = *v9;
      *v9 = 0LL;
    }
    v16[0] = v10;
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v4 )
    {
      v12 = **a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v8 = v12(a2, &GUID_00000036_0000_0000_c000_000000000046, &v18);
      if ( v8 >= 0 )
      {
        v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a2)[8])(a2, v10);
        if ( v8 >= 0 )
        {
          v13 = WaitForSingleObject(v6, 0xFFFFFFFF);
          if ( v13 == 258 )
          {
            v8 = -2147023436;
          }
          else if ( v13 )
          {
            LastError = GetLastError();
            v8 = LastError;
            if ( LastError > 0 )
              v8 = (unsigned __int16)LastError | 0x80070000;
          }
          else
          {
            v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v17);
            if ( v8 >= 0 )
            {
              if ( !v21
                || (v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[10])(a2),
                    v8 >= 0) )
              {
                if ( v17 == 2 )
                {
                  v8 = -2147009288;
                }
                else if ( v17 == 3 )
                {
                  LODWORD(v19) = 0;
                  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, (__int64 *)va);
                  if ( v8 >= 0 )
                    v8 = v19;
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 80LL))(v18);
              }
            }
          }
        }
      }
    }
    else
    {
      v8 = -2147024882;
    }
    CloseHandle(v6);
  }
  else
  {
    v7 = GetLastError();
    v8 = v7;
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v8;
}
