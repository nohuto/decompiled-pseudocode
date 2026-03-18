/*
 * XREFs of ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801C6CB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A8DC (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801C288C (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ?ValidateEmitterGeometry@CParticleEmitterVisual@@QEBAJPEAVCGeometry@@@Z @ 0x1801CA4E0 (-ValidateEmitterGeometry@CParticleEmitterVisual@@QEBAJPEAVCGeometry@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterGeometry(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = 0;
  if ( a2 != this[102] )
  {
    v5 = CParticleEmitterVisual::ValidateEmitterGeometry((CParticleEmitterVisual *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2399u, 0LL);
    }
    else
    {
      v7 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x239Au, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[102]);
        this[102] = a2;
        v10 = (__int64)this[800];
        this[800] = 0LL;
        if ( v10 )
          std::default_delete<EmitterShapes::CSpawner>::operator()(v9, v10);
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 9))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
