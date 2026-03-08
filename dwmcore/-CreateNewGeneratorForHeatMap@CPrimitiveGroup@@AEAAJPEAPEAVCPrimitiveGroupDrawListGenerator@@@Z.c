/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180244DB0
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800101E4 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800110AC (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v3; // rdx
  struct ID2D1PrivateCompositorBuffer *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  CPrimitiveGroupDrawListGenerator *v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+50h] [rbp-10h] BYREF
  CPrimitiveGroupDrawListGenerator *v13; // [rsp+78h] [rbp+18h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v10 = 0uLL;
  v3 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 81);
  v4 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 80);
  v11 = 0uLL;
  v12 = 0uLL;
  v5 = CPrimitiveGroupDrawListGenerator::Create(v4, v3, &v12, &v11, &v10, &v13);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x27Au, 0LL);
    v8 = v13;
  }
  else
  {
    *a2 = v13;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v8 + 8LL))(v8);
  return v7;
}
