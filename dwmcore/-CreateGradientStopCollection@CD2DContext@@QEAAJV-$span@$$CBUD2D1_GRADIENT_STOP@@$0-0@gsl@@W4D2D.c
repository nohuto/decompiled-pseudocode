/*
 * XREFs of ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x1800F9C50
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateGradientStopCollection(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v5 = a1 + 1072;
  *a5 = 0LL;
  if ( !a1 )
    v5 = 1088LL;
  v7 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(1088LL, 0LL, 0, v7, 0x647u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD *))(**(_QWORD **)(a1 + 200) + 72LL))(
           *(_QWORD *)(a1 + 200),
           *((_QWORD *)a2 + 1),
           *a2,
           a3,
           a4,
           a5);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x64Du, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((a1 - 16) & -(__int64)(a1 != 0), v7, 0);
}
