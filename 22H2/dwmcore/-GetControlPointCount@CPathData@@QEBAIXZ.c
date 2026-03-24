/*
 * XREFs of ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x180220A94
 * Callers:
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x18025F630 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 * Callees:
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x180220538 (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x180220574 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1802205A4 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 */

__int64 __fastcall CPathData::GetControlPointCount(CPathData *this)
{
  unsigned int v1; // ebx
  _BYTE *v3; // rax
  _BYTE *v5[2]; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+30h] [rbp-40h]
  __int128 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-28h]
  __int128 v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]

  v1 = *((_DWORD *)this + 16);
  if ( !v1 )
  {
    v3 = (_BYTE *)*((_QWORD *)this + 3);
    v6 = 0;
    LODWORD(v8) = 0;
    v5[0] = v3;
    *(_QWORD *)&v7 = *((_QWORD *)this + 4);
    *((_QWORD *)&v7 + 1) = v7;
    v5[1] = (_BYTE *)v7;
    v10 = v8;
    v9 = v7;
    while ( Path::ControlPointCollection::const_iterator::operator!=((__int64)v5, &v9) )
    {
      Path::ControlPointCollection::const_iterator::operator*((__int64)v5);
      ++v1;
      Path::ControlPointCollection::const_iterator::operator++(v5);
    }
    *((_DWORD *)this + 16) = v1;
  }
  return v1;
}
