/*
 * XREFs of ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C01C7100
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01C7040 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000B374 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

BLTQUEUE_EMULATED_VSYNC_SOURCE *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _EX_TIMER *a3,
        struct _EX_TIMER *a4)
{
  BLTQUEUE_EMULATED_VSYNC_SOURCE *result; // rax
  DXGDODPRESENT *v9; // rcx
  DXGADAPTER *Adapter; // rax
  struct _LUID *v11; // rdx
  char v12; // r8

  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_EMULATED_VSYNC_SOURCE::`vftable';
  *((_BYTE *)this + 8) = 0;
  KeInitializeEvent((PRKEVENT)this + 1, SynchronizationEvent, 0);
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(a2) + 109) & 0x100) != 0 )
    {
      Adapter = DXGDODPRESENT::GetAdapter(v9);
      if ( !DXGADAPTER::IsAdapterSessionized(Adapter, v11, 0LL, 0LL) || g_bSkuSupportMultipleUsers == v12 )
        *((_BYTE *)this + 8) = 1;
    }
  }
  result = this;
  if ( !*((_BYTE *)this + 8) )
    a3 = a4;
  *((_QWORD *)this + 2) = a3;
  return result;
}
