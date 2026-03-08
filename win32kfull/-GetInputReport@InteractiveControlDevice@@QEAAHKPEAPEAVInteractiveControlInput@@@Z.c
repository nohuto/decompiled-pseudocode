/*
 * XREFs of ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0248400
 * Callers:
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C02265B0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C0243814 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02439F8 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::GetInputReport(
        InteractiveControlDevice *this,
        int a2,
        struct InteractiveControlInput **a3)
{
  struct InteractiveControlInput **v3; // rcx
  struct InteractiveControlInput *i; // rax

  v3 = (struct InteractiveControlInput **)((char *)this + 16);
  for ( i = *v3; ; i = *(struct InteractiveControlInput **)i )
  {
    if ( i == (struct InteractiveControlInput *)v3 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 1LL;
}
