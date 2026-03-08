/*
 * XREFs of ParseModeCap @ 0x1C0190A98
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x1C01902C4 (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     wcschr @ 0x1C00DA918 (wcschr.c)
 *     xwtol @ 0x1C0192154 (xwtol.c)
 */

__int64 __fastcall ParseModeCap(wchar_t *Str, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // r15d
  unsigned int v6; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  wchar_t *v10; // rax
  wchar_t *v11; // r15
  wchar_t *v12; // rax
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  wchar_t *v20; // rax
  int v21; // r9d
  __int64 v22; // r10
  __int64 v23; // rax
  int v24; // eax
  int v26; // [rsp+20h] [rbp-20h]
  int v27; // [rsp+24h] [rbp-1Ch]
  unsigned int v28; // [rsp+28h] [rbp-18h]
  int v29; // [rsp+2Ch] [rbp-14h]

  v3 = 0;
  v4 = -1;
  v26 = 0;
  v27 = -1;
  v6 = -1;
  v29 = -1;
  v28 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( Str )
    {
      do
      {
        if ( v9 >= 4 )
          break;
        v10 = wcschr(Str, 0x2Cu);
        v11 = v10;
        if ( v10 )
          *v10 = 0;
        v12 = wcschr(Str, 0x2Du);
        v13 = v9;
        if ( v12 )
        {
          *v12 = 0;
          v14 = xwtol(Str);
          Str = (wchar_t *)(v15 + 2);
        }
        else
        {
          v14 = 0;
        }
        *(&v26 + v13) = v14;
        v16 = v9 + 1;
        *(&v26 + v16) = xwtol(Str);
        Str = v11 + 1;
        v9 = v16 + 1;
      }
      while ( v11 );
      v6 = v29;
      v8 = v28;
      v4 = v27;
      v3 = v26;
    }
    if ( a2[3] > v8 )
      v8 = a2[3];
    v17 = a2[2];
    a2[3] = v8;
    if ( v17 < v6 )
      v6 = v17;
    v18 = a2[4];
    a2[2] = v6;
    if ( v18 <= 1000 * v3 )
      v18 = 1000 * v3;
    a2[4] = v18;
    v19 = a2[5];
    if ( v19 >= 1000 * v4 )
      v19 = 1000 * v4;
    a2[5] = v19;
    return 1LL;
  }
  if ( Str )
  {
    do
    {
      if ( v9 >= 4 )
        break;
      v20 = wcschr(Str, 0x2Cu);
      if ( v20 )
        *v20 = 0;
      v21 = xwtol(Str);
      Str = (wchar_t *)(v22 + 2);
      v23 = v9++;
      *(&v26 + v23) = v21;
    }
    while ( v22 );
    if ( v26 )
    {
      v24 = v27;
      if ( v27 != -1 )
      {
        *a2 = v26;
        a2[2] = v28;
        a2[1] = v24;
        return 1LL;
      }
    }
  }
  return 0LL;
}
