/*
 * XREFs of ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C0225E48
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0021C48 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C002A470 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C02261A0 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
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
