__int64 __fastcall BmlCompareRegionsWithPivot(
        struct _D3DKMDT_2DREGION *a1,
        struct _D3DKMDT_2DREGION *a2,
        struct _D3DKMDT_2DREGION *a3)
{
  unsigned __int64 v6; // r10
  signed __int64 v7; // r8
  __int128 v8; // rax
  signed __int64 v9; // rax
  int ScaledAspectRatio; // edi
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax

  v6 = a3->cx * (unsigned __int64)a3->cy;
  v7 = abs64(a1->cx * (unsigned __int64)a1->cy - v6);
  v8 = (__int64)(a2->cx * (unsigned __int64)a2->cy - v6);
  v9 = (*((_QWORD *)&v8 + 1) ^ v8) - *((_QWORD *)&v8 + 1);
  if ( v7 == v9 )
  {
    ScaledAspectRatio = BmlGetScaledAspectRatio(a3);
    v11 = BmlGetScaledAspectRatio(a1);
    v12 = DIFF<int>(v11, ScaledAspectRatio);
    v13 = BmlGetScaledAspectRatio(a2);
    v14 = DIFF<int>(v13, ScaledAspectRatio);
    return BmlCompareValues<int>(v14, v12);
  }
  else if ( v7 < v9 )
  {
    return 1LL;
  }
  else
  {
    return (unsigned int)(v9 >= v7) - 1;
  }
}
