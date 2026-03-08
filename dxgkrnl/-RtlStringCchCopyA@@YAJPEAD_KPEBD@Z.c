/*
 * XREFs of ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C00499E4
 * Callers:
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02F34DC (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02F3B84 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02F3C44 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // al
  char *v6; // rax

  v3 = 15LL;
  v4 = a3 - a1;
  do
  {
    if ( v3 == -2147483631 )
      break;
    v5 = a1[v4];
    if ( !v5 )
      break;
    *a1++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = a1 - 1;
  if ( v3 )
    v6 = a1;
  *v6 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
