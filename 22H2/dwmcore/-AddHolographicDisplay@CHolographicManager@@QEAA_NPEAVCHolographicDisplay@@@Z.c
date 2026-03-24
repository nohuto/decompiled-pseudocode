/*
 * XREFs of ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802528D0
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x180256338 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800DB20C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800DB230 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z @ 0x180252EC0 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18025A660 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  unsigned int v2; // esi
  const struct _GUID *v3; // rbx
  __int64 v5; // rcx
  bool v6; // di
  CompositorTracing *v7; // rcx
  __int64 v8; // rcx
  unsigned int Ptr; // eax
  unsigned int v10; // r8d
  int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  CHolographicInteropTaskQueue *v14; // rcx
  struct IUnknown *v15; // r8
  CMILCOMBase *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v2 = *((_DWORD *)a2 + 20);
  v3 = (const struct _GUID *)((char *)a2 + 84);
  v6 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v5,
      _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicDisplayAdd_(v7, v2, v3);
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[17].Ptr;
  v10 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_9;
  }
  if ( v10 > HIDWORD(this[16].Ptr) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[14], 8, 1, &v17);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
LABEL_9:
      if ( v11 < 0 )
        goto LABEL_14;
    }
  }
  else
  {
    *((_QWORD *)this[14].Ptr + LODWORD(this[17].Ptr)) = v17;
    LODWORD(this[17].Ptr) = v10;
  }
  CMILCOMBase::InternalAddRef(v17);
  v14 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v14 )
  {
    v15 = (struct IUnknown *)((char *)v17 + 64);
    if ( !v17 )
      v15 = 0LL;
    v6 = CHolographicInteropTaskQueue::PostMessageW(v14, 6u, v15, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_14:
  ReleaseSRWLockExclusive(this + 13);
  return v6;
}
