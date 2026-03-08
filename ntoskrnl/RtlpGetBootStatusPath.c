/*
 * XREFs of RtlpGetBootStatusPath @ 0x1403C03F4
 * Callers:
 *     RtlLockBootStatusData @ 0x14073DD00 (RtlLockBootStatusData.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x1403C0450 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlIsStateSeparationEnabled @ 0x140792EC0 (RtlIsStateSeparationEnabled.c)
 */

__int64 __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  __int64 result; // rax
  char v5; // bl
  const wchar_t *v6; // rcx

  result = RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v5 = 1;
  }
  else
  {
    result = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)result )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  *a2 = v5;
  return result;
}
