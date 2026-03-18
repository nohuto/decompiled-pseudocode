/*
 * XREFs of ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A0E4
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 * Callees:
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A3E8 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

bool __fastcall CursorApiRouter::DwmSetPointer(struct _CURSINFO *a1, unsigned int a2)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  if ( a1 )
    return CursorApiRouter::SendMITCursorShape(a1, a2);
  memset(v3, 0, sizeof(v3));
  v4 = 0LL;
  SendShape(v3, 40LL);
  return 1;
}
