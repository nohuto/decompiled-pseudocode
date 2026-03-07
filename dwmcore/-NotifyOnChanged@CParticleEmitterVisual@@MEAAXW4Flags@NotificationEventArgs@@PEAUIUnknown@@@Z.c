__int64 __fastcall CParticleEmitterVisual::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = a2;
  if ( a2 == 1 )
  {
    v4 = 6;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 808);
    if ( v6 && a3 == v6 )
    {
      *(_BYTE *)(a1 + 6446) = 0;
    }
    else if ( a2 == 4 )
    {
      v7 = *(_QWORD *)(a1 + 6400);
      *(_QWORD *)(a1 + 6400) = 0LL;
      if ( v7 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(0LL, v7);
    }
    else if ( a2 - 8 <= 1 )
    {
      v8 = *(_QWORD *)(a1 + 800);
      if ( v8 )
      {
        if ( v8 == a3 )
        {
          *(_BYTE *)(a1 + 6444) = 0;
          CParticleEmitterVisual::AnimateRemainingParticles((CParticleEmitterVisual *)a1);
        }
      }
    }
  }
  return CResource::NotifyOnChanged(a1, v4, a3);
}
