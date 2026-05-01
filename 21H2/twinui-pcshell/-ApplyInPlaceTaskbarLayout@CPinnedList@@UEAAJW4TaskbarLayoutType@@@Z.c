/*
 * XREFs of ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153480
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013AD6C (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801525FC (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152D74 (--1CPinList@@QEAA@XZ.c)
 *     ??1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180152F18 (--1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x18015601C (GetPidlsFromTaskbarLayout.c)
 *     GetPinSourceForPinnedItem @ 0x180156D54 (GetPinSourceForPinnedItem.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?StartActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x18015C1B4 (-StartActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C3E8 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::ApplyInPlaceTaskbarLayout(__int64 a1, unsigned int a2)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  int PinSourceForPinnedItem; // eax
  int v9; // eax
  struct PINENTRY *PidlOrAppID; // rsi
  LPCITEMIDLIST *v11; // rbx
  LPCITEMIDLIST *v12; // r15
  const struct _ITEMIDLIST *v13; // rdi
  struct PINENTRY *v14; // rax
  int v15; // eax
  ITEMIDLIST **v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  ITEMIDLIST *v19; // r15
  int v20; // eax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  LPCITEMIDLIST pidl1; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A0h]
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  memset_0(v30, 0, 0x138uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"TaskbarLayoutInPlaceActivity");
  v30[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::StartActivity(v30, a2);
  pv[0] = 0LL;
  pv[1] = 0LL;
  v28 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v25, &v26);
  v5 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    if ( v25 )
    {
      v24 = 0LL;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v24);
      v7 = v6(a1, &v24);
      v5 = v7;
      if ( v7 >= 0 )
      {
        while ( !(*(unsigned int (__fastcall **)(__int64, __int64, LPCITEMIDLIST *))(*(_QWORD *)v24 + 24LL))(
                   v24,
                   1LL,
                   &pidl1) )
        {
          PinSourceForPinnedItem = GetPinSourceForPinnedItem(pidl1, &v22);
          if ( PinSourceForPinnedItem >= 0 )
          {
            if ( v22 )
            {
              v29 = 0LL;
              if ( v26 || v22 != 1 )
              {
                v9 = CPinList::Load((CPinList *)&v29, (struct CPinnedList *)(a1 - 16));
                if ( v9 >= 0 )
                {
                  PidlOrAppID = CPinList::FindPidlOrAppID((CPinList *)&v29, pidl1, 0, 0LL);
                  v11 = (LPCITEMIDLIST *)pv[0];
                  v12 = (LPCITEMIDLIST *)((char *)pv[0] + 8 * (__int64)pv[1]);
                  while ( v11 != v12 )
                  {
                    v13 = *v11;
                    if ( ILIsEqual(pidl1, *v11) )
                      goto LABEL_22;
                    v14 = CPinList::FindPidlOrAppID((CPinList *)&v29, v13, 0, 0LL);
                    if ( PidlOrAppID )
                    {
                      if ( PidlOrAppID == v14 )
                        goto LABEL_22;
                    }
                    ++v11;
                  }
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x828,
                    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)v9);
                }
                v15 = CPinnedList::InternalModify(a1 - 16, pidl1, 0LL, 12LL, 0);
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x846,
                    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)v15);
              }
LABEL_22:
              CPinList::~CPinList((CPinList *)&v29);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x81E,
              (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
              (const char *)(unsigned int)PinSourceForPinnedItem);
          }
          ILFree((LPITEMIDLIST)pidl1);
        }
        v16 = (ITEMIDLIST **)pv[0];
        v17 = 0LL;
        v18 = (unsigned __int64)(8 * (__int64)pv[1] + 7) >> 3;
        if ( pv[0] > (char *)pv[0] + 8 * (__int64)pv[1] )
          v18 = 0LL;
        if ( v18 )
        {
          do
          {
            v19 = *v16;
            if ( (*(unsigned int (__fastcall **)(__int64, ITEMIDLIST *))(*(_QWORD *)a1 + 72LL))(a1, *v16) == 1 )
            {
              v20 = CPinnedList::InternalModify(a1 - 16, 0LL, v19, 12LL, 0);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x851,
                  (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v20);
            }
            ILFree(v19);
            ++v16;
            ++v17;
          }
          while ( v17 != v18 );
        }
        wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x818,
          (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v7);
      }
      Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v24);
    }
    else
    {
      v5 = -2147019873;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x813,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
  }
  if ( pv[0] )
  {
    CoTaskMemFree(pv[0]);
    pv[0] = 0LL;
  }
  pv[1] = 0LL;
  *((_QWORD *)&v28 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity *)v30);
  return v5;
}
