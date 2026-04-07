/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x1800803BC
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800390BC (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x180057E4E (memcmp_0.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080354 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
    || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((_DWORD *)this + 14, (_DWORD *)a2 + 14)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((_DWORD *)this + 10, (_DWORD *)a2 + 10) )
  {
    return 0;
  }
  v4 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v5 = *(unsigned __int16 *)((char *)v4 + a2 - this);
    v6 = *v4 - v5;
    if ( v6 )
      break;
    ++v4;
  }
  while ( v5 );
  return !v6
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 180, (char *)a2 + 180, 0x1CuLL)
      && *((_DWORD *)this + 52) == *((_DWORD *)a2 + 52)
      && *((_DWORD *)this + 49) == *((_DWORD *)a2 + 49)
      && *((_DWORD *)this + 53) == *((_DWORD *)a2 + 53)
      && *((_BYTE *)this + 223) == *((_BYTE *)a2 + 223);
}
