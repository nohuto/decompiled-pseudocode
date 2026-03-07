PVOID __fastcall PopPowerRequestTableInsertEntry(int a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  DWORD2(v2) = a1;
  return RtlInsertElementGenericTableAvl(&PopPowerRequestTable, &v2, 0x10u, &v3);
}
