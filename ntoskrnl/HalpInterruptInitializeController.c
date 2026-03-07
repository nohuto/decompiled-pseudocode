__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // eax
  int v7; // ecx

  if ( (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    return 0LL;
  v2 = *(_DWORD *)(BugCheckParameter3 + 244);
  if ( (v2 & 1) == 0 )
    goto LABEL_3;
  if ( !HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 304) )
    HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 304);
  if ( !(_DWORD)HalpInterruptMaxCluster || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 308) )
    LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 308);
  v7 = v2 & 0x400;
  if ( !HalpInterruptDirectedEoiModeDetermined )
    goto LABEL_14;
  if ( v7 )
  {
    if ( HalpInterruptDirectedEoiModeEnabled )
      goto LABEL_14;
LABEL_24:
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      25,
      -1073741811,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      494);
    goto LABEL_5;
  }
  if ( HalpInterruptDirectedEoiModeEnabled )
    goto LABEL_24;
LABEL_14:
  v3 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
  if ( v3 >= 0 )
  {
LABEL_3:
    v3 = (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter3 + 40))(*(_QWORD *)(BugCheckParameter3 + 16));
    if ( v3 < 0 )
      HalpInterruptSetProblemEx(
        BugCheckParameter3,
        5,
        v3,
        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
        519);
  }
LABEL_5:
  v4 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( v3 < 0 )
    v5 = v4 & 0xFFFFFFFC | 2;
  else
    v5 = v4 & 0xFFFFFFFC | 1;
  *(_DWORD *)(BugCheckParameter3 + 248) = v5;
  return (unsigned int)v3;
}
