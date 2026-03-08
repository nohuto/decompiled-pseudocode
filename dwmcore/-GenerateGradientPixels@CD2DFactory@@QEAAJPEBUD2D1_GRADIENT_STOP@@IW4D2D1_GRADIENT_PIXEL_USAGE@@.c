/*
 * XREFs of ?GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@W4D2D1_COLOR_SPACE@@22W4D2D1_EXTEND_MODE@@W4D2D1_COLOR_INTERPOLATION_MODE@@W4DXGI_FORMAT@@PEAXI@Z @ 0x1800B74F8
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::GenerateGradientPixels(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, int, int, int, _DWORD, int, __int64, int))(**(&g_DeviceManager + 1) + 40LL))(
           *(&g_DeviceManager + 1),
           a2,
           a3,
           a4,
           1,
           a6,
           1,
           a8,
           0,
           a10,
           a11,
           a12);
}
