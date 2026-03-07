signed __int32 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1);
}
