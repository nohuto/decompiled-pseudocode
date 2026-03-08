/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0271354
 * Callers:
 *     ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x1C0195910 (-DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(__int64 a1)
{
  if ( qword_1C02D5688 )
    return ((__int64 (__fastcall *)(__int64))qword_1C02D5688)(a1);
  else
    return 0LL;
}
