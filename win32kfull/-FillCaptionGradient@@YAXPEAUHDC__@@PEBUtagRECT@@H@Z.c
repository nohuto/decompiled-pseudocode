void __fastcall FillCaptionGradient(HDC a1, const struct tagRECT *a2, int a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // eax
  HBRUSH v6; // r8

  if ( a3 )
  {
    v4 = *(_DWORD *)(gpsi + 4576LL);
    v5 = *(_DWORD *)(gpsi + 4676LL);
  }
  else
  {
    v4 = *(_DWORD *)(gpsi + 4580LL);
    v5 = *(_DWORD *)(gpsi + 4680LL);
  }
  if ( v4 == v5 )
  {
    if ( a3 )
      v6 = *(HBRUSH *)(gpsi + 4712LL);
    else
      v6 = *(HBRUSH *)(gpsi + 4720LL);
    FillRect(a1, a2, v6);
  }
  else
  {
    FillGradient(a1, a2, v4, v5);
  }
}
