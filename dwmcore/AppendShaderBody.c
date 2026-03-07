__int64 __fastcall AppendShaderBody(
        _DWORD *a1,
        unsigned __int16 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v12; // rax
  int appended; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  __int16 v17; // r15
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  __int128 v25; // [rsp+40h] [rbp-28h] BYREF

  if ( (*((_WORD *)a3 + 26) & 0xFF00) == 0x200 )
    return AppendCustomSamplerShaderBody((_DWORD)a1, a2, (_DWORD)a3, a4, a5, a6, a7);
  v12 = *((_QWORD *)a3 + 5);
  v25 = *a3;
  appended = CShaderLinkingGraphBuilder::AppendNode((_DWORD)a1, a2, a5, a6, v12, (__int64)&v25);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x4A8u, 0LL);
  }
  else
  {
    v16 = *((unsigned __int16 *)a3 + 26);
    v17 = *((_WORD *)a3 + 26);
    if ( v16 == 11 )
    {
      v19 = AppendLights(a2, a1, (_DWORD *)(a4 + 128), *(_DWORD *)a3);
      v15 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x4ADu, 0LL);
      else
        *a8 = 1;
    }
    else if ( (v16 & 0xFF00) == 0x100 )
    {
      v21 = CShaderLinkingGraphBuilder::SwizzleNode(a1, a2);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4B6u, 0LL);
      }
      else
      {
        v23 = PerformSample((int)a1, a4, (unsigned __int8)v17, a2, a7);
        v15 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x4BDu, 0LL);
      }
    }
  }
  return v15;
}
