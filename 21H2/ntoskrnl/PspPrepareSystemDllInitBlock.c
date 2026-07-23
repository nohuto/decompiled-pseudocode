/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1406A1478
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     MmGetCfgBitMapInformation @ 0x1406A169C (MmGetCfgBitMapInformation.c)
 *     PspWow64GetSharedInformation @ 0x1406A16E4 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1406A16FC (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 CfgBitMapInformation; // r15
  __int64 v5; // r12
  _KPROCESS *Process; // r9
  unsigned __int64 v7; // rax
  unsigned int ProcessNtdllType; // edx
  __int64 v9; // r8
  int v10; // edx
  unsigned __int8 i; // dl
  int v13; // ecx
  __int64 SharedInformation; // rax
  __int16 v15; // ax
  __int128 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0LL;
  CfgBitMapInformation = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_3;
      SharedInformation = PspWow64GetSharedInformation(2LL);
    }
    else
    {
      SharedInformation = PspWow64GetSharedInformation(1LL);
    }
    v3 = *(_QWORD *)(SharedInformation + 56);
    CfgBitMapInformation = MmGetCfgBitMapInformation(1LL, &v20);
    goto LABEL_3;
  }
  v3 = PspSystemDllInitBlock;
  CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v20);
  v7 = Process[1].AffinityPadding[10];
  if ( v7 )
  {
    v15 = *(_WORD *)(v7 + 8);
    if ( v15 == 332 || v15 == 452 )
      v5 = MmGetCfgBitMapInformation(1LL, &v21);
  }
LABEL_3:
  if ( a2 )
  {
    v16 = *(_OWORD *)(a2 + 360);
    v17 = *(_QWORD *)(a2 + 376);
    v18 = *(_OWORD *)(a2 + 488);
    v19 = *(_QWORD *)(a2 + 504);
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
  }
  if ( *(_DWORD *)v3 != 240 )
    return 3221225561LL;
  *(_QWORD *)(v3 + 16) = *((_QWORD *)PspSystemDlls + 8);
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  if ( !ProcessNtdllType )
    ProcessNtdllType = 1;
  v9 = PspWow64GetSharedInformation(ProcessNtdllType);
  *(_QWORD *)(v3 + 8) = *((_QWORD *)*(&PspSystemDlls + v10) + 8);
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v3 + 8LL * i + 24) = *(_QWORD *)(v9 + 8LL * i);
  *(_DWORD *)(v3 + 152) = ExGenRandom(1);
  *(_DWORD *)(v3 + 156) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v3 + 156) |= 1u;
  }
  *(_OWORD *)(v3 + 160) = v16;
  *(_QWORD *)(v3 + 176) = v17;
  *(_OWORD *)(v3 + 216) = v18;
  *(_QWORD *)(v3 + 232) = v19;
  *(_QWORD *)(v3 + 184) = CfgBitMapInformation;
  *(_QWORD *)(v3 + 192) = v20;
  *(_QWORD *)(v3 + 200) = v5;
  *(_QWORD *)(v3 + 208) = v21;
  return 0LL;
}
