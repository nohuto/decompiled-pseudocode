unsigned __int64 __fastcall CollectDriverFailureData(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  __int64 Pool2; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // r11
  _OWORD *v13; // rcx
  __int64 v14; // rdi
  __int128 v15; // xmm1
  __int16 *v16; // rcx
  __int64 v17; // rsi
  __int16 v18; // di

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  result = ExAllocatePool2(64LL, 312LL, 1936876615LL);
  if ( result )
  {
    *(_DWORD *)result = *(_DWORD *)(v4 + 1232);
    *(_DWORD *)(result + 12) = *(_DWORD *)(v4 + 1236);
    *(_WORD *)(result + 16) = *(_WORD *)(v4 + 1248);
    *(_QWORD *)(result + 304) = a2;
    *a1 = result;
    *(_QWORD *)(result + 4) = 0LL;
    *(_DWORD *)(result + 20) = *(_DWORD *)(v4 + 1252);
    *(_DWORD *)(result + 24) = *(_DWORD *)(v4 + 1256);
    *(_DWORD *)(result + 28) = *(_DWORD *)(v4 + 1260);
    *(_QWORD *)(result + 32) = *(_QWORD *)(v4 + 1264);
    *(_QWORD *)(result + 40) = *(_QWORD *)(v4 + 1272);
    *(_DWORD *)(result + 48) = *(_DWORD *)(v4 + 1324);
    *(_DWORD *)(result + 52) = *(_DWORD *)(v4 + 1336);
    *(_DWORD *)(result + 56) = *(_DWORD *)(v4 + 1340);
    *(_QWORD *)(result + 64) = *(_QWORD *)(v4 + 1344);
    *(_QWORD *)(result + 72) = *(_QWORD *)(v4 + 1352);
    *(_QWORD *)(result + 80) = *(_QWORD *)(v4 + 1360);
    *(_QWORD *)(result + 88) = *(_QWORD *)(v4 + 1368);
    *(_QWORD *)(result + 96) = *(_QWORD *)(v4 + 1376);
    *(_QWORD *)(result + 104) = *(_QWORD *)(v4 + 1384);
    *(_QWORD *)(result + 112) = *(_QWORD *)(v4 + 1392);
    *(_DWORD *)(result + 120) = *(_DWORD *)(v4 + 1400);
    *(_DWORD *)(result + 124) = *(_DWORD *)(v4 + 1404);
    *(_DWORD *)(result + 128) = *(_DWORD *)(v4 + 1408);
    *(_DWORD *)(result + 132) = *(_DWORD *)(v4 + 1412);
    *(_WORD *)(result + 136) = gProtocolType;
    if ( *(_QWORD *)(v4 + 3056) )
      wcsncpy_s((wchar_t *)(result + 138), 0x50uLL, *(const wchar_t **)(v4 + 3056), 0xFFFFFFFFFFFFFFFFuLL);
    Pool2 = ExAllocatePool2(64LL, 4096LL, 1936876615LL);
    v7 = Pool2;
    if ( Pool2 )
      a1[1] = Pool2;
    result = ExAllocatePool2(64LL, 4096LL, 1936876615LL);
    v8 = result;
    if ( result )
      a1[2] = result;
    v9 = *(_QWORD *)(v4 + 1264);
    v10 = 0;
    if ( v9 )
    {
      v11 = 0LL;
      v12 = 0LL;
      do
      {
        if ( v11 >= 512 )
          break;
        result = v7;
        v13 = (_OWORD *)v9;
        v14 = 2LL;
        do
        {
          *(_OWORD *)result = *v13;
          *(_OWORD *)(result + 16) = v13[1];
          *(_OWORD *)(result + 32) = v13[2];
          *(_OWORD *)(result + 48) = v13[3];
          *(_OWORD *)(result + 64) = v13[4];
          *(_OWORD *)(result + 80) = v13[5];
          *(_OWORD *)(result + 96) = v13[6];
          result += 128LL;
          v15 = v13[7];
          v13 += 8;
          *(_OWORD *)(result - 16) = v15;
          --v14;
        }
        while ( v14 );
        *(_OWORD *)result = *v13;
        *(_OWORD *)(result + 16) = v13[1];
        *(_OWORD *)(result + 32) = v13[2];
        if ( v8 )
        {
          if ( v10 < 4096 )
          {
            v16 = *(__int16 **)(v9 + 200);
            if ( v16 )
            {
              v17 = v10;
              v18 = 32;
              for ( result = v10 + 2LL; result < 0x1000; result = v10 + 2LL )
              {
                v10 += 2;
                *(_WORD *)(v12 + v8) = *v16;
                v12 += 2LL;
                result = (unsigned __int16)*v16;
                if ( !(_WORD)result && !v18 )
                  break;
                v18 = *v16++;
              }
              if ( v16 != *(__int16 **)(v9 + 200) )
              {
                result = v8 + 2 * v17;
                *(_QWORD *)(v7 + 200) = result;
              }
            }
          }
        }
        v9 = *(_QWORD *)(v9 + 128);
        ++v11;
        v7 += 304LL;
      }
      while ( v9 );
    }
  }
  return result;
}
