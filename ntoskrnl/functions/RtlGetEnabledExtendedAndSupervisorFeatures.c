__int64 __fastcall RtlGetEnabledExtendedAndSupervisorFeatures(__int64 a1)
{
  return a1 & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]);
}
