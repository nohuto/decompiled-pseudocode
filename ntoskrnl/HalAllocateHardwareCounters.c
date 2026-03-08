/*
 * XREFs of HalAllocateHardwareCounters @ 0x140930360
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpGetFullPmuOwnership @ 0x1404FFC7C (HalpGetFullPmuOwnership.c)
 */

NTSTATUS __stdcall HalAllocateHardwareCounters(
        PGROUP_AFFINITY GroupAffinty,
        ULONG GroupCount,
        PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
        PHANDLE CounterSetHandle)
{
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 Group; // rcx
  unsigned __int64 Mask; // r8
  unsigned int v12; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 (__fastcall *v14)(); // rax
  _DWORD v15[68]; // [rsp+20h] [rbp-148h] BYREF

  v5 = GroupCount;
  memset(&v15[2], 0, 0x100uLL);
  if ( !CounterSetHandle )
    return -1073741811;
  *CounterSetHandle = 0LL;
  if ( !GroupAffinty && !ResourceList )
    return HalpGetFullPmuOwnership((__int64 *)CounterSetHandle);
  v15[0] = 2097153;
  memset(&v15[1], 0, 0x104uLL);
  if ( GroupAffinty )
  {
    if ( (_DWORD)v5 )
    {
      v9 = v5;
      while ( 1 )
      {
        Group = GroupAffinty->Group;
        Mask = GroupAffinty->Mask;
        if ( LOWORD(v15[0]) > (unsigned __int16)Group )
          goto LABEL_11;
        if ( HIWORD(v15[0]) > (unsigned __int16)Group )
          break;
LABEL_12:
        ++GroupAffinty;
        if ( !--v9 )
          goto LABEL_16;
      }
      LOWORD(v15[0]) = Group + 1;
LABEL_11:
      *(_QWORD *)&v15[2 * Group + 2] |= Mask;
      goto LABEL_12;
    }
  }
  else
  {
    v12 = 0;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      do
        KeAddProcessorAffinityEx((unsigned __int16 *)v15, v12++);
      while ( v12 < ActiveProcessorCount );
    }
  }
LABEL_16:
  v14 = HalpProfileInterface[14];
  if ( v14 )
    return ((__int64 (__fastcall *)(_DWORD *, PPHYSICAL_COUNTER_RESOURCE_LIST, PHANDLE))v14)(
             v15,
             ResourceList,
             CounterSetHandle);
  else
    return -1073741670;
}
