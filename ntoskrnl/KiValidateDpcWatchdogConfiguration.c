__int64 __fastcall KiValidateDpcWatchdogConfiguration(void *Src, size_t Size, int a3, _DWORD *a4)
{
  int v6; // r8d
  bool v7; // zf
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // edi
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // r10d
  unsigned int v18; // r8d

  v6 = a3 - 228;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_7;
    v7 = (_DWORD)Size == 32;
  }
  else
  {
    v7 = (_DWORD)Size == 20;
  }
  if ( !v7 )
    return (unsigned int)-1073741820;
LABEL_7:
  *(_OWORD *)a4 = 0LL;
  *((_OWORD *)a4 + 1) = 0LL;
  memmove(a4, Src, (unsigned int)Size);
  v9 = *a4;
  v10 = (unsigned __int8)*a4;
  if ( (unsigned int)(v10 - 1) > 1 )
    return (unsigned int)-1073741811;
  v11 = a3 - 228;
  if ( v11 )
  {
    if ( v11 == 1 && v10 != 2 )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 1 || (v9 & 0x7000) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  v12 = 0;
  if ( !(v9 >> 8) || v9 >= 0x8000 )
    return (unsigned int)-1073741811;
  if ( (v9 & 0x100) == 0 )
    a4[1] = KeDpcTimeoutMs;
  if ( (v9 & 0x200) == 0 )
    a4[2] = KeDpcWatchdogPeriodMs;
  if ( (v9 & 0x400) == 0 )
    a4[3] = KeDpcSoftTimeoutMs;
  if ( (v9 & 0x800) == 0 )
    a4[4] = KeDpcCumulativeSoftTimeoutMs;
  if ( (v9 & 0x1000) == 0 )
    a4[5] = KeDpcWatchdogProfileSingleDpcThresholdMs;
  if ( (v9 & 0x2000) == 0 )
    a4[6] = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
  if ( (v9 & 0x4000) == 0 )
    a4[7] = KeDpcWatchdogProfileBufferSizeBytes;
  v13 = a4[1];
  if ( v13 - 1 <= 0x12 )
    return (unsigned int)-1073741811;
  v14 = a4[2];
  if ( v14 - 1 <= 0x7CE )
    return (unsigned int)-1073741811;
  v15 = a4[3];
  if ( v15 )
  {
    if ( v15 < 0x14 || v13 && v15 > v13 )
      return (unsigned int)-1073741811;
  }
  v16 = a4[4];
  if ( v16 )
  {
    if ( v16 < 0x7D0 || v14 && v16 > v14 )
      return (unsigned int)-1073741811;
  }
  v17 = a4[5];
  if ( v17 )
  {
    if ( v15 )
      v13 = a4[3];
    if ( v13 && v17 > v13 )
      return (unsigned int)-1073741811;
  }
  v18 = a4[6];
  if ( v18 )
  {
    if ( v16 )
      v14 = a4[4];
    if ( v14 && v18 > v14 )
      return (unsigned int)-1073741811;
  }
  if ( (unsigned int)(a4[7] - 1) <= 0x1FFE )
    return (unsigned int)-1073741811;
  return v12;
}
