/*
 * XREFs of ?OPMAllocateMemory@OPM@@YAPEAX_K0@Z @ 0x1C016CED0
 * Callers:
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016C918 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OPM::OPMAllocateMemory(OPM *this, __int64 a2)
{
  return ExAllocatePool2(a2 | 2, this);
}
