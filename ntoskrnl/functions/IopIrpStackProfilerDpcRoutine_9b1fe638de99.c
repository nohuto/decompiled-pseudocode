__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rdi
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  _DWORD v18[82]; // [rsp+0h] [rbp-218h] BYREF
  _DWORD *v19; // [rsp+148h] [rbp-D0h]
  _QWORD v20[20]; // [rsp+150h] [rbp-C8h] BYREF

  v19 = v18;
  memset(&v18[36], 0, 0x5BuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v18[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v18[56] + 3) = a3;
    *(_QWORD *)((char *)&v18[40] + 3) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v18[50] + 3) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine2(a2);
  }
  memset(v20, 0, sizeof(v20));
  v8 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v8 += (unsigned int)(*(_DWORD *)(Prcb + 35856) - *(_DWORD *)(Prcb + 35940));
      v11 = 0LL;
      v12 = (_DWORD *)(Prcb + 35776);
      do
      {
        v20[v11++] += (unsigned int)(*v12 - v12[21]);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  result = (unsigned int)IopIrpStackProfilerSampleSize;
  if ( v8 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v13 = 0;
    v15 = 0LL;
    result = (unsigned int)IopIrpStackProfilerMinSizeThreshold;
    do
    {
      if ( v20[v15] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v13;
      ++v15;
    }
    while ( v15 < 20 );
  }
  if ( v13 != 20 )
  {
    IopProcessIrpStackProfiler(v20);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    v16 = 0;
    for ( result = (unsigned int)KeNumberProcessors_0;
          v16 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      v17 = KeGetPrcb(v16);
      if ( v17 )
      {
        *(_OWORD *)(v17 + 35860) = *(_OWORD *)(v17 + 35776);
        *(_OWORD *)(v17 + 35876) = *(_OWORD *)(v17 + 35792);
        *(_OWORD *)(v17 + 35892) = *(_OWORD *)(v17 + 35808);
        *(_OWORD *)(v17 + 35908) = *(_OWORD *)(v17 + 35824);
        *(_OWORD *)(v17 + 35924) = *(_OWORD *)(v17 + 35840);
        *(_DWORD *)(v17 + 35940) = *(_DWORD *)(v17 + 35856);
      }
      ++v16;
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
  return result;
}
