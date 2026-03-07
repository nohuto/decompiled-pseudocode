__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 Id; // rax
  int v9; // edx
  __int64 Pool2; // rax
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !v6 )
  {
    Id = UsbhMakeId(0, (int)L"USB\\UNKNOWN", 0, (int)&v11, 2, 0, 0, 0LL);
    if ( Id )
    {
      *(_QWORD *)(a3 + 8) = Id;
      *(_DWORD *)(a3 + 4) = v11;
      return 0LL;
    }
    return 3221225626LL;
  }
  v9 = PdoExt(a2)[355];
  if ( (v9 & 0x40) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 68LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)"U";
      *(_OWORD *)(Pool2 + 16) = xmmword_1C00635B0;
      *(_OWORD *)(Pool2 + 32) = xmmword_1C00635C0;
      *(_OWORD *)(Pool2 + 48) = xmmword_1C00635D0;
      *(_DWORD *)(Pool2 + 64) = 0;
      *(_QWORD *)(a3 + 8) = Pool2;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v9 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(a1, a2, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
