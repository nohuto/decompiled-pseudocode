/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x18020BBC8
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18020A670 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z @ 0x18019DF2C (-ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned __int8 v5; // cl
  char v6; // al
  char v7; // cl
  CComposition *v8; // rbx
  int ManipulationManager; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      v4 = -2147024809;
      v13 = 930;
LABEL_4:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, v13, 0LL);
      goto LABEL_14;
    }
    v5 = *((_BYTE *)this + 448);
    v6 = v5 | 2;
    v7 = v5 >> 1;
  }
  else
  {
    v7 = *((_BYTE *)this + 448);
    v6 = v7 | 1;
  }
  *((_BYTE *)this + 448) = v6;
  if ( (v7 & 1) != 0 )
    goto LABEL_13;
  v8 = (CComposition *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  ManipulationManager = CComposition::GetManipulationManager(v8, &v14);
  v4 = ManipulationManager;
  if ( ManipulationManager >= 0 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v4 = CManipulationManager::ScheduleDeferredWorkOnRenderThread((__int64)v14, v11, (__int64)this);
    if ( v4 < 0 )
    {
      (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 16LL))(this);
      v13 = 949;
      goto LABEL_4;
    }
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ManipulationManager, 0x3A7u, 0LL);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v4;
}
