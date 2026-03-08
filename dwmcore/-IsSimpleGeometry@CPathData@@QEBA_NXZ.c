/*
 * XREFs of ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x1800166BC
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18001539C (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x180015AB0 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800D3E74 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // al
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  _BYTE *i; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 72);
  if ( !v1 )
  {
    v4 = (_BYTE *)*((_QWORD *)this + 2);
    v5 = (_BYTE *)*((_QWORD *)this + 3);
    for ( i = v4; ; v4 = i )
    {
      if ( v4 == v5 )
      {
        v1 = 1;
        goto LABEL_8;
      }
      if ( (unsigned __int8)(*v4 - 3) <= 1u )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v1 = -1;
LABEL_8:
    *((_BYTE *)this + 72) = v1;
  }
  return v1 == 1;
}
