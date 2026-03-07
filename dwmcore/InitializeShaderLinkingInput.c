__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, __int64 a2, VertexShaderDesc *a3)
{
  unsigned int v4; // eax
  gsl::details *v5; // rcx
  unsigned int v6; // r11d
  unsigned __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  char *v11; // rbx
  __int64 v12; // r10
  char *v13; // rdx
  int v14; // r10d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF

  v4 = VertexShaderDesc::ResolveKey(a3);
  v7 = *((_QWORD *)&unk_1802CB010 + 2 * (v4 & 0xFFFFFFEF));
  v8 = v7;
  v19 = *((_OWORD *)&unk_1802CB010 + (v4 & 0xFFFFFFEF));
  v9 = *((_QWORD *)&v19 + 1);
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v10 = v8 - 1;
      if ( v10 >= v7 )
        break;
      LOWORD(v5) = *(_WORD *)(*((_QWORD *)&v19 + 1) + 12 * v10);
      if ( ((unsigned __int16)v5 & 0xFF00) == 0x100 )
      {
        v5 = (gsl::details *)(unsigned __int8)v5;
        if ( (unsigned __int8)v5 >= v6 )
        {
          v8 = v10;
          if ( (_DWORD)v10 )
            continue;
        }
      }
      goto LABEL_5;
    }
LABEL_16:
    gsl::details::terminate(v5);
    JUMPOUT(0x180026FB5LL);
  }
LABEL_5:
  v11 = (char *)DefaultHeap::Alloc(saturated_mul(v8, 0x20uLL));
  if ( v11 )
  {
    v12 = 0LL;
    if ( v8 )
    {
      while ( (unsigned int)v12 < v7 )
      {
        v13 = &v11[32 * (unsigned int)v12];
        *(_WORD *)v13 = *(_WORD *)(v9 + 12 * v12);
        *((_DWORD *)v13 + 6) = *(_DWORD *)(v9 + 12 * v12 + 4);
        *((_DWORD *)v13 + 7) = *(_DWORD *)(v9 + 12 * v12 + 8);
        GetHlslNameAndSemantic(*(unsigned __int16 *)(v9 + 12 * v12), v13 + 8, v13 + 16);
        v12 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v12 >= v8 )
          goto LABEL_9;
      }
      goto LABEL_16;
    }
LABEL_9:
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v19, v8);
    if ( (_QWORD)v19 == -1LL )
      goto LABEL_16;
    *((_QWORD *)&v19 + 1) = v11;
    v15 = CShaderLinkingGraphBuilder::Initialize(ppLinker);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B4u, 0LL);
    operator delete(v11);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2147024882, 0x1A7u, 0LL);
  }
  return v17;
}
