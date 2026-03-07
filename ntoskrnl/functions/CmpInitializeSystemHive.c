__int64 __fastcall CmpInitializeSystemHive(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *Pool2; // rdi
  int v6; // r8d
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h] BYREF

  v11 = a3;
  LOBYTE(v11) = 0;
  BugCheckParameter3 = 0LL;
  Pool2 = (_OWORD *)ExAllocatePool2(256LL, 0x1B0uLL, 0x33394D43u);
  if ( Pool2 )
  {
    v6 = 18;
    if ( CmBugcheckRecoveryEnabled )
      v6 = 33554450;
    v7 = CmpCreateHive(
           &BugCheckParameter3,
           1u,
           v6,
           2u,
           *(_QWORD *)(a1 + 168),
           0LL,
           (__int64)&CmpSystemFileName,
           5832712,
           0LL,
           0LL,
           (__int64)&v11,
           (__int64)Pool2);
    if ( v7 < 0 )
      KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)Pool2, v7);
    CmpSetupLoggingState(BugCheckParameter3, (unsigned int *)(*(_QWORD *)(a1 + 240) + 2916LL));
    if ( (_BYTE)v11 == 1 )
      CmpInitRmLogOnLoad = 1;
    if ( CmpShareSystemHives )
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
    {
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
      *(_DWORD *)(BugCheckParameter3 + 160) &= ~2u;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
    CmpBootType = v8;
    if ( !CmSelfHeal )
    {
      BYTE2(NlsMbOemCodePageTag) = 0;
      if ( (v8 & 4) != 0 )
        KeBugCheckEx(0x74u, 3uLL, 3uLL, BugCheckParameter3, 0LL);
    }
    v9 = CmpLinkHiveToMaster(
           (__int64)&CmRegistryMachineSystemName,
           0LL,
           BugCheckParameter3,
           0,
           dword_140C028E0,
           0,
           0LL,
           a2,
           0LL,
           0LL,
           1,
           Pool2);
    if ( v9 >= 0 )
    {
      v9 = 0;
      qword_140C028D0 = BugCheckParameter3;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
