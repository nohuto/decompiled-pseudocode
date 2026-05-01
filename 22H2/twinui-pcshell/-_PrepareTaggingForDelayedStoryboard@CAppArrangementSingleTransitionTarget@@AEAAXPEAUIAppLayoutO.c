/*
 * XREFs of ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18043814C
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804376D0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180201C64 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x180437F80 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x180438128 (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_GetAlignedRectsForApp @ 0x18043897C (s_GetAlignedRectsForApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::_PrepareTaggingForDelayedStoryboard(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3)
{
  bool v5; // dl
  __int128 *v6; // rsi
  int v7; // ebp
  __int128 v8; // xmm0
  int v9; // ecx
  int v10; // eax
  __int128 v11; // xmm0
  int v12; // eax
  CAppTransitionTargetBase *v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &v15) >= 0 )
  {
    v5 = (!(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
       || CAppArrangementSingleTransitionTarget::_IsDragVisual(this))
      && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2);
    v6 = (__int128 *)((char *)this + 188);
    v7 = 159744000;
    v8 = *(_OWORD *)((char *)this + 188);
    *(_OWORD *)((char *)this + 104) = v8;
    v9 = *((_DWORD *)this + 27);
    v10 = *((_DWORD *)this + 26);
    *(_OWORD *)((char *)this + 120) = v8;
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 28) -= v10;
    *((_DWORD *)this + 29) -= v9;
    *((_DWORD *)this + 27) -= v9;
    if ( v5 )
    {
      v11 = *v6;
      v12 = *((_DWORD *)this + 40);
      *(_OWORD *)((char *)this + 72) = *v6;
      *(_OWORD *)((char *)this + 88) = v11;
      if ( (v12 & 0x1A) != 0 )
      {
        *((_DWORD *)this + 10) = 3;
      }
      else if ( (v12 & 1) != 0 )
      {
        *((_DWORD *)this + 10) = 6;
      }
      else
      {
        *((_DWORD *)this + 10) = (v12 & 0x20) != 0 ? 83 : 21;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
           && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      s_GetAlignedRectsForApp((_DWORD)this + 172, (_DWORD)this + 188, (_DWORD)this + 72, (_DWORD)this + 88, 0LL, 0LL);
      if ( Platform::Guid::Equals(
             (CAppArrangementSingleTransitionTarget *)((char *)this + 172),
             (const struct _GUID *)((char *)this + 188))
        || (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *, struct IAppLayoutOperationItem *))(*(_QWORD *)this + 80LL))(
             this,
             a2) )
      {
        v13 = (CAppTransitionTargetBase *)((unsigned __int8)Platform::Guid::Equals(
                                                              (CAppArrangementSingleTransitionTarget *)((char *)this + 172),
                                                              (const struct _GUID *)((char *)this + 188)) << 21);
        v7 = (_DWORD)v13 + 159744000;
        *((_DWORD *)this + 10) = 28;
      }
      else
      {
        v7 = 696614912;
        *((_DWORD *)this + 10) = 23;
      }
      goto LABEL_11;
    }
    v13 = (CAppTransitionTargetBase *)*((unsigned int *)this + 19);
    v14 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 20) -= v14;
    *((_DWORD *)this + 21) -= (_DWORD)v13;
    *((_DWORD *)this + 19) -= (_DWORD)v13;
LABEL_11:
    *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(v13, *((HWND *)this + 7), 0, v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
}
