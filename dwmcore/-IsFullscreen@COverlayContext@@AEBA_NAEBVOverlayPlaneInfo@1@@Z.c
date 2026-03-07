char __fastcall COverlayContext::IsFullscreen(__int64 **this, const struct COverlayContext::OverlayPlaneInfo *a2)
{
  __int64 *v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rax
  char IsEquivalentTo; // r10
  _DWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v2 = *this;
  v3 = *((_DWORD *)a2 + 17);
  v4 = *((_DWORD *)a2 + 18);
  v5 = *((_DWORD *)a2 + 19);
  v6 = *((_DWORD *)a2 + 20);
  v7 = *v2;
  v10[0] = v3;
  v10[1] = v4;
  v10[2] = v5;
  v10[3] = v6;
  v11 = *(_OWORD *)((*(__int64 (__fastcall **)(__int64 *))(v7 + 160))(v2) + 20);
  IsEquivalentTo = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(v10, &v11);
  if ( !IsEquivalentTo )
  {
    if ( v3 == (_DWORD)v11
      && v5 == DWORD2(v11)
      && v4 > DWORD1(v11)
      && v6 < HIDWORD(v11)
      && (int)abs32(v4 + v6 - HIDWORD(v11) - DWORD1(v11)) <= 1 )
    {
      return 1;
    }
    else if ( v4 == DWORD1(v11)
           && v6 == HIDWORD(v11)
           && v3 > (unsigned int)v11
           && v5 < DWORD2(v11)
           && (int)abs32(v3 + v5 - DWORD2(v11) - v11) <= 1 )
    {
      return 1;
    }
  }
  return IsEquivalentTo;
}
