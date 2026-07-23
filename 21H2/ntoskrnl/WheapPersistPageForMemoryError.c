/*
 * XREFs of WheapPersistPageForMemoryError @ 0x1405BBD88
 * Callers:
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x1404BBFD0 (HalSetEnvironmentVariableEx.c)
 *     MmGetPageBadStatus @ 0x14052FA50 (MmGetPageBadStatus.c)
 *     WheapErrorContainsMemorySection @ 0x1405BCB24 (WheapErrorContainsMemorySection.c)
 */

void __fastcall WheapPersistPageForMemoryError(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 104) & 0x20) != 0 )
  {
    v1 = WheapErrorContainsMemorySection();
    if ( v1 )
    {
      if ( (*(_BYTE *)v1 & 2) != 0 )
      {
        v5 = *(_QWORD *)(v1 + 16);
        v6 = v5;
        if ( !(unsigned int)MmGetPageBadStatus(&v6, v2, v3, v4) )
        {
          v6 = v5 >> 12;
          HalSetEnvironmentVariableEx(L"UncorrectedBadMemoryPage", (int)&WheapHardwareErrorGuid, (__int64)&v6, 8, 7);
        }
      }
    }
  }
}
