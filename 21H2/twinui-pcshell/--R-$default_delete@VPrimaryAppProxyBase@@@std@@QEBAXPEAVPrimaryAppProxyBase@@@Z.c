/*
 * XREFs of ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x18044A040
 * Callers:
 *     ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1800D64CC (--1-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ.c)
 *     ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1800D6500 (--1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ.c)
 *     ??4?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D6520 (--4-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D658C (--4-$unique_ptr@VPrimaryAppProxyBase@@U-$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAE.c)
 *     ??1KioskPositioner@@UEAA@XZ @ 0x180449E98 (--1KioskPositioner@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<PrimaryAppProxyBase>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
