/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C01F1E50
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C0002740 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  ULONG64 v13; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v15; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rcx
  int v18; // ebx
  _OWORD *v19; // rdi
  __int64 v20; // rax
  char v21; // dl
  __int128 v23[13]; // [rsp+50h] [rbp-D8h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 0LL);
  memset(v23, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v11 = 87LL;
LABEL_4:
    v12 = 0;
    UserSetLastError(v11, v9);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v11 = 5LL;
    goto LABEL_4;
  }
  v15 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v15 > MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)((char *)v23 + 4) = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v18 = LODWORD(v23[0]) | 1;
  LODWORD(v23[0]) |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v18 |= 2u;
    LODWORD(v23[0]) = v18;
    *a4 = 0LL;
  }
  v19 = Address;
  if ( Address )
  {
    v20 = PsGetCurrentProcessWow64Process(v17);
    ProbeForWrite(Address, 0x40uLL, v20 != 0 ? 1 : 4);
    LODWORD(v23[0]) = v18 | 4;
    memset(&v23[9], 0, 0x40uLL);
    *Address = v23[9];
    Address[1] = v23[10];
    Address[2] = v23[11];
    Address[3] = v23[12];
  }
  HIDWORD(v23[0]) = a1;
  v12 = RequestInputSinkInfoFromPoint(v23);
  if ( v12 )
  {
    v13 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = *(_QWORD *)((char *)&v23[1] + 4);
    v21 = v23[0];
    if ( (v23[0] & 2) != 0 )
    {
      v13 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = *(_QWORD *)&v23[2];
    }
    if ( (v21 & 4) != 0 )
    {
      v13 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = *(__int128 *)((char *)&v23[2] + 8);
      v19[1] = *(__int128 *)((char *)&v23[3] + 8);
      v19[2] = *(__int128 *)((char *)&v23[4] + 8);
      v19[3] = *(__int128 *)((char *)&v23[5] + 8);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v13);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v12;
}
