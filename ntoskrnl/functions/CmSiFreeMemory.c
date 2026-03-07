void __stdcall CmSiFreeMemory(PPRIVILEGE_SET Privileges)
{
  ExFreePoolWithTag(Privileges, 0);
}
