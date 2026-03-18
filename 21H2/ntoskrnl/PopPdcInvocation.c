/*
 * XREFs of PopPdcInvocation @ 0x1407FCAFC
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPdcRegister @ 0x140861088 (PopPdcRegister.c)
 */

__int64 __fastcall PopPdcInvocation(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return PopPdcRegister(a1, a2, v2, a1);
  if ( (_DWORD)v2 != 1 )
    return 3221225485LL;
  result = 3221225474LL;
  if ( qword_140C5AD60 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C5AD60)(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
