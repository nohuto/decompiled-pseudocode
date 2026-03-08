/*
 * XREFs of WdipSemValidateEndEvent @ 0x140834640
 * Callers:
 *     WdipSemDisableScenario @ 0x140831E48 (WdipSemDisableScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemValidateEndEvent(_QWORD *a1, __int16 a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // r10d
  int v7; // edx
  _QWORD *i; // r8
  _QWORD *v9; // r11
  __int64 v10; // rcx

  v3 = 0;
  if ( a1 && a3 )
  {
    v6 = *(_DWORD *)(a3 + 52);
    v7 = 0;
    if ( v6 )
    {
      for ( i = (_QWORD *)(a3 + 1048); ; ++i )
      {
        v9 = (_QWORD *)*i;
        v10 = *a1 - *(_QWORD *)*i;
        if ( *a1 == *(_QWORD *)*i )
          v10 = a1[1] - v9[1];
        if ( !v10 && a2 == *((_WORD *)v9 + 8) )
          break;
        if ( ++v7 >= v6 )
          return (unsigned int)-1073741823;
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
