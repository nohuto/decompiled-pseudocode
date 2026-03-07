__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 CfgBitMapInformation; // r15
  __int64 v6; // r12
  _KPROCESS *Process; // r9
  __int64 v8; // r8
  int ProcessNtdllType; // edx
  _QWORD *v10; // r8
  unsigned __int8 i; // dl
  __int16 v13; // ax
  __int128 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0LL;
  CfgBitMapInformation = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v4 = qword_140D557E8;
      CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v19, a3, Process);
    }
  }
  else
  {
    v4 = PsNtdllExports;
    CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v19, a3, Process);
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v13 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v13 == 332 || v13 == 452 )
        v6 = MmGetCfgBitMapInformation(1LL, &v20, v8, Process);
    }
  }
  if ( a2 )
  {
    v15 = *(_OWORD *)(a2 + 336);
    v16 = *(_QWORD *)(a2 + 352);
    v17 = *(_OWORD *)(a2 + 464);
    v18 = *(_QWORD *)(a2 + 480);
  }
  else
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( *(_DWORD *)v4 != 240 )
    return 3221225561LL;
  *(_QWORD *)(v4 + 16) = PspSystemDlls[0][7];
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  if ( !ProcessNtdllType )
    ProcessNtdllType = 1;
  v10 = 0LL;
  if ( ProcessNtdllType == 1 )
    v10 = &PsWowX86SharedInformation;
  *(_QWORD *)(v4 + 8) = PspSystemDlls[ProcessNtdllType][7];
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v4 + 8LL * i + 24) = v10[i];
  *(_DWORD *)(v4 + 152) = ExGenRandom(1);
  *(_DWORD *)(v4 + 156) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v4 + 156) |= 1u;
  }
  *(_OWORD *)(v4 + 160) = v15;
  *(_QWORD *)(v4 + 176) = v16;
  *(_OWORD *)(v4 + 216) = v17;
  *(_QWORD *)(v4 + 232) = v18;
  *(_QWORD *)(v4 + 184) = CfgBitMapInformation;
  *(_QWORD *)(v4 + 192) = v19;
  *(_QWORD *)(v4 + 200) = v6;
  *(_QWORD *)(v4 + 208) = v20;
  return 0LL;
}
