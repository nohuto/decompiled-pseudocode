/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C016D28C
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C016E010 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000806C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

bool __fastcall BmlIsSupportedPathRotation(unsigned int a1, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  int v2; // eax
  unsigned int v3; // r10d
  __int64 v4; // r11
  unsigned int v5; // r8d
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // r10d
  int v10; // eax
  unsigned int v11; // r10d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax

  v2 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  v5 = 1;
  v6 = v2 - 1;
  if ( v6 )
  {
    v13 = v6 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_19;
        v7 = v3 >> 3;
      }
      else
      {
        v7 = v3 >> 2;
      }
    }
    else
    {
      v7 = v3 >> 1;
    }
  }
  else
  {
    LOBYTE(v7) = v3;
  }
  if ( (v7 & 1) == 0 )
  {
LABEL_8:
    LOBYTE(v5) = 0;
    return v5;
  }
  v8 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v4);
  v10 = v8 - v5;
  if ( !v10 )
  {
    v11 = v9 >> 4;
    goto LABEL_6;
  }
  v15 = v10 - v5;
  if ( v15 )
  {
    v16 = v15 - v5;
    if ( v16 )
    {
      if ( v16 == v5 )
      {
        v11 = v9 >> 7;
        goto LABEL_6;
      }
LABEL_19:
      WdLogSingleEntry1(v5, v4);
      goto LABEL_8;
    }
    v11 = v9 >> 6;
  }
  else
  {
    v11 = v9 >> 5;
  }
LABEL_6:
  if ( ((unsigned __int8)v11 & (unsigned __int8)v5) == 0 )
    goto LABEL_8;
  return v5;
}
