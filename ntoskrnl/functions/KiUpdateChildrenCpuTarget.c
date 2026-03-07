char __fastcall KiUpdateChildrenCpuTarget(_QWORD **a1, char a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 *v5; // rcx
  char result; // al

  v2 = *a1;
  do
  {
    v5 = (unsigned __int16 *)(v2 - 7);
    if ( (*((_DWORD *)v2 - 13) & 1) != 0 )
      result = KiUpdateCpuTargetByRate(v5, a2);
    else
      result = KiUpdateCpuTargetByWeight((LARGE_INTEGER *)v5, a2);
    v2 = (_QWORD *)*v2;
  }
  while ( v2 != a1 );
  return result;
}
