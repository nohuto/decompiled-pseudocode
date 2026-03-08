/*
 * XREFs of ACPIWakeEmulationPrepare @ 0x1C0098BFC
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CF98 (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ACPICreateWakeInterruptRegistrationEntries @ 0x1C0098B50 (ACPICreateWakeInterruptRegistrationEntries.c)
 */

__int64 __fastcall ACPIWakeEmulationPrepare(__int64 a1)
{
  __int64 v1; // rax
  char v3; // si
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // rbp
  void *v7; // rdi
  int v8; // eax
  __int64 Pool2; // rax
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = *(_DWORD **)(v1 + 680);
  if ( !v4 || *v4 != 1 )
    return (unsigned int)-1073741637;
  if ( (*(_DWORD *)(v1 + 1008) & 0x100000) != 0 )
  {
    v6 = (__int64)(v4 + 3);
    v11 = 1;
    v7 = (void *)(a1 + 152);
    v8 = ACPICreateWakeInterruptRegistrationEntries((__int64)(v4 + 3), a1, a1 + 152, &v11);
    v5 = v8;
    if ( v8 >= 0 )
      goto LABEL_13;
    if ( v8 != -1073741789 )
      goto LABEL_10;
    Pool2 = ExAllocatePool2(64LL, 40 * v11, 1349542721LL);
    v7 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v5 = ACPICreateWakeInterruptRegistrationEntries(v6, a1, Pool2, &v11);
    v3 = 1;
    if ( v5 >= 0 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 116) = v11;
      if ( v3 )
        *(_QWORD *)(a1 + 152) = v7;
    }
    else
    {
LABEL_10:
      v5 = -1073741637;
      if ( v7 && v3 )
      {
        ExFreePoolWithTag(v7, 0x50706341u);
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}
