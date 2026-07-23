/*
 * XREFs of VfFaultsSetParameters @ 0x1409DD9C8
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140791360 (PsSetCreateProcessNotifyRoutine.c)
 *     ViFaultsAddAllApps @ 0x1409DDB7C (ViFaultsAddAllApps.c)
 *     ViFaultsAddAllTags @ 0x1409DDC28 (ViFaultsAddAllTags.c)
 *     ViFaultsRemoveAllApps @ 0x1409DE428 (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x1409DE4F4 (ViFaultsRemoveAllTags.c)
 *     VfSetVerifierInformation @ 0x1409EDBEC (VfSetVerifierInformation.c)
 */

__int64 __fastcall VfFaultsSetParameters(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a3) = 1;
  v9 = MmVerifierData | 4;
  v4 = VfSetVerifierInformation(&v9, 4LL, a3);
  if ( v4 >= 0 )
  {
    if ( !ViFaultsProcessNotifyRoutineSet )
    {
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
      ViFaultsProcessNotifyRoutineSet = 1;
    }
    if ( *(_DWORD *)(a1 + 4) )
      VfFaultInjectionMaxProbability = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
    {
      VfFaultInjectionMaxProbability = 10000;
      v5 = 600;
    }
    VfFaultInjectionProbability = v5;
    ViFaultsRemoveAllTags();
    ViFaultsRemoveAllApps();
    v6 = *(unsigned __int16 *)(a1 + 24);
    if ( (_WORD)v6 )
      v4 = ViFaultsAddAllApps(*(_QWORD *)(a1 + 32), v6 >> 1);
    if ( v4 >= 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8);
      if ( (_WORD)v7 )
        return (unsigned int)ViFaultsAddAllTags(*(_QWORD *)(a1 + 16), v7 >> 1);
    }
  }
  return (unsigned int)v4;
}
