/*
 * XREFs of ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180052AB4
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800529F0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x1800252B0 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180052C00 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompResources(CDesktopManager *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // r14
  int v7; // eax
  int v8; // eax
  int ProxyFromShared; // eax
  int v10; // eax
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 72);
  hObject = 0LL;
  if ( !*((_QWORD *)this + 9) )
  {
    v13 = 0xFFFFFFFE00000000uLL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL)
                                                                     + 352LL))(
           *(_QWORD *)(*((_QWORD *)this + 5) + 24LL),
           0xFFFFFFFE00000000uLL,
           (char *)this + 72);
    v5 = FailFastIfAccessDenied(v4);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5EFu);
    }
    else
    {
      v6 = (_QWORD *)((char *)this + 80);
      v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 216LL))(
             *(_QWORD *)(*((_QWORD *)this + 5) + 24LL),
             &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
             (char *)this + 80);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5F2u);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 224LL))(
               *(_QWORD *)(*((_QWORD *)this + 5) + 24LL),
               *v6,
               &hObject);
        v1 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5F8u);
        }
        else
        {
          ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                              *((_QWORD *)this + 5),
                              (__int64)hObject,
                              (volatile signed __int32 **)this + 11);
          v1 = ProxyFromShared;
          if ( ProxyFromShared < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x5FAu);
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(*v2, *v6);
            v1 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x5FCu);
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
          }
        }
      }
    }
    if ( hObject )
      CloseHandle(hObject);
  }
  return v1;
}
