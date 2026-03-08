/*
 * XREFs of ?QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z @ 0x1C01D7DBC
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM3_0Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_3_0_CAPS *a2)
{
  int v3; // r8d
  int v4; // ecx

  *(_DWORD *)a2 = 0;
  if ( *((_QWORD *)this + 366) )
  {
    v3 = (**((_DWORD **)this + 353) >> 18) & 3;
    *(_DWORD *)a2 = v3;
    v4 = v3 | (**((_DWORD **)this + 353) >> 18) & 4;
    *(_DWORD *)a2 = v4;
    *(_DWORD *)a2 = v4 | (*((_DWORD *)this + 698) >> 3) & 8;
  }
}
