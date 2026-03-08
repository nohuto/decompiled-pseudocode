/*
 * XREFs of ?CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x18026670C
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterEdge::CreatePathEmitterShape(
        struct ID2D1Geometry *a1,
        struct EmitterShapes::CPathEmitterEdge **a2)
{
  struct EmitterShapes::CPathEmitterEdge *v4; // rax
  struct EmitterShapes::CPathEmitterEdge *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  struct EmitterShapes::CPathEmitterEdge *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct EmitterShapes::CPathEmitterEdge *)operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &EmitterShapes::CPathEmitterEdge::`vftable';
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    v12 = v4;
    ((void (__fastcall *)(struct EmitterShapes::CPathEmitterEdge *))*(&EmitterShapes::CPathEmitterEdge::`vftable' + 1))(v4);
  }
  else
  {
    v5 = 0LL;
    v12 = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 1LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x76u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct EmitterShapes::CPathEmitterEdge *))(*(_QWORD *)v5 + 72LL))(v5);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x77u, 0LL);
    }
    else
    {
      *a2 = v5;
      (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterEdge *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return v8;
}
