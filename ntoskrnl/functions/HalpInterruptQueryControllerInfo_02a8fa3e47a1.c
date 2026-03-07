__int64 __fastcall HalpInterruptQueryControllerInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rdx
  int v4; // r8d
  __int64 v5; // r9
  _DWORD *v6; // r10

  *a3 = 0;
  if ( a1 < 4 )
  {
    LODWORD(v5) = -1073741789;
  }
  else
  {
    *a2 = 0;
    v4 = HalpInterruptModel();
    if ( (unsigned int)(v4 - 2) <= 1
      || v4 == 1 && ((*v3 = 1, qword_140C62148 != v5) || HalpInterruptIsRemappingRequired()) )
    {
      *v3 = 3;
    }
    *v6 = 4;
  }
  return (unsigned int)v5;
}
