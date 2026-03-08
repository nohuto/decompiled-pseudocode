/*
 * XREFs of PfpProcessScenarioPhase @ 0x14073A2C8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1407E2E70 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlGetActiveConsoleId @ 0x1402B8940 (RtlGetActiveConsoleId.c)
 *     PsGetCurrentProcessSessionId @ 0x140343AA0 (PsGetCurrentProcessSessionId.c)
 *     MmGetNextSession @ 0x14035C2F0 (MmGetNextSession.c)
 *     PfpLogScenarioEvent @ 0x14073A758 (PfpLogScenarioEvent.c)
 *     PfpScenCtxScenarioSet @ 0x140A84910 (PfpScenCtxScenarioSet.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 *     PfpScenCtxPrefetchWait @ 0x140A9D25C (PfpScenCtxPrefetchWait.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // r9d
  unsigned __int64 v4; // r8
  BOOL v5; // r10d
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // rcx
  int ActiveConsoleId; // ebx
  int v11; // ebp
  void *NextSession; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8

  v2 = 0;
  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  v4 = (unsigned int)a1[4];
  v5 = (v4 & 1) != 0;
  if ( v3 != 1 && v3 != 2 )
  {
    if ( v3 == 3 )
    {
      v9 = (unsigned int)a1[2];
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 != 1 || dword_140C64C60 != 3 )
          return v2;
        PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C64C30);
        PfpLogScenarioEvent(3, 0, 0, dword_140C64C64, 0);
      }
      else
      {
        ActiveConsoleId = RtlGetActiveConsoleId(v9, a2);
        if ( (unsigned int)PsGetCurrentProcessSessionId() != ActiveConsoleId )
          return v2;
        if ( dword_140C64FD8 >= (unsigned int)dword_140C64FDC )
          return v2;
        v11 = 0;
        NextSession = (void *)MmGetNextSession(0LL);
        if ( !NextSession )
          return v2;
        while ( (unsigned int)++v11 < 3 )
        {
          NextSession = (void *)MmGetNextSession(NextSession);
          if ( !NextSession )
            return v2;
        }
        ObfDereferenceObject(NextSession);
      }
      goto LABEL_29;
    }
    if ( v3 == 4 )
    {
      v6 = (unsigned int)a1[2];
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 == 1 )
        {
          v7 = RtlGetActiveConsoleId(v6, a2);
          if ( (unsigned int)PsGetCurrentProcessSessionId() == v7 )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64C30);
            if ( dword_140C64FD8 < (unsigned int)dword_140C64FDC )
              PfpLogScenarioEvent(5, 2, 3, dword_140C64C64, 1);
          }
        }
        return v2;
      }
LABEL_29:
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64C30);
      return v2;
    }
    if ( v3 != 5 )
      return (unsigned int)-1073741811;
  }
  if ( (_BYTE)a2 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    v13 = v5 | 4u;
    v14 = v4 >> 1;
    if ( v3 != 5 )
      v13 = v5;
    PfPowerActionNotify((unsigned int)a1[2], v13, v14);
  }
  return v2;
}
