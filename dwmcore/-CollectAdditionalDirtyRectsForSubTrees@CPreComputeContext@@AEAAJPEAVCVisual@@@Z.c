__int64 __fastcall CPreComputeContext::CollectAdditionalDirtyRectsForSubTrees(
        CPreComputeContext *this,
        struct CVisual *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 1);
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0LL;
    if ( !*(_DWORD *)(v2 + 444) && !*(_BYTE *)(*(_QWORD *)(v2 + 424) + 4420LL) )
    {
      v5 = CPreComputeContext::CollectAdditionalDirtyRects(this, a2, (struct CPreComputeContext::SubTreeContext *)v2);
      v6 = v5;
      if ( v5 < 0 )
        break;
    }
    v2 += 456LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x668,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return v6;
}
