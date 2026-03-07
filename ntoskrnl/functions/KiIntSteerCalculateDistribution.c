__int64 __fastcall KiIntSteerCalculateDistribution(int a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v10; // r8
  __int16 v11; // dx
  __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // edx
  _QWORD *v22; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int128 v25; // [rsp+50h] [rbp-10h] BYREF

  v5 = KiIntTrackRootList;
  v6 = *a4 | *a3 | *(_QWORD *)a2;
  v23 = &v22;
  v22 = &v22;
  if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      if ( *(_BYTE *)(v5 + 132) && (!*(_QWORD *)(v5 + 136) || (int)KiIntSteerComputeCpuSet(v5) < 0) )
      {
        if ( *(_QWORD *)(v5 + 192) )
        {
          v19 = v23;
          v20 = (_QWORD *)(v5 + 208);
          if ( *v23 != &v22 )
            __fastfail(3u);
          *(_QWORD *)(v5 + 216) = v23;
          *v20 = &v22;
          *v19 = v20;
          v23 = (_QWORD **)(v5 + 208);
        }
        else
        {
          v10 = *(_QWORD *)(v5 + 160);
          if ( (v6 & v10) != v10 )
          {
            v21 = KiProcessorIndexToNumberMappingTable[(unsigned int)KiIntPartGetLowestClassProcessorInMask(v5 + 64)];
            *(_DWORD *)(v5 + 186) = 0;
            *(_WORD *)(v5 + 190) = 0;
            *(_WORD *)(v5 + 184) = v21 >> 6;
            v10 = 1LL << (v21 & 0x3F);
          }
          *(_QWORD *)(v5 + 176) = v10;
        }
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &KiIntTrackRootList );
    if ( v22 != &v22 )
    {
      v11 = *((_WORD *)a3 + 4);
      v12 = *(_WORD *)(a2 + 8);
      v25 = 0LL;
      WORD4(v25) = v11;
      if ( v11 == v12 )
      {
        v13 = *a3;
        v14 = *a3 & ~*(_QWORD *)a2;
      }
      else
      {
        v14 = *a3;
        v13 = *a3;
      }
      v15 = *((_WORD *)a4 + 4);
      *(_QWORD *)&v25 = v14;
      v24 = 0LL;
      WORD4(v24) = v15;
      if ( v15 == v12 )
        v16 = *a4 & ~*(_QWORD *)a2;
      else
        v16 = *a4;
      if ( v15 == v11 )
        v17 = v16 & ~v13;
      else
        v17 = v16;
      *(_QWORD *)&v24 = v17;
      KiIntSteerCalculatePriorityDistribution(a1, (unsigned int)&v22, a2, (unsigned int)&v25, (__int64)&v24);
      if ( v22 != &v22 )
      {
        KiIntSteerCalculateUniformDistribution(&v22, a4);
        if ( v22 != &v22 )
          KiIntSteerCalculateFallbackDistribution(&v22);
      }
    }
  }
  return 0LL;
}
