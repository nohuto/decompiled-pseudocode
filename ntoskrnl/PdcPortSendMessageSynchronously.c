/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x140200B80
 * Callers:
 *     PdcTaskClientRequest @ 0x14067F048 (PdcTaskClientRequest.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    *(_DWORD *)(a2 + 44) = 5;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 40))(*(_QWORD *)(a1 + 24), a2, 800LL);
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
