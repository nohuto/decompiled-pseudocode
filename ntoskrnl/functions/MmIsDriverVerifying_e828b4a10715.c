LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  __int64 v1; // rdx
  struct _DRIVER_OBJECT *v2; // r8
  _DWORD *DriverSection; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = DriverObject;
  if ( ((VfRuleClasses & 0x400000) == 0 || (unsigned int)VfDriverIsKernelImageAddress(retaddr, v1, DriverObject))
    && (DriverSection = v2->DriverSection) != 0LL )
  {
    return (DriverSection[26] >> 25) & 1;
  }
  else
  {
    return 0;
  }
}
