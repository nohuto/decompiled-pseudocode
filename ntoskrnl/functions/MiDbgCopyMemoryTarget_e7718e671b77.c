__int64 __fastcall MiDbgCopyMemoryTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  _BYTE *v9; // r14
  __int64 i; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // ebx
  __int64 result; // rax
  unsigned int v22; // ebx
  int j; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24[5]; // [rsp+38h] [rbp-50h] BYREF
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  memset(v24, 0, 32);
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v25 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v25);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
    v9 = *(_BYTE **)a2;
    MiFillPteHierarchy(*(_QWORD *)a2, v24);
    for ( i = 3LL; ; --i )
    {
      v11 = v24[i];
      v12 = MI_READ_PTE_LOCK_FREE(v11);
      if ( (v12 & 1) == 0 )
        goto LABEL_20;
      if ( (v12 & 0x80u) != 0LL || !i )
        break;
    }
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
    {
      if ( (v12 & 0x800) == 0 )
      {
LABEL_20:
        v20 = -1073741819;
        goto LABEL_21;
      }
      if ( (v12 & 0x42) == 0 )
      {
        MiWriteValidPteNewProtection(v11, v12 | 0x42);
        LeafVa = MiGetLeafVa((unsigned __int64)v9);
        SystemRegionType = MiGetSystemRegionType(LeafVa);
        v15 = 2;
        if ( SystemRegionType == 1 )
        {
          v16 = 2;
        }
        else if ( SystemRegionType == 2 )
        {
          v16 = 1;
          v15 = 0;
        }
        else
        {
          v16 = 0;
        }
        KeFlushSingleTb((unsigned __int64)v9, v16, v15);
      }
    }
    v17 = *(_DWORD *)(a2 + 20);
    v18 = *(_DWORD *)(a2 + 16);
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
      v19 = MiCopyToUntrustedMemory(v9, *(_BYTE **)(a2 + 8), v18, v17);
    else
      v19 = MiCopyFromUntrustedMemory(*(_BYTE **)(a2 + 8), v9, v18, v17);
    v20 = v19;
LABEL_21:
    *(_DWORD *)(a2 + 28) = v20;
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v22 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v22 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v22;
  }
  _InterlockedDecrement(a3);
  return result;
}
