void __fastcall __noreturn PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock(a1);
  PopPdcIdleResiliency = v2;
  v4 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v4);
  PopCheckResiliencyScenarios();
  LOBYTE(v3) = v2;
  PopAccumulateNonActivatedCpuTime(v3, &qword_140CF78E8, &qword_140CF78F0);
  PpmQueryTime();
}
