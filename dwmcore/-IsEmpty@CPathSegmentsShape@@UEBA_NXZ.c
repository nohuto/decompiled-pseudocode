/*
 * XREFs of ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x1800D3C70
 * Callers:
 *     <none>
 * Callees:
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x1800D3D0C (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800D3D48 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1800D3D9C (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathSegmentsShape::IsEmpty(CPathSegmentsShape *this)
{
  __int64 v1; // rdi
  int v2; // ebx
  bool v3; // zf
  __int64 v5; // rax
  int v6; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+30h] [rbp-40h]
  __int128 v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)this + 2);
  v2 = *(_DWORD *)(v1 + 56);
  v3 = v2 == 0;
  if ( !v2 )
  {
    v5 = *(_QWORD *)(v1 + 16);
    v6 = 0;
    v8 = 0;
    LODWORD(v10) = 0;
    v7[0] = v5;
    *(_QWORD *)&v9 = *(_QWORD *)(v1 + 24);
    *((_QWORD *)&v9 + 1) = v9;
    v7[1] = v9;
    v12 = v10;
    v11 = v9;
    while ( (unsigned __int8)Path::ControlPointCollection::const_iterator::operator!=(v7, &v11) )
    {
      Path::ControlPointCollection::const_iterator::operator*(v7);
      ++v6;
      Path::ControlPointCollection::const_iterator::operator++(v7);
    }
    *(_DWORD *)(v1 + 56) = v6;
    return v6 == 0;
  }
  return v3;
}
