char __fastcall IoAddTriageDumpDataBlock(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+38h] [rbp-10h]

  v7[0] = IopNumTriageDumpDataBlocks;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = &IopTriageDumpDataBlocks;
  v4 = IopAddTriageDumpDataBlock(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  IopNumTriageDumpDataBlocks = v7[0];
  if ( IopTriageDumpDataArray )
    KeAddTriageDumpDataBlock(IopTriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
