/*
 * XREFs of ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x18011E690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ @ 0x1800E6470 (-GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ.c)
 */

char __fastcall ControllerNavigationClientProxy::GetEnabled(ControllerNavigationClientProxy *this)
{
  bool Enabled; // al
  char v3; // dl

  Enabled = BamoControllerNavigationManagerProxy::GetEnabled(this);
  v3 = 0;
  if ( Enabled )
    return *((_BYTE *)this + 72) == 0;
  return v3;
}
