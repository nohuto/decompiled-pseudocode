/*
 * XREFs of ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C005B560
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0007A4C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0007E18 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0012878 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C005B640 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C008CFCC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00A6A80 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00A8684 (-Allocate@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     _lambda_d6aeea60be8ba0a18c32151e3588814d_::operator() @ 0x1C013B8F8 (_lambda_d6aeea60be8ba0a18c32151e3588814d_--operator().c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C01FE780 (-Allocate@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C02287B0 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C03064A4 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(
        _QWORD *a1)
{
  ExReleasePushLockExclusiveEx(*a1, 0LL);
  KeLeaveCriticalRegion();
}
