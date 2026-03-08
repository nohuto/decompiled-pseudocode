/*
 * XREFs of ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C0252730
 * Callers:
 *     ?SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025BE60 (-SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C010 (-SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C0F0 (-SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetBufferProperty@CMeshGeometry2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C160 (-SetBufferProperty@CMeshGeometry2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C2A0 (-SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C5B0 (-SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArrayBase::Copy(
        DirectComposition::CMarshaledArrayBase *this,
        const void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 Quota; // rbp
  char *v13; // rdx
  char *v14; // rdx

  v6 = 0;
  v9 = a3 / a4;
  v10 = a4 * (a3 / a4);
  if ( a3 == v10 )
  {
    v11 = *((_QWORD *)this + 2);
    if ( v9 <= v11 )
    {
      if ( v9 )
      {
        if ( v9 < v11 )
          memset((void *)(v10 + *((_QWORD *)this + 1)), 0, a4 * (v11 - v9));
      }
      else
      {
        v14 = (char *)*((_QWORD *)this + 1);
        if ( v14 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
          *((_QWORD *)this + 1) = 0LL;
        }
      }
    }
    else
    {
      Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, a3, a5);
      if ( !Quota )
        return (unsigned int)-1073741801;
      v13 = (char *)*((_QWORD *)this + 1);
      if ( v13 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
      *((_QWORD *)this + 1) = Quota;
    }
    memmove(*((void **)this + 1), a2, a3);
    *((_QWORD *)this + 2) = v9;
    *(_QWORD *)this = 0LL;
    return v6;
  }
  return (unsigned int)-1073741811;
}
