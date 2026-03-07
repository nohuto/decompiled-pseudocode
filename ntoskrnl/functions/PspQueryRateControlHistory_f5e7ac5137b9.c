__int64 __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  __int64 result; // rax
  char v7; // r12
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  ULONG v13; // esi
  __int64 v14; // r15
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  void *v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  __int64 *v21; // rdx
  unsigned int v23; // [rsp+24h] [rbp-4Ch] BYREF
  ULONG NumberToClear; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+58h] [rbp-18h]

  result = 0LL;
  v23 = 0;
  NumberToClear = 0;
  v25 = 0LL;
  v7 = a3;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  *a4 = 0;
  v27 = 0LL;
  v28 = 0LL;
  if ( a5 == 1 )
  {
    v11 = a1 + 1576;
  }
  else
  {
    result = a1 + 1528;
    v10 = (__int64 *)(a1 + 1224);
    if ( !a5 )
      v10 = (__int64 *)result;
    v11 = *v10;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        result = PspJobIoRateQueryHistory(a1, &v25, &v23, &NumberToClear);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v11 + 128, &v25, &v23, &NumberToClear);
      }
      v12 = v23;
      v13 = NumberToClear;
      v14 = v25;
    }
    else
    {
      DWORD2(v27) = 1;
      *(_QWORD *)&v27 = *(_QWORD *)(v11 + 56);
      result = PspNetRateControlDispatch(&v27);
      if ( (int)result < 0 )
        return result;
      v14 = v28;
      v12 = DWORD2(v28);
      v13 = HIDWORD(v28);
    }
    v15 = a2 - 2;
    if ( v15 )
    {
      if ( v15 == 1 )
        v16 = 600000;
      else
        v16 = 10000;
    }
    else
    {
      v16 = 60000;
    }
    v17 = (v12 + v16 - 1) / v12;
    v18 = *(void **)(v11 + 24);
    v19 = v17;
    v20 = (v17 + 7) >> 3;
    if ( v20 < 8 )
      v20 = 8;
    if ( *(_QWORD *)(v11 + 24) && *(_QWORD *)(v11 + 32) < (unsigned __int64)v20 )
    {
      ExFreePoolWithTag(v18, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
    }
    else if ( v18 )
    {
      if ( v13 >= 8 * v20 )
      {
        memset(v18, 0, v20);
      }
      else if ( v13 )
      {
        RtlCopyBitMap((unsigned int *)(v11 + 8), v11 + 8, v13);
        RtlClearBits((PRTL_BITMAP)(v11 + 8), 0, v13);
      }
LABEL_25:
      v21 = *(__int64 **)(v11 + 24);
      BitMapHeader.SizeOfBitMap = v19;
      if ( v13 > 0x40 )
        LOBYTE(v13) = 64;
      *v21 = v14 & ((1LL << v13) - 1) | *v21 & ~((1LL << v13) - 1);
      BitMapHeader.Buffer = *(unsigned int **)(v11 + 24);
      result = 100 * RtlNumberOfSetBits(&BitMapHeader) / v19;
      if ( (unsigned int)result >= 0x3C )
      {
        *a4 = 3;
      }
      else if ( (unsigned int)result >= 0x28 )
      {
        *a4 = 2;
      }
      else if ( (unsigned int)result >= 0x14 )
      {
        *a4 = 1;
      }
      if ( v7 )
        return (__int64)memset(*(void **)(v11 + 24), 0, *(_QWORD *)(v11 + 32));
      return result;
    }
    result = ExAllocatePool2(256LL, v20, 1649046352LL);
    *(_QWORD *)(v11 + 24) = result;
    if ( !result )
      return result;
    *(_QWORD *)(v11 + 16) = result;
    *(_DWORD *)(v11 + 8) = 8 * v20;
    *(_QWORD *)(v11 + 32) = v20;
    v7 = a3;
    goto LABEL_25;
  }
  return result;
}
