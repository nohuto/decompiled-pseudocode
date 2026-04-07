/*
 * XREFs of ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x18008924C
 * Callers:
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x180089144 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x18008954C (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800BE194 (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 */

__int64 __fastcall CHolographicSlate::Initialize(
        CHolographicSlate *this,
        HWND a2,
        struct CVisual *a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int ProxyFromShared; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF

  v5 = (_QWORD *)((char *)this + 24);
  hObject = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 3);
  v11 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v10 + 216LL))(
          v10,
          &GUID_adbab0af_769d_40da_a180_540472cbcc34,
          v5);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a4);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v14 = a5;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, a5);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(*v5, (unsigned int)a2);
        v12 = v16;
        if ( v16 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 24LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 24LL));
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 5)
                                                                                  + 24LL)
                                                                    + 224LL))(
                  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
                  *v5,
                  &hObject);
          v12 = v17;
          if ( v17 >= 0 )
          {
            ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CHolographicInteropTextureProxy>(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                hObject,
                                (char *)this + 32);
            v12 = ProxyFromShared;
            if ( ProxyFromShared >= 0 )
            {
              v19 = *((_QWORD *)a3 + 2);
              if ( v19 )
                v20 = *(unsigned int *)(*(_QWORD *)(v19 + 16) + 24LL);
              else
                v20 = 0LL;
              v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                                 + 16LL)
                                                                                     + 16LL)
                                                                       + 1040LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 16LL),
                      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 24LL),
                      v20);
              v12 = v21;
              if ( v21 >= 0 )
              {
                *((_QWORD *)this + 5) = a3;
                _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
                *((_DWORD *)this + 12) = 0;
                *((_DWORD *)this + 13) = 0;
                *((_QWORD *)this + 2) = a2;
                *((_DWORD *)this + 14) = a4;
                *((_DWORD *)this + 15) = v14;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x4Au);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x48u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x46u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x42u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x41u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x40u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3Fu);
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v12 < 0 )
    CHolographicSlate::UnbindWindow(this);
  return (unsigned int)v12;
}
