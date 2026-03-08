/*
 * XREFs of ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C01D2AC0
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM1_3Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_3_CAPS *a2)
{
  int v2; // r8d
  UINT v3; // eax
  UINT v4; // r9d
  __int64 v5; // rax
  UINT v6; // r8d

  LOBYTE(v2) = 0;
  a2->Value = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 2764) )
  {
    v3 = 2;
    a2->Value = 2;
  }
  if ( *((_BYTE *)this + 2759) )
  {
    v3 |= 4u;
    a2->Value = v3;
  }
  if ( *((_DWORD *)this + 1060) )
  {
    v3 |= 8u;
    a2->Value = v3;
  }
  v4 = v3 | (*((_DWORD *)this + 109) >> 6) & 1;
  a2->Value = v4;
  v5 = *((_QWORD *)this + 365);
  if ( v5 )
    v2 = *(_DWORD *)(v5 + 24) >> 1;
  v6 = v4 | (16 * (v2 & 1));
  a2->Value = v6;
  a2->Value = v6 | (2 * (*((_DWORD *)this + 571) & 0x10));
}
