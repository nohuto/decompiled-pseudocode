/*
 * XREFs of HalpAcpiPmRegisterReadRegister @ 0x14051A3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterReadRegister(_QWORD *a1, int a2, _QWORD *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        if ( v5 != 4 )
          return 3221225473LL;
        *a3 = *a1;
      }
      else
      {
        *(_DWORD *)a3 = *(_DWORD *)a1;
      }
    }
    else
    {
      *(_WORD *)a3 = *(_WORD *)a1;
    }
  }
  else
  {
    *(_BYTE *)a3 = *(_BYTE *)a1;
  }
  return 0LL;
}
