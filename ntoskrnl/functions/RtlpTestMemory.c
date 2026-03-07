char __fastcall RtlpTestMemory(int a1, _DWORD *a2)
{
  _DWORD *v2; // rax

  v2 = a2 + 1024;
  while ( 1 )
  {
    if ( a2 >= v2 )
      return 1;
    if ( *a2 != a1 )
      break;
    ++a2;
  }
  return 0;
}
