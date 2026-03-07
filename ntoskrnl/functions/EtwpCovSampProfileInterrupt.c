__int64 __fastcall EtwpCovSampProfileInterrupt(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r11d
  unsigned int v15; // r11d
  unsigned int v16; // r11d
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  result = (__int64)KeGetCurrentThread();
  if ( (_KTHREAD *)result != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = (unsigned int)v5;
    LODWORD(v5) = ((unsigned int)v5 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v5);
    v8 = (v6 >> 4) & 0x1FF;
    v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v7 - 2) + 8LL * ((unsigned int)v5 ^ (1 << v7)) + 8);
    if ( !*(_DWORD *)(v9 + 8 * v8 + 144) )
    {
LABEL_13:
      v20 = *(_QWORD *)(a1 + 360);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8 * v8 + 320));
      return EtwpCovSampCaptureSample(v20, 0x50000002u);
    }
    v10 = MEMORY[0xFFFFF78000000320];
    result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 8 * v8 + 148));
    if ( (unsigned int)result > *(_DWORD *)(v9 + 8 * v8 + 152) )
    {
      v11 = *(_DWORD *)(v9 + 8 * v8 + 156);
      v12 = *(_DWORD *)(v9 + 8 * v8 + 144);
      v13 = v12 + *(_DWORD *)(v9 + 8 * v8 + 164);
      v14 = *(_DWORD *)(v9 + 8 * v8 + 160);
      *(_DWORD *)(v9 + 8 * v8 + 148) = MEMORY[0xFFFFF78000000320];
      if ( v13 > v11 )
        v13 = v11;
      v15 = *(_DWORD *)(v9 + 8 * v8 + 172) + v14;
      *(_DWORD *)(v9 + 8 * v8 + 160) = 0;
      result = (unsigned int)(2 * v12);
      v16 = v15 >> 1;
      *(_DWORD *)(v9 + 8 * v8 + 164) = v13;
      *(_DWORD *)(v9 + 8 * v8 + 172) = v16;
      if ( v16 >= (unsigned int)result )
      {
        v17 = v16 / (v12 + 1);
        v18 = 16777619 * (*(_DWORD *)(v9 + 8 * v8 + 180) ^ v10);
        *(_DWORD *)(v9 + 8 * v8 + 176) = v17;
        result = v18 & (2 * v17);
        *(_DWORD *)(v9 + 8 * v8 + 180) = v18;
        *(_DWORD *)(v9 + 8 * v8 + 168) = result;
      }
      else
      {
        *(_DWORD *)(v9 + 8 * v8 + 176) = 1;
        *(_DWORD *)(v9 + 8 * v8 + 168) = 1;
      }
    }
    ++*(_DWORD *)(v9 + 8 * v8 + 160);
    v19 = *(_DWORD *)(v9 + 8 * v8 + 164);
    if ( v19 > 0 )
    {
      result = (unsigned int)(*(_DWORD *)(v9 + 8 * v8 + 168) - 1);
      *(_DWORD *)(v9 + 8 * v8 + 168) = result;
      if ( (int)result <= 0 )
      {
        *(_DWORD *)(v9 + 8 * v8 + 164) = v19 - 1;
        *(_DWORD *)(v9 + 8 * v8 + 168) = *(_DWORD *)(v9 + 8 * v8 + 176);
        goto LABEL_13;
      }
    }
  }
  return result;
}
