/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x14040BD88
 * Callers:
 *     RtlpEcReadPolicyState @ 0x14040BC60 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x14040BE44 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x14040BFA8 (RtlpGetPersistedRegistryLocation.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  NTSTATUS PersistedRegistryLocation; // ebx
  size_t v9; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v11; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = a3;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(2LL * a3);
    v11 = StringRoutine;
    if ( StringRoutine )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(StringRoutine, v9, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v11, a5, a6);
      ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}
