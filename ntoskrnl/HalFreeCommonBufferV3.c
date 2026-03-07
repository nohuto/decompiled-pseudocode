unsigned __int64 __fastcall HalFreeCommonBufferV3(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // r14
  __int64 v6; // r13
  bool v8; // di
  unsigned __int64 result; // rax
  void *v10; // rbp
  struct _MDL *v11; // rsi
  char v12; // r12

  v4 = *(_QWORD *)(a1 + 512);
  v6 = a2;
  v8 = 0;
  result = HalpPopCommonBufferEntry((unsigned __int64)a4, v4);
  v10 = (void *)result;
  if ( !result )
    return result;
  switch ( *(_DWORD *)(v4 + 48) )
  {
    case 1:
      goto LABEL_5;
    case 2:
      v8 = *(_QWORD *)(result + 40) != 0LL;
      break;
    case 3:
LABEL_5:
      v8 = 1;
      break;
  }
  v11 = *(struct _MDL **)(result + 40);
  v12 = *(_BYTE *)(result + 56);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
      *(_QWORD *)(v4 + 40),
      a3,
      (unsigned __int64)(v6 + 4095) >> 12);
  if ( v12 )
  {
    if ( v11 )
    {
      MmUnmapLockedPages(a4, v11);
      MiFreePagesFromMdl((ULONG_PTR)v11, 0);
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      MmFreeContiguousMemory(a4);
    }
  }
  ExFreePoolWithTag(v10, 0);
  return HalpDmaDereferenceDomainObject(v4);
}
