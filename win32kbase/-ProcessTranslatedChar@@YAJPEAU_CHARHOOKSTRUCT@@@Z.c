/*
 * XREFs of ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1C0155770
 * Callers:
 *     <none>
 * Callees:
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00DC8F8 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     Feature_ClipboardCredentialMonitor__private_IsEnabledDeviceUsage @ 0x1C00DCA34 (Feature_ClipboardCredentialMonitor__private_IsEnabledDeviceUsage.c)
 *     ImInspectChar @ 0x1C02746E0 (ImInspectChar.c)
 */

__int64 __fastcall ProcessTranslatedChar(struct _CHARHOOKSTRUCT *a1)
{
  __int16 v2; // r8
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // bx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !(unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage() )
    return 0LL;
  v2 = *((_WORD *)a1 + 9);
  v3 = v2 & 2 | 4;
  if ( (v2 & 4) == 0 )
    v3 = v2 & 2;
  v4 = v3 | 0x10;
  if ( (v2 & 0x10) == 0 )
    v4 = v3;
  if ( (unsigned int)Feature_ClipboardCredentialMonitor__private_IsEnabledDeviceUsage() )
  {
    if ( (*((_BYTE *)a1 + 18) & 0x20) != 0 )
      v4 |= 0x20u;
  }
  v5 = *((unsigned int *)a1 + 5);
  v6 = *((_QWORD *)a1 + 3);
  v7 = *(_QWORD *)a1;
  *((_WORD *)a1 + 9) = v4;
  return ImInspectChar(v7, v6, v5, v4);
}
