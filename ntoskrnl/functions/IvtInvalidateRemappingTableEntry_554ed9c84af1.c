__int64 __fastcall IvtInvalidateRemappingTableEntry(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return IvtInvalidateRemappingTableEntries(a1, &v3);
}
