/*
 * XREFs of DpiAgpSetAgpCommand @ 0x1C03A2CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpSetAgpCommand(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int (__fastcall *v2)(_QWORD); // rax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1
    && *(_DWORD *)(v1 + 16) == 1953656900
    && *(_DWORD *)(v1 + 20) == 2
    && (v2 = *(unsigned int (__fastcall **)(_QWORD))(v1 + 752)) != 0LL )
  {
    return v2(*(_QWORD *)(v1 + 680));
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v3;
}
