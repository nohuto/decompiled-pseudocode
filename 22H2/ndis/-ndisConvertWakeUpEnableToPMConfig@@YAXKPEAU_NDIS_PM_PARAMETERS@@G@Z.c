/*
 * XREFs of ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1C00900B0
 * Callers:
 *     ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095710 (-ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00969D4 (-ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertWakeUpEnableToPMConfig(char a1, struct _NDIS_PM_PARAMETERS *a2, __int16 a3)
{
  UCHAR v3; // al
  USHORT v4; // r8

  if ( a3 == 1 )
  {
    v3 = 1;
    v4 = 16;
  }
  else
  {
    if ( a3 != 2 )
      return;
    v3 = 2;
    v4 = 20;
  }
  a2->Header.Type = 0x80;
  a2->Header.Size = v4;
  a2->Header.Revision = v3;
  if ( (a1 & 1) != 0 )
    a2->EnabledWoLPacketPatterns |= 2u;
  if ( (a1 & 2) != 0 )
    a2->EnabledWoLPacketPatterns |= 1u;
  if ( (a1 & 4) != 0 )
    a2->WakeUpFlags |= 1u;
}
