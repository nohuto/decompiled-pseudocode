__int64 __fastcall RaspLoadGlyphData(__int64 a1, int a2, int a3, __int64 *a4, _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  __int16 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  if ( a2 == -1 )
    return RaspLoadEmptyGlyph(a4);
  v10 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  FioFwReadUshortAtOffset(*(_QWORD *)(v10 + 16), (unsigned int)(v9 + a2), &v12);
  if ( v12 < 0 )
    return RaspLoadCompositeGlyphData(a1, a2, a3, (_DWORD)a4, (__int64)a5);
  else
    return RaspInitializeGlyphData(a1, a2, a4, a5);
}
