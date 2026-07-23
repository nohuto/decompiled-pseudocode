/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x18006FD10
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1100 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070000 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800709A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  _QWORD *v1; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *((_DWORD *)g_RegInfo + 3) != MEMORY[0x7FFE03A4] )
  {
    BaseAddress = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&BaseAddress);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      if ( g_RegInfo && *((_DWORD *)g_RegInfo + 3) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(BaseAddress);
      }
      else
      {
        v1 = BaseAddress;
        *((_QWORD *)BaseAddress + 13) = g_RegInfo;
        if ( g_RegInfo )
          v1[9] = *((_QWORD *)g_RegInfo + 9);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
