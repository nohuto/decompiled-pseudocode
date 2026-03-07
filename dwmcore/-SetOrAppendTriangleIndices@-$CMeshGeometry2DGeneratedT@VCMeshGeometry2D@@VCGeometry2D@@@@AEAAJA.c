__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendTriangleIndices(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx

  v4 = a1 + 17;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<int>::_Insert_range<int const *>(
    v4,
    a1[18],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 4LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a1 + 9))(a1, 0LL, 0LL);
  return 0LL;
}
