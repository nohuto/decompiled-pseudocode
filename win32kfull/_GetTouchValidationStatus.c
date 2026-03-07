__int64 __fastcall GetTouchValidationStatus(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rax
  CInpPushLock *Lock; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DEVICEINFO *DeviceList; // rdx
  __int64 v9; // rax

  v1 = 3;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v2 = *(_QWORD *)(a1 + 456);
      if ( *(_WORD *)(v2 + 42) == 13 && (unsigned __int16)(*(_WORD *)(v2 + 40) - 4) <= 1u )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 360LL);
        if ( (v3 & 8) == 0 )
          return 2 - (unsigned int)((v3 & 0x100) != 0);
      }
    }
    return v1;
  }
  v4 = SGDGetUserSessionState(0LL);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v4 + 16840));
  CInpPushLock::LockShared(Lock);
  v7 = SGDGetUserSessionState(v6);
  DeviceList = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v7 + 16840));
  if ( !DeviceList )
    goto LABEL_17;
  while ( 1 )
  {
    if ( *((_BYTE *)DeviceList + 48) != 2 )
      goto LABEL_14;
    if ( (*((_DWORD *)DeviceList + 46) & 0x2000) != 0 )
      goto LABEL_14;
    v9 = *((_QWORD *)DeviceList + 57);
    if ( *(_WORD *)(v9 + 42) != 13 || *(_WORD *)(v9 + 40) != 4 )
      goto LABEL_14;
    if ( (*(_DWORD *)(*((_QWORD *)DeviceList + 59) + 360LL) & 0x100) != 0 )
      break;
    v1 = 2;
LABEL_14:
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    if ( !DeviceList )
      goto LABEL_17;
  }
  v1 = 1;
LABEL_17:
  CInpPushLock::UnLockShared(Lock);
  return v1;
}
