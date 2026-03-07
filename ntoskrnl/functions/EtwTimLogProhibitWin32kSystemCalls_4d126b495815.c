__int64 __fastcall EtwTimLogProhibitWin32kSystemCalls(unsigned int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 2512) & 0x2000) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_WIN32K_SYSTEM_CALLS;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_WIN32K_SYSTEM_CALLS;
    result = EtwpTimLogMitigationForProcess(2LL, a1, v3, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2512), 0xFFFFDFFF);
  }
  return result;
}
