/*
 * XREFs of ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020A8B8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C020B4AC (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C020C7CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

void __fastcall DXGGLOBAL::RecordFeatureUsageWddmVersion(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax

  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(this, a2) )
  {
    v4 = *(_DWORD *)(v3 + 2820);
    if ( v4 > *((_DWORD *)this + 76205) )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(Global, 11LL, v4);
      *((_DWORD *)this + 76205) = v4;
    }
    if ( v4 < *((_DWORD *)this + 76204) )
    {
      v6 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(v6, 10LL, v4);
      *((_DWORD *)this + 76204) = v4;
    }
  }
}
