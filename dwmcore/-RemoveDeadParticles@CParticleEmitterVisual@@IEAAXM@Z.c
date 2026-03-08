/*
 * XREFs of ?RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x180242994
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024372C (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18023E9F0 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x180241F14 (-EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV-$vector@HV-$allocator@H@std.c)
 */

void __fastcall CParticleEmitterVisual::RemoveDeadParticles(CParticleEmitterVisual *this, float a2)
{
  _BYTE *v3; // rcx
  __int64 v5; // rbx
  _BYTE *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  float v9; // xmm1_4
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  _BYTE *v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v5 = (__int64)(*((_QWORD *)this + 134) - *((_QWORD *)this + 133)) >> 2;
  if ( v5 )
  {
    v6 = (_BYTE *)*((_QWORD *)&v10 + 1);
    do
    {
      v7 = *((_QWORD *)this + 136);
      --v5;
      v8 = *((_QWORD *)this + 133);
      v9 = (float)(a2 / *(float *)(v7 + 4 * v5)) + *(float *)(v8 + 4 * v5);
      *(float *)(v8 + 4 * v5) = v9;
      if ( v9 >= 1.0 && (float)((float)(a2 / *(float *)(v7 + 4 * v5)) + v9) >= 1.0 )
      {
        v12 = v5;
        if ( v6 == v3 )
        {
          std::vector<int>::_Emplace_reallocate<int>(&v10, v6, &v12);
          v3 = v11;
          v6 = (_BYTE *)*((_QWORD *)&v10 + 1);
        }
        else
        {
          *(_DWORD *)v6 = v5;
          v6 += 4;
          *((_QWORD *)&v10 + 1) = v6;
        }
      }
    }
    while ( v5 );
  }
  CParticleEmitterVisual::ParticleCollection::EraseIndexList((__int64)this + 872, (__int64)&v10);
  if ( (_QWORD)v10 )
    std::_Deallocate<16,0>((void *)v10, (unsigned __int64)&v11[-v10] & 0xFFFFFFFFFFFFFFFCuLL);
}
