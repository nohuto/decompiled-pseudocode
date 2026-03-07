__int64 __fastcall HalpQueryMaximumGsiv(unsigned int *a1)
{
  ULONG_PTR *v1; // r8
  unsigned int v2; // edx
  unsigned int v4; // r10d
  ULONG_PTR *v5; // r11
  _QWORD **v6; // r11
  _QWORD *v7; // r9
  _DWORD *v8; // rcx
  int v9; // ebx

  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v2 = 0;
  v4 = 0;
  if ( (ULONG_PTR *)HalpRegisteredInterruptControllers == &HalpRegisteredInterruptControllers )
    return (unsigned int)-1073741823;
  do
  {
    v5 = v1;
    v1 = (ULONG_PTR *)*v1;
    v6 = (_QWORD **)(v5 + 33);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = v8[7];
      if ( v9 != -1 && v8[6] - v8[5] + v9 - 1 > v4 )
        v4 = v8[6] - v8[5] + v9 - 1;
    }
  }
  while ( v1 != &HalpRegisteredInterruptControllers );
  if ( !v4 )
    return (unsigned int)-1073741823;
  else
    *a1 = v4;
  return v2;
}
