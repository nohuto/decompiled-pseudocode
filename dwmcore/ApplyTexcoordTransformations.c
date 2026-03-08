/*
 * XREFs of ApplyTexcoordTransformations @ 0x180027D08
 * Callers:
 *     PerformSample @ 0x180028DE0 (PerformSample.c)
 * Callees:
 *     ApplyTexcoordExtendMode @ 0x180027B00 (ApplyTexcoordExtendMode.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, void *a5)
{
  _BYTE *v7; // rdi
  __int16 v8; // si
  char v9; // r9
  char v10; // cl
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  __int64 v15; // r15
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int appended; // eax
  unsigned int v21; // ecx
  _QWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int16 v24; // [rsp+82h] [rbp+1Ah] BYREF

  v7 = (_BYTE *)(a2 + 32LL * a3);
  v8 = a3;
  if ( v7[21] )
    return 0LL;
  v9 = v7[16];
  v10 = v7[20];
  if ( v9 == v7[17] )
  {
    v11 = ApplyTexcoordExtendMode(a1, a4, a3, v9, v10, (__int64)a5, 0LL);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x248u, 0LL);
  }
  else
  {
    v15 = (__int64)a5;
    v16 = ApplyTexcoordExtendMode(a1, a4, a3, v9, v10, (__int64)a5, &v23);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x24Eu, 0LL);
    }
    else
    {
      v18 = ApplyTexcoordExtendMode(a1, a4, v8, v7[17], v7[20], v15, &v24);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x24Fu, 0LL);
      }
      else
      {
        v22[0] = 2LL;
        v22[1] = &v23;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     a4,
                     (unsigned int)word_180338FC0,
                     v15,
                     (__int64)"BorderEffectCombine",
                     (__int64)v22);
        v13 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, appended, 0x251u, 0LL);
      }
    }
  }
  return v13;
}
