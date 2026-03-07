void __fastcall Mesh::CalcGeometryCounts(const struct Mesh::MeshDesc *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r11
  bool v9; // r8
  BOOL v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rax
  int v15; // eax

  v3 = 0LL;
  if ( *((_BYTE *)a1 + 52) )
  {
    Mesh::CalcGeometryCountsForRectangle(a1, a2, a3);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = 0LL;
    if ( v6 >= 3 )
    {
      v8 = (v6 - 2) & -(__int64)(*((_BYTE *)a1 + 53) != 0);
      v7 = v6 & -(__int64)(*((_BYTE *)a1 + 53) != 0);
      if ( *((_DWORD *)a1 + 12) )
      {
        v9 = Mesh::CheckExteriorFilterCondition(a1, v6 - 1);
        v12 = v10;
        v13 = v10;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v11 + 24) + 4 * v12) == 3 )
          {
            switch ( *(_DWORD *)(v11 + 48) )
            {
              case 1:
                goto LABEL_11;
              case 2:
                v15 = *(unsigned __int8 *)(v12 + *(_QWORD *)(v11 + 40));
                break;
              case 3:
                LOBYTE(v15) = *(_BYTE *)(v12 + *(_QWORD *)(v11 + 40)) == v10;
                break;
              default:
                goto LABEL_6;
            }
            if ( (_BYTE)v15 )
            {
LABEL_11:
              v14 = !v9 + 1LL;
              if ( *(_BYTE *)(v11 + 53) == v10 )
                v14 *= 2LL;
              v7 += v14;
              v9 = 1;
              v8 += 2LL;
              goto LABEL_7;
            }
          }
LABEL_6:
          v9 = v10;
LABEL_7:
          v12 = ++v13;
        }
        while ( v13 < v6 );
      }
      v3 = 3 * v8;
    }
    *a2 = v7;
    *a3 = v3;
  }
}
