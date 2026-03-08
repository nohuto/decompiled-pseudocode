/*
 * XREFs of ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8
 * Callers:
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z @ 0x180241934 (-EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18023E5A8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E694 (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E788 (--$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@-$vector@Ufloat3@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E8D8 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18023EAEC (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 *     ??$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x18023EBD8 (--$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Foundatio.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?GetRandomDirection@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243D04 (-GetRandomDirection@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenn.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243D60 (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 *     ?GetRandomSize@CParticleGenerator@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243E78 (-GetRandomSize@CParticleGenerator@@QEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$mersenne_twi.c)
 *     ?GetRandomTint@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243F54 (-GetRandomTint@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twi.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180251F10 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::SpawnParticles(
        const void **this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  CViewBox *v10; // rcx
  float m11; // xmm6_4
  float m12; // xmm7_4
  float m21; // xmm8_4
  float m22; // xmm9_4
  float dx; // xmm10_4
  float dy; // xmm11_4
  unsigned __int64 v17; // rdi
  float v18; // xmm1_4
  float v19; // xmm2_4
  _DWORD *v20; // rdx
  unsigned __int64 v21; // xmm1_8
  int v22; // eax
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rdi
  _BYTE *v25; // rdx
  __int128 v26; // xmm0
  _BYTE *v27; // rdx
  float *v28; // rax
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float *v32; // rdx
  float v33; // xmm8_4
  float *v34; // rdx
  FLOAT *v35; // rdx
  FLOAT v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // xmm1_8
  int v39; // eax
  _DWORD *v40; // rdx
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rdi
  float *v43; // rax
  float v44; // xmm7_4
  float v45; // xmm6_4
  float v46; // xmm0_4
  float *v47; // rdx
  float v48; // xmm0_4
  float *v49; // rdx
  unsigned __int64 v50; // rsi
  float *v51; // rax
  float v52; // xmm7_4
  float v53; // xmm6_4
  float v54; // xmm0_4
  _BYTE *v55; // rdx
  __int128 v56; // xmm0
  _BYTE *v57; // rdx
  unsigned __int64 v58; // rdi
  _BYTE *v59; // rdx
  __int64 v60; // xmm0_8
  _BYTE *v61; // rdx
  unsigned __int64 v62; // rsi
  _BYTE *v63; // rdx
  _BYTE *v64; // rdx
  float *v65; // rax
  float v66; // xmm7_4
  float v67; // xmm6_4
  float v68; // xmm0_4
  _BYTE *v69; // rdx
  float *v70; // rdx
  unsigned __int64 v71; // [rsp+38h] [rbp-79h] BYREF
  int v72; // [rsp+40h] [rbp-71h]
  int v73; // [rsp+48h] [rbp-69h]
  __int128 v74; // [rsp+50h] [rbp-61h] BYREF
  struct D2D_MATRIX_3X2_F v75; // [rsp+60h] [rbp-51h] BYREF
  __int64 v77; // [rsp+130h] [rbp+7Fh] BYREF

  v5 = a2;
  v6 = CParticleEmitterVisual::EnsureSpawner((CParticleEmitterVisual *)this);
  v73 = v6;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x25Bu, 0LL);
  }
  else
  {
    if ( !this[104] )
      return 0LL;
    v10 = (CViewBox *)this[103];
    if ( v10 )
    {
      CViewBox::GetRealization(v10, a3, &v75);
      m11 = v75.m11;
      m12 = v75.m12;
      m21 = v75.m21;
      m22 = v75.m22;
      dx = v75.dx;
      dy = v75.dy;
    }
    else
    {
      dy = *(float *)&v77;
      dx = *(float *)&v77;
      m22 = *(float *)&v77;
      m21 = *(float *)&v77;
      m12 = *(float *)&v77;
      m11 = *(float *)&v77;
    }
    if ( (int)v5 > 0 )
    {
      v17 = v5;
      do
      {
        (**(void (__fastcall ***)(const void *, __int64 *, char *))this[800])(this[800], &v77, (char *)this + 1388);
        if ( this[103] )
        {
          v18 = (float)((float)(m21 * *((float *)&v77 + 1)) + (float)(m11 * *(float *)&v77)) + dx;
          v19 = (float)((float)(m22 * *((float *)&v77 + 1)) + (float)(m12 * *(float *)&v77)) + dy;
          *(float *)&v77 = v18;
          *((float *)&v77 + 1) = v19;
        }
        else
        {
          v19 = *((float *)&v77 + 1);
          LODWORD(v18) = v77;
        }
        v72 = 0;
        v20 = this[110];
        v71 = __PAIR64__(LODWORD(v19), LODWORD(v18));
        if ( v20 == this[111] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 109,
            v20,
            (__int64)&v71);
          v22 = v72;
          v21 = v71;
        }
        else
        {
          v21 = v71;
          v22 = v72;
          *(_QWORD *)v20 = v71;
          v20[2] = v22;
          this[110] = (char *)this[110] + 12;
        }
        v23 = this[140];
        if ( v23 == this[141] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 139,
            v23,
            (__int64)&v71);
        }
        else
        {
          *(_QWORD *)v23 = v21;
          v23[2] = v22;
          this[140] = (char *)this[140] + 12;
        }
        --v17;
      }
      while ( v17 );
      v24 = v5;
      do
      {
        CParticleGenerator::GetRandomOrientation(this[104], &v75, (char *)this + 1388);
        v25 = this[113];
        if ( v25 == this[114] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 112,
            v25,
            &v75);
          v26 = *(_OWORD *)&v75.m11;
        }
        else
        {
          v26 = *(_OWORD *)&v75.m11;
          *(_OWORD *)v25 = *(_OWORD *)&v75.m11;
          this[113] = (char *)this[113] + 16;
        }
        v27 = this[143];
        if ( v27 == this[144] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 142,
            v27,
            &v75);
        }
        else
        {
          *(_OWORD *)v27 = v26;
          this[143] = (char *)this[143] + 16;
        }
        --v24;
      }
      while ( v24 );
      v71 = v5;
      do
      {
        CParticleGenerator::GetRandomDirection(this[104], &v75, (char *)this + 1388);
        v28 = (float *)this[104];
        v29 = v28[27];
        v30 = v28[28];
        v31 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1388);
        v32 = (float *)this[122];
        v33 = (float)(v31 * (float)(v30 - v29)) + v29;
        *(float *)&v77 = v33;
        if ( v32 == this[123] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 121, v32, &v77);
          v33 = *(float *)&v77;
        }
        else
        {
          *v32 = v33;
          this[122] = v32 + 1;
        }
        v34 = (float *)this[146];
        if ( v34 == this[147] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 145, v34, &v77);
          v33 = *(float *)&v77;
        }
        else
        {
          *v34 = v33;
          this[146] = v34 + 1;
        }
        v35 = (FLOAT *)this[149];
        if ( v35 == this[150] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 148,
            v35,
            (__int64)&v75);
        }
        else
        {
          v36 = v75.m21;
          *(_QWORD *)v35 = *(_QWORD *)&v75.m11;
          v35[2] = v36;
          this[149] = (char *)this[149] + 12;
        }
        v37 = this[152];
        *(float *)&v74 = v75.m11 * v33;
        *((float *)&v74 + 1) = v75.m12 * v33;
        *((float *)&v74 + 2) = v75.m21 * v33;
        if ( v37 == this[153] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 151,
            v37,
            (__int64)&v74);
          v39 = DWORD2(v74);
          v38 = v74;
        }
        else
        {
          v38 = v74;
          v39 = DWORD2(v74);
          *(_QWORD *)v37 = v74;
          v37[2] = v39;
          this[152] = (char *)this[152] + 12;
        }
        v40 = this[116];
        if ( v40 == this[117] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 115,
            v40,
            (__int64)&v74);
        }
        else
        {
          *(_QWORD *)v40 = v38;
          v40[2] = v39;
          this[116] = (char *)this[116] + 12;
        }
        --v5;
      }
      while ( v5 );
      v41 = v71;
      v42 = v71;
      do
      {
        v43 = (float *)this[104];
        v44 = v43[29];
        v45 = v43[30];
        v46 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1388);
        v47 = (float *)this[155];
        v48 = (float)(v46 * (float)(v45 - v44)) + v44;
        *(float *)&v77 = v48;
        if ( v47 == this[156] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 154, v47, &v77);
          v48 = *(float *)&v77;
        }
        else
        {
          *v47 = v48;
          this[155] = v47 + 1;
        }
        v49 = (float *)this[119];
        if ( v49 == this[120] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 118, v49, &v77);
        }
        else
        {
          *v49 = v48;
          this[119] = v49 + 1;
        }
        --v41;
      }
      while ( v41 );
      v50 = v42;
      do
      {
        v51 = (float *)this[104];
        v52 = v51[47];
        v53 = v51[48];
        v54 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1388);
        CParticleGenerator::GetRandomTint(this[104], &v75, (char *)this + 1388);
        v55 = this[158];
        *(_QWORD *)&v74 = *(_QWORD *)&v75.m11;
        DWORD2(v74) = LODWORD(v75.m21);
        *((float *)&v74 + 3) = (float)(v54 * (float)(v53 - v52)) + v52;
        if ( v55 == this[159] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 157,
            v55,
            &v74);
          v56 = v74;
        }
        else
        {
          v56 = v74;
          *(_OWORD *)v55 = v74;
          this[158] = (char *)this[158] + 16;
        }
        v57 = this[125];
        if ( v57 == this[126] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 124,
            v57,
            &v74);
        }
        else
        {
          *(_OWORD *)v57 = v56;
          this[125] = (char *)this[125] + 16;
        }
        --v42;
      }
      while ( v42 );
      v58 = v50;
      do
      {
        CParticleGenerator::GetRandomSize(this[104], &v77, (char *)this + 1388);
        v59 = this[128];
        if ( v59 == this[129] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            this + 127,
            v59,
            &v77);
          v60 = v77;
        }
        else
        {
          v60 = v77;
          *(_QWORD *)v59 = v77;
          this[128] = (char *)this[128] + 8;
        }
        v61 = this[161];
        if ( v61 == this[162] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            this + 160,
            v61,
            &v77);
        }
        else
        {
          *(_QWORD *)v61 = v60;
          this[161] = (char *)this[161] + 8;
        }
        --v50;
      }
      while ( v50 );
      v62 = v58;
      do
      {
        v63 = this[131];
        v77 = 0x3F8000003F800000LL;
        if ( v63 == this[132] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
            this + 130,
            v63,
            &v77);
        }
        else
        {
          *(_QWORD *)v63 = v77;
          this[131] = (char *)this[131] + 8;
        }
        v64 = this[164];
        v71 = 0x3F8000003F800000LL;
        if ( v64 == this[165] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
            this + 163,
            v64,
            &v71);
        }
        else
        {
          *(_QWORD *)v64 = v71;
          this[164] = (char *)this[164] + 8;
        }
        --v58;
      }
      while ( v58 );
      do
      {
        v65 = (float *)this[104];
        v66 = v65[56];
        v67 = v65[57];
        v68 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1388);
        LODWORD(v77) = 0;
        v69 = this[134];
        *(float *)&v71 = (float)(v68 * (float)(v67 - v66)) + v66;
        if ( v69 == this[135] )
        {
          std::vector<float>::_Emplace_reallocate<float>(this + 133, v69, &v77);
        }
        else
        {
          *(_DWORD *)v69 = 0;
          this[134] = v69 + 4;
        }
        v70 = (float *)this[137];
        if ( v70 == this[138] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 136, v70, &v71);
        }
        else
        {
          *v70 = (float)(v68 * (float)(v67 - v66)) + v66;
          this[137] = v70 + 1;
        }
        --v62;
      }
      while ( v62 );
      v8 = v73;
      LODWORD(v5) = a2;
    }
    *((_DWORD *)this + 332) += v5;
  }
  return v8;
}
