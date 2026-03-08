/*
 * XREFs of ??1CInputDest@@QEAA@XZ @ 0x1C00F1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CInputDest::~CInputDest(CInputDest *this)
{
  CInputDest::SetEmpty(this);
}
