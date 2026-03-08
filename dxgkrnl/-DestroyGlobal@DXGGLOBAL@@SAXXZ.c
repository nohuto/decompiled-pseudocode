/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C030D864
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C0205754 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DxgkUnload @ 0x1C0305A60 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void DXGGLOBAL::DestroyGlobal(void)
{
  if ( *(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    (***(void (__fastcall ****)(_QWORD, __int64))&DXGGLOBAL::m_pGlobal)(*(_QWORD *)&DXGGLOBAL::m_pGlobal, 1LL);
    *(_QWORD *)&DXGGLOBAL::m_pGlobal = 0LL;
  }
}
