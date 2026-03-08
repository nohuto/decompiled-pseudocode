/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C0213AC0
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C0213318 (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(int a1)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // r8d
  bool v4; // zf
  char v5; // bl
  int v7; // r8d
  int v8; // r8d
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGGLOBAL *)((char *)Global + 1632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v3 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 405);
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          goto LABEL_8;
        v4 = a1 == 4;
      }
      else
      {
        v4 = a1 == 3;
      }
    }
    else
    {
      v4 = a1 == 2;
    }
  }
  else
  {
    v4 = ((a1 - 1) & 0xFFFFFFFD) == 0;
  }
  if ( v4 )
  {
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) = a1;
    v5 = 1;
    goto LABEL_5;
  }
LABEL_8:
  v5 = 0;
LABEL_5:
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v5;
}
