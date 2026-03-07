__int64 __fastcall PnpFixupID(int *a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v7; // r10d
  int *v8; // rdi
  int *v9; // r9
  unsigned __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  int v15; // [rsp+20h] [rbp-20h]
  _DWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-8h]
  int v18; // [rsp+68h] [rbp+28h] BYREF

  v16[1] = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = a1;
  v10 = (unsigned __int64)a1 + 2 * a2;
  if ( (unsigned __int64)a1 < v10 )
  {
    do
    {
      v11 = *(_WORD *)v9;
      if ( *(_WORD *)v9 )
      {
        if ( v11 == 32 )
        {
          *(_WORD *)v9 = 95;
        }
        else
        {
          if ( (unsigned __int16)(v11 - 32) > 0x5Fu || v11 == 44 )
          {
            v13 = a5;
            if ( !a5 )
              return 0LL;
            v16[0] = 2359330;
            v14 = L"invalid character";
            v15 = 2;
LABEL_27:
            v17 = v14;
            PnpLogEvent(v13, v16, 3221487672LL, v9, v15);
            return 0LL;
          }
          if ( v11 == 92 )
          {
            v18 = ++v7;
            if ( v7 > a4 )
            {
              v13 = a5;
              if ( !a5 )
                return 0LL;
              v16[0] = 2621478;
              v14 = L"too many separators";
              v15 = 4;
              v9 = &v18;
              goto LABEL_27;
            }
          }
        }
      }
      else
      {
        if ( !a3 || v8 && v9 == (int *)((char *)v8 + 2) )
        {
          if ( (unsigned __int64)v9 < v10 && (v7 == a4 || a4 == -1) )
            return (unsigned int)(((char *)v9 - (char *)a1) >> 1) + 1;
          break;
        }
        v8 = v9;
      }
      v9 = (int *)((char *)v9 + 2);
    }
    while ( (unsigned __int64)v9 < v10 );
  }
  v13 = a5;
  if ( a5 )
  {
    v16[0] = 7471216;
    v14 = L"not terminated, too long or invalid number of separators";
    v15 = 0;
    v9 = 0LL;
    goto LABEL_27;
  }
  return 0LL;
}
