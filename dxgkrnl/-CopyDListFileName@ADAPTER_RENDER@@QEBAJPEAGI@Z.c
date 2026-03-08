/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02BB968
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0011E10 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, char *a2)
{
  __int64 v4; // rdx
  char *v5; // r8
  unsigned __int16 v6; // ax

  if ( (*((_DWORD *)DXGPROCESS::GetCurrent((__int64)this) + 106) & 8) != 0 )
  {
    v5 = (char *)*((_QWORD *)this + 79);
    v6 = *((_WORD *)this + 312);
  }
  else
  {
    v5 = (char *)*((_QWORD *)this + 77);
    v6 = *((_WORD *)this + 304);
  }
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, v4, v5, v6);
}
