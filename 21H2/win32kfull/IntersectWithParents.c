/*
 * XREFs of IntersectWithParents @ 0x1C0073118
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F57E4 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxGetUpdateRgn @ 0x1C010DFB4 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C0117F40 (xxxGetUpdateRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C021A180 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C0074724 (PhysicalToLogicalInPlaceRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, int *a2)
{
  __int64 v3; // r8
  __int64 i; // rbx
  __int64 v5; // rcx
  char v6; // al
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 0x20) == 0 )
  {
    for ( i = *(_QWORD *)(a1 + 104); i; i = *(_QWORD *)(i + 104) )
    {
      v5 = *(_QWORD *)(i + 40);
      v6 = *(_BYTE *)(v5 + 31);
      if ( (v6 & 0x10) == 0 || (v6 & 0x20) != 0 )
        return 0LL;
      v14 = *(_OWORD *)(v5 + 104);
      PhysicalToLogicalInPlaceRect(v3, &v14);
      v7 = v14;
      v8 = DWORD2(v14);
      if ( *a2 > (int)v14 )
        v7 = *a2;
      v9 = a2[2];
      *a2 = v7;
      if ( v9 < v8 )
        v8 = v9;
      a2[2] = v8;
      if ( v7 >= v8 )
        goto LABEL_19;
      v10 = DWORD1(v14);
      v11 = HIDWORD(v14);
      if ( a2[1] > SDWORD1(v14) )
        v10 = a2[1];
      v12 = a2[3];
      a2[1] = v10;
      if ( v12 < v11 )
        v11 = v12;
      a2[3] = v11;
      if ( v10 >= v11 )
      {
LABEL_19:
        *(_OWORD *)a2 = 0LL;
        return 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 27LL) & 0x20) != 0 )
        return 1LL;
      v3 = i;
    }
  }
  return 1LL;
}
