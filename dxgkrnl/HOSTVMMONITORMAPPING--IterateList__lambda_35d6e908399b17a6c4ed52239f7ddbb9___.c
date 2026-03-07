_BYTE *__fastcall HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int *v3; // r10
  _BYTE *result; // rax
  _QWORD *v5; // r9

  v2 = *a1;
  if ( *a1 != a1 )
  {
    v3 = *(unsigned int **)(a2 + 16);
    do
    {
      result = (_BYTE *)*((_QWORD *)v3 + 2);
      v5 = v2;
      v2 = (_QWORD *)*v2;
      if ( (_BYTE *)v5[4] == result )
      {
        ++**(_DWORD **)a2;
        result = (_BYTE *)*v3;
        if ( *((_DWORD *)v5 + 4) == (_DWORD)result )
        {
          result = (_BYTE *)v3[1];
          if ( *((_DWORD *)v5 + 5) == (_DWORD)result )
          {
            result = (_BYTE *)v3[2];
            if ( *((_DWORD *)v5 + 6) == (_DWORD)result )
            {
              result = (_BYTE *)*((_QWORD *)v3 + 4);
              if ( (_BYTE *)v5[6] == result )
              {
                result = *(_BYTE **)(a2 + 8);
                *result = 1;
              }
            }
          }
        }
      }
    }
    while ( v2 != a1 );
  }
  return result;
}
