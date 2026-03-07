__int64 __fastcall IopLiveDumpAllocateIoSpaceRanges(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _DWORD *a5,
        _QWORD *a6)
{
  int MemoryRanges; // edi
  __int64 v8; // rbx
  unsigned __int64 v9; // r10
  int v10; // r8d
  __int64 Pool2; // rdx
  unsigned __int64 i; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-28h]
  unsigned int v20; // [rsp+40h] [rbp-20h]
  _BYTE P[20]; // [rsp+44h] [rbp-1Ch]

  *(_DWORD *)&P[16] = 0;
  *a4 = 0LL;
  *a5 = 0;
  v17 = a1;
  *a6 = 0LL;
  v16[1] = 7;
  *(_OWORD *)P = 0LL;
  v16[0] = 1;
  v19 = 0x40000000LL;
  v20 = 0x80000000;
  v18 = a3;
  MemoryRanges = MmAllocateMemoryRanges(v16);
  if ( MemoryRanges >= 0 )
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( !*(_QWORD *)&P[4] )
      goto LABEL_10;
    do
    {
      v10 = *(_DWORD *)(*(_QWORD *)&P[12] + 8 * v9++);
      v8 += (((((unsigned __int64)(v10 & 0x3FFFFFFF) << 30) + 0x40000000) >> 12) + 16777214) / 0xFFFFFF;
    }
    while ( v9 < *(_QWORD *)&P[4] );
    if ( v8 )
    {
      Pool2 = ExAllocatePool2(64LL, 8 * v8, 1886217292LL);
      if ( Pool2 )
      {
        for ( i = 0LL; i < *(_QWORD *)&P[4]; ++i )
        {
          v13 = (*(_QWORD *)(*(_QWORD *)&P[12] + 8 * i) >> 12) & 0xFFFFFFFFC0000LL;
          v14 = ((*(_QWORD *)(*(_QWORD *)&P[12] + 8 * i) & 0x3FFFFFFFLL) + 1) << 18;
          *a6 += v14;
          *(_QWORD *)(Pool2 + 8 * i) = (v14 << 40) | v13;
        }
        *a4 = Pool2;
        *a5 = v8;
      }
      else
      {
        MemoryRanges = -1073741670;
      }
    }
    else
    {
LABEL_10:
      MemoryRanges = -1073741823;
    }
  }
  if ( *(_QWORD *)&P[12] )
    ExFreePoolWithTag(*(PVOID *)&P[12], 0);
  return (unsigned int)MemoryRanges;
}
