/*
 * XREFs of ?MasterInputThreadDeactivated@CBaseProcessor@@UEAAXXZ @ 0x1C00D6050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseProcessor::MasterInputThreadDeactivated(CBaseProcessor *this)
{
  *((_DWORD *)this + 2) = 1;
}
