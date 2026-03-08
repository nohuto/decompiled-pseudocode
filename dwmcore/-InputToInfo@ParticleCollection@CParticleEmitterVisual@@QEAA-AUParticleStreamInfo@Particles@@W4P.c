/*
 * XREFs of ?InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA?AUParticleStreamInfo@Particles@@W4ParticleInputSource@4Composition@UI@Windows@@@Z @ 0x1802427DC
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x180240B14 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ParticleCollection::InputToInfo(__int64 *a1, __int64 a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !a3 )
  {
    v11 = a1[24];
    goto LABEL_17;
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    v11 = a1[12];
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = a1[9];
LABEL_17:
    *(_DWORD *)(a2 + 12) = 1;
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = a1[15];
    *(_DWORD *)(a2 + 8) = 3;
    *(_DWORD *)(a2 + 12) = 4;
    goto LABEL_19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = *a1;
    *(_DWORD *)(a2 + 12) = 3;
LABEL_18:
    *(_DWORD *)(a2 + 8) = 0;
    goto LABEL_19;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_DWORD *)(a2 + 8) = 1;
    goto LABEL_10;
  }
  if ( v9 == 1 )
  {
    *(_DWORD *)(a2 + 8) = 2;
LABEL_10:
    v11 = *a1;
    *(_DWORD *)(a2 + 12) = 3;
LABEL_19:
    *(_QWORD *)a2 = v11;
    return a2;
  }
  RaiseFailFastException(0LL, 0LL, 0);
  v10 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = v10;
  *(_DWORD *)(a2 + 12) = 3;
  return a2;
}
