__int64 __fastcall HvlpLogHypervisorLaunchError(__int64 *a1)
{
  __int64 result; // rax
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // r8
  const EVENT_DESCRIPTOR *v3; // rcx
  ULONG v4; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-58h] BYREF

  result = *a1;
  if ( *a1 == 35 )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)(a1 + 1);
    p_UserData = &UserData;
    UserData.Size = 4;
    v3 = &HV_EVENTLOG_BAL_HYPERVISOR_INIT_FAILED;
    v4 = 1;
  }
  else
  {
    if ( result != 38 )
      return result;
    p_UserData = 0LL;
    v3 = (const EVENT_DESCRIPTOR *)HV_EVENTLOG_BAL_TOO_MANY_RS_MEMORY_RANGES;
    v4 = 0;
  }
  return HvlpWriteEventLog(v3, v4, p_UserData);
}
