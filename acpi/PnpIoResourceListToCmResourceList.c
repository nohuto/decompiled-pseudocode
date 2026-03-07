__int64 __fastcall PnpIoResourceListToCmResourceList(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  _DWORD *Pool2; // rax
  unsigned int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx

  *a2 = 0LL;
  if ( !a1 )
    return 3221225488LL;
  v4 = a1 + 8;
  if ( a1 == (_DWORD *)-32LL )
    return 3221225488LL;
  v5 = a1[9];
  if ( !v5 )
    return 3221225488LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(20 * (v5 + 1)), 1383097153LL);
  if ( !Pool2 )
    return 3221225626LL;
  v8 = 0;
  *Pool2 = 1;
  Pool2[1] = a1[1];
  Pool2[2] = a1[2];
  Pool2[3] = 65537;
  Pool2[4] = v4[1];
  if ( v4[1] )
  {
    while ( 1 )
    {
      v9 = 5LL * v8;
      v10 = 8LL * v8;
      v11 = BYTE1(v4[v10 + 2]);
      LOBYTE(Pool2[v9 + 5]) = v11;
      BYTE1(Pool2[v9 + 5]) = BYTE2(v4[v10 + 2]);
      HIWORD(Pool2[v9 + 5]) = v4[v10 + 3];
      if ( v11 == 1 )
        break;
      switch ( v11 )
      {
        case 2:
          LOWORD(Pool2[5 * v8 + 6]) = v4[v10 + 4];
          Pool2[5 * v8 + 7] = v4[v10 + 4];
          *(_QWORD *)&Pool2[5 * v8 + 8] = 0xFFFFFFFFLL;
          HIWORD(Pool2[5 * v8 + 6]) = 0;
          break;
        case 3:
          goto LABEL_19;
        case 4:
          if ( SLOBYTE(v4[v10 + 3]) >= 0 )
          {
            *(_QWORD *)&Pool2[5 * v8 + 6] = (unsigned int)v4[v10 + 4];
          }
          else
          {
            Pool2[5 * v8 + 6] = v4[v10 + 6];
            Pool2[5 * v8 + 7] = v4[v10 + 4];
            LOBYTE(Pool2[5 * v8 + 8]) = v4[v10 + 7];
          }
          break;
        case 6:
          Pool2[5 * v8 + 6] = v4[v10 + 5];
          Pool2[5 * v8 + 7] = v4[v10 + 4];
          break;
        case 7:
          goto LABEL_19;
        default:
          Pool2[5 * v8 + 6] = v4[v10 + 4];
          Pool2[5 * v8 + 7] = v4[v10 + 5];
          Pool2[5 * v8 + 8] = v4[v10 + 6];
          break;
      }
LABEL_20:
      if ( ++v8 >= v4[1] )
        goto LABEL_21;
    }
LABEL_19:
    Pool2[5 * v8 + 8] = v4[v10 + 4];
    *(_QWORD *)&Pool2[5 * v8 + 6] = *(_QWORD *)&v4[v10 + 6];
    goto LABEL_20;
  }
LABEL_21:
  *a2 = Pool2;
  return 0LL;
}
