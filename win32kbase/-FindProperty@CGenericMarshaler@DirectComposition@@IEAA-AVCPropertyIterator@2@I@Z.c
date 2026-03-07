_QWORD *__fastcall DirectComposition::CGenericMarshaler::FindProperty(__int64 a1, _QWORD *a2, int a3)
{
  _DWORD **v3; // r9
  _DWORD **v4; // rcx

  v3 = *(_DWORD ***)(a1 + 56);
  v4 = &v3[*(_QWORD *)(a1 + 64)];
  while ( 1 )
  {
    *a2 = v3;
    if ( v3 == v4 || **v3 == a3 )
      break;
    ++v3;
  }
  return a2;
}
