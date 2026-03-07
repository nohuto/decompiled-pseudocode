__int64 __fastcall HalpKdSetupDebuggingDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // edi
  _QWORD *Device; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 18) )
    return 0LL;
  v5 = *(_OWORD *)(a2 + 168);
  v6 = *(_OWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 19) || (result = HalpKdEnumerateDebuggingDevices(0LL, a2), (int)result >= 0) )
  {
    if ( *(_QWORD *)(a2 + 184)
      || (*(_OWORD *)(a2 + 168) = v5,
          *(_OWORD *)(a2 + 184) = v6,
          result = HalpAllocateScratchMemory(a1, a2),
          (int)result >= 0) )
    {
      *(_BYTE *)(a2 + 18) = 1;
      v7 = HalpRegisterDeviceInUse(a2);
      if ( v7 < 0 )
      {
        if ( *(_DWORD *)(a2 + 220) != 3 )
        {
          Device = (_QWORD *)HalpFindDevice(a2);
          if ( Device )
          {
            v9 = *Device;
            if ( *(_QWORD **)(*Device + 8LL) != Device || (v10 = (_QWORD *)Device[1], (_QWORD *)*v10 != Device) )
              __fastfail(3u);
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
            --DevicesList;
          }
        }
        *(_BYTE *)(a2 + 18) = 0;
      }
      return (unsigned int)v7;
    }
  }
  return result;
}
