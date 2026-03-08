/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802A1D18
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802A1224 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FACA4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x1802A21D0 (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1802A8BB4 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802A92AC (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this)
{
  volatile signed __int32 *v1; // r14
  struct CHolographicInteropTaskQueue *v2; // rsi
  struct CHolographicInteropTaskQueue *v3; // rbx
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CompositorTracing *v12; // rcx
  struct CHolographicClient *v14; // [rsp+60h] [rbp+30h] BYREF
  struct CHolographicInteropTaskQueue *v15; // [rsp+68h] [rbp+38h] BYREF
  struct CHolographicInteropTaskQueue *v16; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v6 = CHolographicInteropTaskQueue::Create(&v16);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2EDu, 0LL);
      v3 = v16;
    }
    else
    {
      v3 = v16;
      v8 = CHolographicClient::Create(v16, &v15, &v14);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2EEu, 0LL);
        v1 = (volatile signed __int32 *)v14;
        v2 = v15;
      }
      else
      {
        v1 = (volatile signed __int32 *)v14;
        *((_QWORD *)this + 5) = v14;
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
        *((_QWORD *)this + 6) = v3;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v3)(v3);
        v2 = v15;
        *((_QWORD *)this + 7) = v15;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v2)(v2);
        if ( CompositorTracing::IsEnabled(v10) )
        {
          wil::details::static_lazy<CompositorTracing>::get(
            v11,
            (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
          CompositorTracing::HolographicClientCreated_(v12);
        }
      }
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v2 + 8LL))(v2);
  if ( v3 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v1 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v1);
  return v4;
}
