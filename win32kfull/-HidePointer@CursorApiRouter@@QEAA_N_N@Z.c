/*
 * XREFs of ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C002A470
 * Callers:
 *     EditionShowSystemCursor @ 0x1C002A450 (EditionShowSystemCursor.c)
 *     SetPointerMetaVisibility @ 0x1C007B75C (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01430AC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01AECF8 (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     GreHidePointer @ 0x1C002A524 (GreHidePointer.c)
 *     GreUpdatePointerState @ 0x1C002A8E0 (GreUpdatePointerState.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00DB69C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C0225E48 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

char __fastcall CursorApiRouter::HidePointer(CursorApiRouter *this, unsigned __int8 a2)
{
  char v2; // bl
  unsigned int v3; // esi
  char v4; // bp
  int v5; // edi
  CursorApiRouter *v6; // rcx
  int v7; // edi

  v2 = 0;
  v3 = a2;
  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&qword_1C0362190, 0LL);
  v5 = dword_1C0362188;
  if ( dword_1C0362188 != 1 )
  {
    if ( dword_1C0362188 != 2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( (unsigned int)GreUpdatePointerState(v3) )
  {
    byte_1C0362176 = v3;
LABEL_3:
    v4 = 1;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(&qword_1C0362190, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        return (unsigned int)GreHidePointer(v3) != 0;
    }
    else
    {
      if ( (_BYTE)v3 )
        CursorApiRouter::DwmSetPointer(0LL, 0);
      else
        CursorApiRouter::ForceSetCurrentCursorShape(v6);
      return 1;
    }
  }
  return v2;
}
