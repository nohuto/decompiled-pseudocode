void __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v2 = *(_QWORD *)(a1 + 1040);
    v3 = *(_QWORD *)(a1 + 1944);
    *(_BYTE *)(v2 + 4096) = 10;
    *(_QWORD *)(v2 + 4120) = v3;
    *(_BYTE *)(v2 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeBuildDevicePollingConfiguration;
    ProcessCommand(a1, a1 + 952);
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( !*(_BYTE *)(a1 + 4032) )
    {
      if ( !*(_DWORD *)(a1 + 72) )
        return;
      *(_BYTE *)(a1 + 4032) = 1;
    }
    v4 = *(_DWORD *)(a1 + 4052);
    if ( v4 )
    {
      if ( v4 > 0x64 )
        v4 = 100;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 72);
    }
    *(_DWORD *)(a1 + 4036) = v4;
    v5 = *(_DWORD *)(a1 + 4056);
    if ( !v5 )
      v5 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a1 + 4040) = v5;
    v6 = *(_DWORD *)(a1 + 4060);
    if ( (v6 & 1) != 0 )
      *(_DWORD *)(a1 + 4044) = v6;
    else
      *(_DWORD *)(a1 + 4044) ^= (*(_DWORD *)(a1 + 4044) ^ (*(_DWORD *)(a1 + 116) >> 1)) & 0xFE;
  }
}
