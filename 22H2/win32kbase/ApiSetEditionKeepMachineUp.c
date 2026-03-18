/*
 * XREFs of ApiSetEditionKeepMachineUp @ 0x1C00E7762
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00BFBB0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKeepMachineUp(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( qword_1C02961F8 && (int)qword_1C02961F8() >= 0 && qword_1C0296200 )
    return (unsigned int)qword_1C0296200(a1, a2, a3, a4);
  return v4;
}
