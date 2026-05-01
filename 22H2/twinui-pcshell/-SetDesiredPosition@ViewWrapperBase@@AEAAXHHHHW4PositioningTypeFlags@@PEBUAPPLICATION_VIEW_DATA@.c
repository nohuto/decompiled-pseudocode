/*
 * XREFs of ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180340908
 * Callers:
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18033DE40 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x180341130 (-SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180341170 (-SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z @ 0x180341440 (-SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18033FC04 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18033FC74 (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18033FDD8 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x1803442D4 (-s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA-AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewSt.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::SetDesiredPosition(_QWORD *a1, int a2, int a3, int a4, int a5, char a6, __int64 a7)
{
  RTL_SRWLOCK *v11; // r14
  __int64 v12; // rcx
  char v13; // di
  int v14; // edx
  int v15; // edx
  char v16; // r12
  char v17; // si
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  ViewWrapperBase *v22; // rcx
  _OWORD v23[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v24; // [rsp+58h] [rbp-31h]
  int v25; // [rsp+60h] [rbp-29h]
  _OWORD v26[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v27; // [rsp+88h] [rbp-1h]
  int v28; // [rsp+90h] [rbp+7h]

  v11 = (RTL_SRWLOCK *)(a1[21] + 280LL);
  AcquireSRWLockExclusive(v11);
  *((_BYTE *)a1 + 516) = 1;
  v13 = a6;
  if ( (a6 & 1) != 0 )
  {
    v14 = *((_DWORD *)a1 + 50);
    if ( v14 == a2 && *((_DWORD *)a1 + 51) == a3 )
    {
      v13 = a6 & 0xFE;
    }
    else
    {
      v12 = (unsigned int)(a3 - *((_DWORD *)a1 + 51));
      *((_DWORD *)a1 + 50) = a2;
      *((_DWORD *)a1 + 52) += a2 - v14;
      *((_DWORD *)a1 + 53) += v12;
      *((_DWORD *)a1 + 51) = a3;
    }
  }
  if ( (v13 & 2) != 0 )
  {
    v15 = *((_DWORD *)a1 + 50);
    if ( *((_DWORD *)a1 + 52) - v15 == a4 && *((_DWORD *)a1 + 53) - *((_DWORD *)a1 + 51) == a5 )
    {
      v16 = 0;
      if ( !IsPPIEdition() )
        v13 &= ~2u;
    }
    else
    {
      *((_DWORD *)a1 + 52) = v15 + a4;
      v12 = (unsigned int)(*((_DWORD *)a1 + 51) + a5);
      *((_DWORD *)a1 + 53) = v12;
      v16 = 1;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = 0;
  ViewWrapperBase::s_ComputeAggregatedViewData(v12, v23, (char *)a1 + 220, a1 + 33);
  if ( a7 )
  {
    ViewWrapperBase::s_ComputeAggregatedViewData(v19, v26, a7, v21);
    v17 = (*(__int64 (__fastcall **)(_QWORD *, _OWORD *, _OWORD *))(*a1 + 136LL))(a1, v23, v26);
    *(_OWORD *)((char *)a1 + 220) = *(_OWORD *)a7;
    *(_OWORD *)((char *)a1 + 236) = *(_OWORD *)(a7 + 16);
    *(_QWORD *)((char *)a1 + 252) = *(_QWORD *)(a7 + 32);
    v22 = (ViewWrapperBase *)*(unsigned int *)(a7 + 40);
    *((_DWORD *)a1 + 65) = (_DWORD)v22;
    ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
      v22,
      (const struct APPLICATION_VIEW_DATA *)v23,
      (const struct APPLICATION_VIEW_DATA *)v26);
    v23[0] = v26[0];
    v23[1] = v26[1];
    v24 = v27;
    v25 = v28;
  }
  if ( (v13 & 3) != 0 || v17 )
  {
    LOBYTE(v20) = v17;
    LOBYTE(v18) = v16;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 144LL))(a1, v18, v20);
    ViewWrapperBase::PushDesiredPositionToWindow((__int64)a1, v13);
    if ( (v13 & 2) != 0 || v17 )
    {
      if ( a1[24] )
        ViewWrapperBase::PushDesiredBoundsToView((ViewWrapperBase *)a1, (const struct APPLICATION_VIEW_DATA *)v23);
    }
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
}
