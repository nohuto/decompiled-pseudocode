unsigned __int64 __fastcall HalFreeCommonBufferDmaThin(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 *v4; // r14
  __int64 v6; // r15
  unsigned __int64 result; // rax
  _BYTE *v9; // rsi
  struct _MDL *v10; // rdi

  v4 = *(__int64 **)(a1 + 512);
  v6 = a2;
  result = HalpPopCommonBufferEntry((unsigned __int64)a4, (__int64)v4);
  v9 = (_BYTE *)result;
  if ( result )
  {
    v10 = *(struct _MDL **)(result + 40);
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
        v4[5],
        a3,
        (unsigned __int64)(v6 + 4095) >> 12);
    if ( v9[56] )
    {
      if ( v10 )
      {
        MmUnmapLockedPages(a4, v10);
        MiFreePagesFromMdl((ULONG_PTR)v10, 0);
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        MmFreeContiguousMemory(a4);
      }
    }
    ExFreePoolWithTag(v9, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
