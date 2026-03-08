/*
 * XREFs of ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01BF528
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01BF42C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C01BF620 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(
        struct _LUID *a1,
        unsigned int *a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct _LUID v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  unsigned int v11; // [rsp+2Ch] [rbp-34h]
  int v12; // [rsp+30h] [rbp-30h]
  int v13; // [rsp+34h] [rbp-2Ch]
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  int v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+44h] [rbp-1Ch]
  __int16 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+4Ah] [rbp-16h]
  int v20; // [rsp+4Ch] [rbp-14h]
  __int16 v21; // [rsp+50h] [rbp-10h]

  v14 = 0;
  v16 = 0;
  v18 = 0;
  v9 = 0LL;
  v10 = -1;
  v11 = -1;
  v15 = -1;
  v12 = -2;
  v13 = -2;
  v17 = 1;
  v19 = 0;
  v20 = 4;
  v21 = 256;
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *)&v9);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
  }
  else
  {
    *a1 = v9;
    *a2 = v11;
  }
  return v7;
}
