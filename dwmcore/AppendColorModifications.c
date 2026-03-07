__int64 __fastcall AppendColorModifications(int a1, __int128 *a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v5; // ax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int appended; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+70h] [rbp+30h] BYREF

  v17 = a3;
  v5 = a3;
  if ( *((_BYTE *)a2 + 24) )
  {
    *(_QWORD *)&v16 = 1LL;
    *((_QWORD *)&v16 + 1) = &v17;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 a3,
                 (unsigned int)word_180338FC0,
                 a4,
                 (__int64)"IgnoreAlpha",
                 (__int64)&v16);
    v10 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, appended, 0x27Bu, 0LL);
      return v10;
    }
    v5 = v17;
  }
  if ( *((_BYTE *)a2 + 25) )
  {
    *(_QWORD *)&v16 = 1LL;
    *((_QWORD *)&v16 + 1) = &v17;
    v14 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v5,
            (unsigned int)word_180338FC0,
            a4,
            (__int64)"UnBoostSDRLuminance",
            (__int64)&v16);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x281u, 0LL);
      return v10;
    }
    v5 = v17;
  }
  v16 = *a2;
  v8 = AppendColorConversion(a1, a4, v5, (unsigned int)&v16, 0);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x284u, 0LL);
  return v10;
}
