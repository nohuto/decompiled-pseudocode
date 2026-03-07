__int64 VfLwSPEntry()
{
  __int64 result; // rax
  unsigned int v1; // r8d
  unsigned __int64 v2; // rcx
  const char *v3; // [rsp+20h] [rbp-E0h] BYREF
  int v4; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v5)(); // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v6)(); // [rsp+38h] [rbp-C8h]
  const char *v7; // [rsp+40h] [rbp-C0h]
  int v8; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v9)(); // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v10)(); // [rsp+58h] [rbp-A8h]
  const char *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v13)(); // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v14)(); // [rsp+78h] [rbp-88h]
  const char *v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v17)(); // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v18)(); // [rsp+98h] [rbp-68h]
  const char *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v21)(); // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v22)(); // [rsp+B8h] [rbp-48h]
  const char *v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v25)(); // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v26)(); // [rsp+D8h] [rbp-28h]
  const char *v27; // [rsp+E0h] [rbp-20h]
  int v28; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v29)(); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v30)(); // [rsp+F8h] [rbp-8h]
  const char *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v33)(); // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  const char *v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v37)(); // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]

  result = DifGetAvailableSystemPages();
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)DifpLwSPAvailableSystemPages >= 0x64 )
    {
      v1 = DifiPluginControlNumerator;
      if ( !DifiPluginControlNumerator )
      {
        v1 = 1;
        DifiPluginControlNumerator = 1;
      }
      v2 = (unsigned int)DifiPluginControlDenominator;
      if ( !DifiPluginControlDenominator )
      {
        v2 = 100LL;
        DifiPluginControlDenominator = 100;
      }
      if ( !DifiPluginControlSparseness )
        DifiPluginControlSparseness = 100;
      v4 = 27;
      v8 = 21;
      DifpLwSPAllowedSPPages = v1 * (DifpLwSPAvailableSystemPages / v2);
      v12 = 22;
      v3 = "ExAllocatePool";
      v5 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v6 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v7 = "ExAllocatePool2";
      v9 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v10 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v11 = "ExAllocatePool3";
      v13 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v14 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v15 = "ExAllocatePoolWithTag";
      v17 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v18 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v19 = "ExAllocatePoolWithTagPriority";
      v21 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v22 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v23 = "ExAllocatePoolWithQuota";
      v25 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v26 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v27 = "ExAllocatePoolWithQuotaTag";
      v29 = DifpExAllocatePoolWithTagPriority_LwSP_Enter;
      v30 = DifpExAllocatePoolWithQuota_LwSP_Exit;
      v31 = "ExFreePool";
      v33 = DifpExFreePool_LwSP_Enter;
      v35 = "ExFreePoolWithTag";
      v37 = DifpExFreePoolWithTag_LwSP_Enter;
      v16 = 26;
      v20 = 25;
      v24 = 24;
      v28 = 23;
      v32 = 39;
      v34 = 0LL;
      v36 = 40;
      v38 = 0LL;
      return DifRegisterPlugin((__int64)&v3, 9u, 0x27u, 0LL);
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
