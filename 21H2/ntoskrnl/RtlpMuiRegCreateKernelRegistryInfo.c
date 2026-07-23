/*
 * XREFs of RtlpMuiRegCreateKernelRegistryInfo @ 0x1403A8878
 * Callers:
 *     MUIRegistrySystemRoutine @ 0x140790490 (MUIRegistrySystemRoutine.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     memset @ 0x140414300 (memset.c)
 *     _RtlpMuiRegSerializeRegistryInfo @ 0x14078FA68 (_RtlpMuiRegSerializeRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14078FD48 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x140790230 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1407903C8 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x140790438 (RtlpMuiRegCreateRegistryInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegCreateKernelRegistryInfo(
        ULONG_PTR *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7)
{
  int v9; // ebp
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // rsi
  __int64 RegistryInfo; // rax
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  _WORD *v17; // rcx
  unsigned int v18; // ebx
  PVOID PoolWithTag; // rax
  unsigned int NumberOfBytes[18]; // [rsp+20h] [rbp-48h] BYREF

  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a1 || !a2 || !a3 || !a5 || !a7 )
  {
    v13 = -1073741811;
    goto LABEL_33;
  }
  RegistryInfo = RtlpMuiRegCreateRegistryInfo();
  v11 = RegistryInfo;
  if ( !RegistryInfo )
    return (unsigned int)-1073741801;
  v13 = RtlpMuiRegLoadRegistryInfo(RegistryInfo);
  if ( v13 >= 0 )
  {
    v15 = *(_QWORD *)(v11 + 24);
    v16 = *(unsigned __int16 *)(v15 + 6);
    if ( (_WORD)v16 )
    {
      v17 = *(_WORD **)(v15 + 16);
      v14 = v16;
      do
      {
        if ( (*v17 & 0x9020) == 0x20 && (*v17 & 3) != 0 )
          ++v9;
        v17 += 14;
        --v14;
      }
      while ( v14 );
    }
    *a3 = v9;
    *a5 = 0;
    if ( a4 )
    {
      LOBYTE(v14) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(v11, (unsigned __int16)a4, v14, 0LL) >= 0 )
        *a5 = 1;
    }
    *a7 = 0;
    if ( a6 )
    {
      LOBYTE(v14) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(v11, (unsigned __int16)a6, v14, 0LL) >= 0 )
        *a7 = 1;
    }
    NumberOfBytes[0] = 0;
    v13 = RtlpMuiRegSerializeRegistryInfo(v11, 0LL, NumberOfBytes);
    if ( v13 >= 0 )
    {
      if ( NumberOfBytes[0] )
      {
        v18 = NumberOfBytes[0];
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x72746C6Du);
        v10 = (ULONG_PTR)PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, v18);
      }
      if ( v10 )
      {
        v13 = RtlpMuiRegSerializeRegistryInfo(v11, v10, NumberOfBytes);
        if ( v13 >= 0 )
        {
          *a1 = v10;
          *a2 = NumberOfBytes[0];
          goto LABEL_27;
        }
LABEL_33:
        if ( v10 )
          ExFreeHeapPool(v10);
        goto LABEL_27;
      }
      v13 = -1073741801;
    }
  }
LABEL_27:
  if ( v11 )
  {
    RtlpMuiRegFreeRegistryInfo(v11, 4095LL);
    ExFreeHeapPool(v11);
  }
  return (unsigned int)v13;
}
