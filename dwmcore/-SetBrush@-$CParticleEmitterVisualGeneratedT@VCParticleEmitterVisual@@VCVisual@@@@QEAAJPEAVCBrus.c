/*
 * XREFs of ?SetBrush@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCBrush@@@Z @ 0x1801C32A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateBrush@CParticleEmitterVisual@@QEBAJPEAVCBrush@@@Z @ 0x1801C7200 (-ValidateBrush@CParticleEmitterVisual@@QEBAJPEAVCBrush@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetBrush(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  struct CResource *v9; // rax

  v2 = 0;
  if ( a2 != this[101] )
  {
    v5 = CParticleEmitterVisual::ValidateBrush((CParticleEmitterVisual *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2377u, 0LL);
    }
    else
    {
      v7 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2378u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[101]);
        v9 = *this;
        this[101] = a2;
        *((_BYTE *)this + 6446) = 0;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v9 + 9))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
