__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // ebx
  ULONG64 v14; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rcx
  int v19; // ebx
  _OWORD *v20; // rdi
  __int64 v21; // rax
  char v22; // dl
  int v24; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+54h] [rbp-D4h]
  int v26; // [rsp+5Ch] [rbp-CCh]
  __int64 v27; // [rsp+64h] [rbp-C4h]
  __int64 v28; // [rsp+70h] [rbp-B8h]
  __int128 v29; // [rsp+78h] [rbp-B0h]
  __int128 v30; // [rsp+88h] [rbp-A0h]
  __int128 v31; // [rsp+98h] [rbp-90h]
  __int128 v32; // [rsp+A8h] [rbp-80h]
  _OWORD v33[4]; // [rsp+E0h] [rbp-48h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 0LL);
  memset_0(&v24, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v12 = 87;
LABEL_4:
    v13 = 0;
    UserSetLastError(v12);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v12 = 5;
    goto LABEL_4;
  }
  v16 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v16 > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v25 = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v19 = v24 | 1;
  v24 |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v19 |= 2u;
    v24 = v19;
    *a4 = 0LL;
  }
  v20 = Address;
  if ( Address )
  {
    v21 = PsGetCurrentProcessWow64Process(v18);
    ProbeForWrite(Address, 0x40uLL, v21 != 0 ? 1 : 4);
    v24 = v19 | 4;
    memset_0(v33, 0, sizeof(v33));
    *Address = v33[0];
    Address[1] = v33[1];
    Address[2] = v33[2];
    Address[3] = v33[3];
  }
  v26 = a1;
  v13 = RequestInputSinkInfoFromPoint(&v24);
  if ( v13 )
  {
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = v27;
    v22 = v24;
    if ( (v24 & 2) != 0 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = v28;
    }
    if ( (v22 & 4) != 0 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v20 = (_OWORD *)MmUserProbeAddress;
      *v20 = v29;
      v20[1] = v30;
      v20[2] = v31;
      v20[3] = v32;
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v14);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v13;
}
