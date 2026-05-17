/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800CD740
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A1470 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800CCB00 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     ZwCallEnclave @ 0x18009E6F0 (ZwCallEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A14E0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CD300 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // ebx

  v5 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v8 = (__int64)v5;
  v9 = 0;
  if ( v5 )
  {
    RtlLeaveCriticalSection((__int64)(v5 + 2), v6, v7);
    LdrpDereferenceEnclave(v8);
    if ( *(_DWORD *)(v8 + 56) == 16 )
      return (unsigned int)RtlCallEnclave();
    else
      return (unsigned int)ZwCallEnclave();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v9;
}
