/*
 * XREFs of ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x1801FA4FC
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18019AD80 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801ACD54 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FA28C (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 __fastcall CBspNode::BuildPolygonList(CBspNode *this, struct CVisual *a2)
{
  struct CPolygon **v2; // rbx
  unsigned int v3; // edi
  int v6; // eax
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+8h]

  v2 = (struct CPolygon **)*((_QWORD *)this + 4);
  v3 = 0;
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 5) - (_QWORD)v2) >> 3) > 1 )
  {
    std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
      *((__int64 **)this + 4),
      *((char **)this + 5),
      (__int64)(*((_QWORD *)this + 5) - (_QWORD)v2) >> 3,
      v9);
    v2 = (struct CPolygon **)*((_QWORD *)this + 4);
  }
  while ( v2 != *((struct CPolygon ***)this + 5) )
  {
    v6 = CVisual::AddToBspPolygonList(a2, *v2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD7u, 0LL);
      return v3;
    }
    ++v2;
  }
  return v3;
}
