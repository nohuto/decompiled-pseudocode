char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v4; // r14d
  unsigned int v7; // edi
  int v8; // r9d
  char v9; // bl
  unsigned int v11; // [rsp+54h] [rbp-54h]
  unsigned int v12; // [rsp+58h] [rbp-50h]
  struct _MDL *MemoryDescriptorList; // [rsp+60h] [rbp-48h]
  PVOID BcbVoid; // [rsp+68h] [rbp-40h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h] BYREF
  __int64 v17; // [rsp+80h] [rbp-28h] BYREF
  char v18; // [rsp+B8h] [rbp+10h]

  v4 = a4;
  v7 = 0;
  v15 = 0LL;
  v16 = *a2;
  BcbVoid = 0LL;
  v17 = 0LL;
  v18 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v16, a3 - v7, 0, 1, v4, (ULONG_PTR *)&BcbVoid, &v17, &v15) )
  {
    v11 = v15 - v16;
    v12 = v15 - v16 + v7;
    MemoryDescriptorList = (struct _MDL *)IopAllocateMdl(v17, (int)v15 - (int)v16, 0, v8, 0LL, 0);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(3221225626LL);
    v9 = BYTE5(KeGetCurrentThread()[1].Queue);
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0LL, 0LL);
    BYTE5(KeGetCurrentThread()[1].Queue) = v9;
    v16 = v15;
    MmSetAddressRangeModifiedEx(v17, v11);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid);
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v12;
    if ( a3 <= v12 )
      goto LABEL_8;
  }
  v18 = 0;
LABEL_8:
  if ( BcbVoid )
    CcUnpinFileDataEx(BcbVoid);
  return v18;
}
