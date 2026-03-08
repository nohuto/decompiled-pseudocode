/*
 * XREFs of ?GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z @ 0x1C00D44C8
 * Callers:
 *     NtUserGetImeInfoEx @ 0x1C00D42B0 (NtUserGetImeInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImeInfoEx(__int64 a1, wchar_t *a2, int a3)
{
  wchar_t *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm1

  v3 = a2;
  if ( a1 )
  {
    v4 = *(_QWORD **)(a1 + 72);
    if ( v4 )
    {
      v5 = *(_QWORD **)(a1 + 72);
      if ( a3 )
      {
        if ( a3 == 3 )
        {
          while ( 1 )
          {
            v11 = v5[10];
            if ( v11 )
            {
              if ( !_wcsnicmp((const wchar_t *)(v11 + 188), v3 + 94, 0x50uLL) )
                break;
            }
            v5 = (_QWORD *)v5[2];
            if ( v5 == v4 )
              return 0LL;
          }
          v6 = (_OWORD *)v5[10];
          v12 = 2LL;
          do
          {
            *(_OWORD *)v3 = *v6;
            *((_OWORD *)v3 + 1) = v6[1];
            *((_OWORD *)v3 + 2) = v6[2];
            *((_OWORD *)v3 + 3) = v6[3];
            *((_OWORD *)v3 + 4) = v6[4];
            *((_OWORD *)v3 + 5) = v6[5];
            *((_OWORD *)v3 + 6) = v6[6];
            v3 += 64;
            v13 = v6[7];
            v6 += 8;
            *((_OWORD *)v3 - 1) = v13;
            --v12;
          }
          while ( v12 );
          goto LABEL_8;
        }
      }
      else
      {
        while ( v5[5] != *(_QWORD *)a2 )
        {
          v5 = (_QWORD *)v5[2];
          if ( v5 == v4 )
            return 0LL;
        }
        v6 = (_OWORD *)v5[10];
        if ( v6 )
        {
          v7 = 2LL;
          do
          {
            *(_OWORD *)v3 = *v6;
            *((_OWORD *)v3 + 1) = v6[1];
            *((_OWORD *)v3 + 2) = v6[2];
            *((_OWORD *)v3 + 3) = v6[3];
            *((_OWORD *)v3 + 4) = v6[4];
            *((_OWORD *)v3 + 5) = v6[5];
            *((_OWORD *)v3 + 6) = v6[6];
            v3 += 64;
            v8 = v6[7];
            v6 += 8;
            *((_OWORD *)v3 - 1) = v8;
            --v7;
          }
          while ( v7 );
LABEL_8:
          *(_OWORD *)v3 = *v6;
          *((_OWORD *)v3 + 1) = v6[1];
          *((_OWORD *)v3 + 2) = v6[2];
          *((_OWORD *)v3 + 3) = v6[3];
          *((_OWORD *)v3 + 4) = v6[4];
          v9 = v6[5];
          result = 1LL;
          *((_OWORD *)v3 + 5) = v9;
          return result;
        }
      }
    }
  }
  return 0LL;
}
