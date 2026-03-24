/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0215F8C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009BA0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  char *v7; // r8
  unsigned __int16 v8; // ax

  if ( (*((_BYTE *)DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4) + 347) & 1) != 0 )
  {
    v7 = (char *)*((_QWORD *)this + 64);
    v8 = *((_WORD *)this + 252);
  }
  else
  {
    v7 = (char *)*((_QWORD *)this + 62);
    v8 = *((_WORD *)this + 244);
  }
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, v6, v7, v8);
}
