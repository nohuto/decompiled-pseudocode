void __fastcall FONTOBJ_AdvanceGlyphCacheBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 644) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 512);
    if ( a2 == v4 )
    {
      if ( *(_DWORD *)(a1 + 640) )
        v5 = v4 + 24;
      else
        v5 = v4 + 64;
      *(_QWORD *)(a1 + 512) = v5;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 584) += a4;
  }
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
}
