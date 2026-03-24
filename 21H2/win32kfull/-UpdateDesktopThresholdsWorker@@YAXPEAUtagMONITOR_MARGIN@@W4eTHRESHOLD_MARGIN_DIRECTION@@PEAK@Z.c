/*
 * XREFs of ?UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C00DC508
 * Callers:
 *     UpdateDesktopThresholds @ 0x1C00DC370 (UpdateDesktopThresholds.c)
 * Callees:
 *     ?GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C00DC604 (-GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall UpdateDesktopThresholdsWorker(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 i; // r10
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r11
  int v10; // eax
  int v11; // ebp
  __int64 v12; // rdi
  int v13; // edx
  int v14; // ebx
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  v21 = 0LL;
  result = gpDispInfo;
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    result = *(_QWORD *)(i + 40);
    if ( (*(_DWORD *)(result + 24) & 1) != 0 )
    {
      v7 = (unsigned int)*a3;
      *(_BYTE *)(v3 + i + 248) = 0;
      *(_BYTE *)(v3 + i + 252) = 0;
      *(_BYTE *)(v3 + i + 256) = 0;
      *(_BYTE *)(v3 + i + 260) = 0;
      *(_BYTE *)(v3 + i + 264) = 0;
      *(_BYTE *)(v3 + i + 268) = 0;
      *(_BYTE *)(v3 + i + 272) = 0;
      result = GetCoordFromRect(&v21, *(_QWORD *)(i + 40) + 28LL, (unsigned int)v3, v7);
      if ( (_DWORD)v8 )
      {
        v11 = DWORD2(v21);
        v12 = 0LL;
        v13 = DWORD1(v21);
        v14 = 0x7FFFFFFF;
        v15 = v21;
        do
        {
          v16 = *(_DWORD *)(v9 + 24 * v12);
          if ( v16 >= (int)v21 && v16 < SDWORD1(v21)
            || (result = *(unsigned int *)(v9 + 24 * v12 + 4), (int)result > (int)v21) && (int)result <= SDWORD1(v21)
            || (int)v21 >= v16 && (int)v21 < (int)result
            || SDWORD1(v21) > v16 && SDWORD1(v21) <= (int)result )
          {
            if ( SDWORD2(v21) > *(_DWORD *)(v9 + 24 * v12 + 8) )
              goto LABEL_6;
            if ( SDWORD2(v21) < v14 )
              v14 = DWORD2(v21);
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < (unsigned int)v8 );
        if ( v14 == 0x7FFFFFFF )
        {
          v20 = 3 * v8;
          *(_DWORD *)(v9 + 8 * v20) = v21;
          result = (unsigned int)(v8 + 1);
          *(_DWORD *)(v9 + 8 * v20 + 4) = v13;
          *(_DWORD *)(v9 + 8 * v20 + 8) = v11;
          *(_QWORD *)(v9 + 8 * v20 + 16) = i;
          *a3 = result;
        }
        else
        {
          result = v9 + 4;
          v17 = v8;
          do
          {
            v18 = *(_DWORD *)(result - 4);
            if ( v18 >= v15 && v18 < v13
              || (v19 = *(_DWORD *)result, *(_DWORD *)result > v15) && v19 <= v13
              || v15 >= v18 && v15 < v19
              || v13 > v18 && v13 <= v19 )
            {
              *(_DWORD *)(result - 4) = v15;
              *(_DWORD *)result = v13;
              *(_DWORD *)(result + 4) = v11;
              *(_QWORD *)(result + 12) = i;
            }
            result += 24LL;
            --v17;
          }
          while ( v17 );
        }
      }
      else
      {
        v10 = DWORD1(v21);
        *(_DWORD *)v9 = v21;
        *(_DWORD *)(v9 + 4) = v10;
        result = DWORD2(v21);
        *(_DWORD *)(v9 + 8) = DWORD2(v21);
        *(_QWORD *)(v9 + 16) = i;
        *a3 = 1;
      }
    }
LABEL_6:
    ;
  }
  return result;
}
