void __fastcall Mesh::CalcGeometryCountsForRectangle(
        const struct Mesh::MeshDesc *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // r14d
  _BYTE *v7; // rax
  int v8; // xmm0_4
  int v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  int *v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  char *v14; // [rsp+58h] [rbp-28h]
  unsigned int v15; // [rsp+60h] [rbp-20h]
  char v16; // [rsp+64h] [rbp-1Ch]
  char v17; // [rsp+65h] [rbp-1Bh]
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  int v20; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+74h] [rbp-Ch] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = *((_DWORD *)a1 + 12);
  if ( v5 > 1 )
    goto LABEL_14;
  if ( *((_DWORD *)a1 + 6) )
  {
    if ( *((_DWORD *)a1 + 6) == 50529027 )
    {
      v7 = (char *)a1 + 53;
      if ( v5 == 1 )
      {
        *a2 = 8LL;
      }
      else if ( *v7 )
      {
        *a2 = 4LL;
      }
      if ( *((_DWORD *)a1 + 12) == 1 )
        *a3 += 24LL;
      if ( *v7 )
        *a3 += 6LL;
      return;
    }
LABEL_14:
    DecomposeRectangleEdgeFlags(*((_DWORD *)a1 + 6), &v21, &v18, &v19, &v20);
    v8 = *(_DWORD *)a1;
    v11 = 0LL;
    v13 = 0LL;
    v12 = &v18;
    v9 = v8;
    v14 = (char *)a1 + 28;
    v17 = *((_BYTE *)a1 + 53);
    v16 = 0;
    v10 = 4LL;
    v15 = v5;
    Mesh::CalcGeometryCounts((const struct Mesh::MeshDesc *)&v9, a2, a3);
    return;
  }
  if ( *((_BYTE *)a1 + 53) )
  {
    *a2 = 4LL;
    *a3 = 6LL;
  }
}
