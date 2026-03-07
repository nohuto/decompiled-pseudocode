void __fastcall CDrawingContext::SetHeatMapForCurrentNode(CDrawingContext *this)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // r9
  struct CComposition *v4; // r8
  __int64 v5; // rbx
  char v6; // cl
  char v7; // al
  int v8; // eax
  char v9; // al
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v1 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v2 = g_HeatMaps_Type;
  v3 = 0xFFFFFFFFLL;
  v4 = g_pComposition;
  v5 = v1;
  v6 = *(_BYTE *)(v1 + 101);
  if ( (v6 & 0x10) != 0 && g_HeatMaps_Type != 1 )
  {
    --*((_DWORD *)g_pComposition + 308);
    *(_BYTE *)(v1 + 101) &= ~0x10u;
    v6 = *(_BYTE *)(v1 + 101);
  }
  v7 = v6;
  if ( (v6 & 8) != 0 && v2 != 2 )
  {
    v7 = v6 & 0xF7;
    g_HeatMaps_OverdrawContentKinds = 0;
    *(_BYTE *)(v5 + 101) = v6 & 0xF7;
  }
  if ( (v7 & 2) != 0 && v2 != 3 )
  {
    *(_BYTE *)(v5 + 101) = v7 & 0xF9;
    --*((_DWORD *)v4 + 306);
  }
  if ( v2 == 1 )
  {
    if ( (*(_BYTE *)(v5 + 101) & 0x10) != 0 )
      return;
    ++*((_DWORD *)v4 + 308);
    *(_BYTE *)(v5 + 101) |= 0x10u;
    v11 = 0;
    v10 = _xmm;
    ((void (__fastcall *)(__int64, __int128 *, struct CComposition *, __int64))CVisual::SetHeatMapProperties)(
      v5,
      &v10,
      v4,
      0xFFFFFFFFLL);
    v2 = g_HeatMaps_Type;
    v4 = g_pComposition;
  }
  if ( v2 == 2 )
  {
    v8 = g_HeatMaps_OverdrawContentKinds;
    *(_BYTE *)(v5 + 101) |= 8u;
    v10 = _xmm;
    v11 = v8;
    ((void (__fastcall *)(__int64, __int128 *, struct CComposition *, __int64))CVisual::SetHeatMapProperties)(
      v5,
      &v10,
      v4,
      v3);
    v2 = g_HeatMaps_Type;
    v4 = g_pComposition;
  }
  if ( v2 == 3 )
  {
    v9 = *(_BYTE *)(v5 + 101);
    if ( (v9 & 4) == 0 )
    {
      *(_BYTE *)(v5 + 101) = v9 | 6;
      ++*((_DWORD *)v4 + 306);
    }
  }
}
