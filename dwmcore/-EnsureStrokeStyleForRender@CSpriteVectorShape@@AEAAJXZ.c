/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18001DD88
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800843E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x18001DF68 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x180025474 (--$-0M$0-0$0-0$0A@@-$span@$$CBM$0-0@gsl@@QEAA@AEBV-$span@M$0-0@1@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800F9B40 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18023EAEC (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // r14
  float v5; // xmm0_4
  __int64 v6; // rdx
  float v7; // xmm6_4
  float *v8; // r15
  float *v9; // rsi
  float *v10; // rbx
  float v11; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rcx
  gsl::details *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  float v17; // xmm0_4
  float v18; // [rsp+38h] [rbp-49h] BYREF
  __int128 v19; // [rsp+40h] [rbp-41h] BYREF
  float *v20; // [rsp+50h] [rbp-31h]
  _QWORD v21[2]; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-19h] BYREF
  __int64 v23; // [rsp+70h] [rbp-11h]
  _DWORD v24[4]; // [rsp+78h] [rbp-9h] BYREF
  int v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+8Ch] [rbp+Bh]
  float v27; // [rsp+90h] [rbp+Fh]
  BOOL v28; // [rsp+94h] [rbp+13h]

  v1 = 0;
  v2 = (__int64 *)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    v5 = fmaxf(0.0, *((float *)this + 52));
    v6 = *((_QWORD *)this + 21) - *((_QWORD *)this + 20);
    v20 = 0LL;
    v7 = 1.0 / v5;
    v19 = 0LL;
    std::vector<float>::reserve(&v19, v6 >> 2);
    v8 = (float *)*((_QWORD *)this + 21);
    v9 = (float *)*((_QWORD *)this + 20);
    v10 = (float *)*((_QWORD *)&v19 + 1);
    while ( v9 != v8 )
    {
      v17 = v7 * *v9;
      v18 = v17;
      if ( v10 == v20 )
      {
        std::vector<float>::_Emplace_reallocate<float>(&v19, v10, &v18);
        v10 = (float *)*((_QWORD *)&v19 + 1);
      }
      else
      {
        *v10++ = v17;
        *((_QWORD *)&v19 + 1) = v10;
      }
      ++v9;
    }
    v11 = *((float *)this + 51);
    v24[0] = *((_DWORD *)this + 47);
    v24[1] = *((_DWORD *)this + 48);
    v24[2] = *((_DWORD *)this + 46);
    v24[3] = *((_DWORD *)this + 49);
    if ( v11 >= 1.0 )
      v25 = LODWORD(v11);
    else
      v25 = 1065353216;
    v12 = v19;
    v13 = *v2;
    v27 = v7 * *((float *)this + 50);
    v26 = v10 != (float *)v19 ? 5 : 0;
    v28 = *((_BYTE *)this + 212) != 0;
    if ( v13 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    gsl::details::extent_type<-1>::extent_type<-1>(v21, ((__int64)v10 - v12) >> 2);
    v21[1] = v12;
    if ( v21[0] == -1LL || !v12 && v21[0] )
    {
      gsl::details::terminate(v14);
      JUMPOUT(0x18001DF5FLL);
    }
    gsl::span<float const,-1>::span<float const,-1>(&v22, v21);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD, __int64 *))(*g_DeviceManager + 144LL))(
            g_DeviceManager,
            v24,
            v23,
            v22,
            v2);
    v1 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1FFu, 0LL);
    std::vector<float>::_Tidy(&v19);
  }
  return v1;
}
