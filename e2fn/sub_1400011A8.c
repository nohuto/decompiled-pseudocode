__int64 __fastcall sub_1400011A8(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  PVOID *v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int16 v9; // dx

  if ( !a2 || !a3 )
    return 3221225473LL;
  v6 = (PVOID *)(a1 + 2);
  if ( a1[4] > a3 && *v6 )
    goto LABEL_8;
  if ( *v6 )
    ExFreePool(*v6);
  *v6 = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  result = sub_140001070(a1, a3, 0LL);
  if ( !(_DWORD)result )
  {
LABEL_8:
    a1[3] = 0LL;
    if ( a3 )
    {
      v8 = 0LL;
      do
      {
        v9 = *(_WORD *)(a2 + 2 * v8);
        if ( !v9 )
          break;
        *((_WORD *)*v6 + v8) = v9;
        v8 = a1[3] + 1LL;
        a1[3] = v8;
      }
      while ( v8 < a3 );
    }
    *(_WORD *)(a1[2] + 2 * a3) = 0;
    return 0LL;
  }
  return result;
}
