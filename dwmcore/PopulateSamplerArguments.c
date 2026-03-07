__int64 __fastcall PopulateSamplerArguments(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int16 v6; // r12
  int v8; // edx
  unsigned __int16 v9; // cx
  _BYTE *v10; // rdi
  unsigned int v12; // ebx
  char v13; // al
  int appended; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  char v19; // al
  int v20; // eax
  unsigned int v21; // ecx
  unsigned __int16 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v24[17]; // [rsp+50h] [rbp-20h] BYREF
  char v25; // [rsp+61h] [rbp-Fh]
  char v26; // [rsp+62h] [rbp-Eh]

  v6 = a3;
  v8 = (unsigned __int16)a3;
  v9 = a3 | 0x400;
  v10 = (_BYTE *)(a2 + 32LL * a3);
  v12 = 0;
  v22 = a3 | 0x400;
  if ( !a4[2] )
    goto LABEL_19;
  if ( v10[23] || v10[18] )
  {
    v13 = a4[4];
    v23 = 0uLL;
    *(_WORD *)&v24[14] = (unsigned __int8)(v13 + 48);
    qmemcpy(v24, "GetSamplerData", 14);
    LOWORD(v8) = a3 | 0x300;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v8,
                 (unsigned int)word_180338FC0,
                 a5,
                 (__int64)v24,
                 (__int64)&v23);
    v12 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, appended, 0x313u, 0LL);
      return v12;
    }
    v9 = v22;
  }
  if ( (v10[20] || v10[19])
    && (v19 = a4[4],
        v23 = 0uLL,
        v25 = v19 + 48,
        qmemcpy(v24, "GetSamplerDataExt", sizeof(v24)),
        v26 = 0,
        v20 = CShaderLinkingGraphBuilder::AppendNode(
                a1,
                v9,
                (unsigned int)word_180338FC0,
                a5,
                (__int64)v24,
                (__int64)&v23),
        v12 = v20,
        v20 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x319u, 0LL);
  }
  else
  {
LABEL_19:
    if ( *a4 )
    {
      if ( !v10[23] )
      {
        v16 = DecodeInputTexcoord(a1, a2, v6, a5);
        v12 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x322u, 0LL);
      }
    }
  }
  return v12;
}
