char TryUpdatePTPConfigFromRegistry()
{
  _UNKNOWN **v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  wchar_t **v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _DWORD *v12; // r14
  unsigned int v13; // eax
  int v14; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v0 = &retaddr;
  if ( !gTouchPadMonitor )
  {
    LODWORD(v0) = GetDWORDSettingValuesEx(0LL, off_1C02C4018, 14LL, 1LL);
    if ( (_DWORD)v0 )
    {
      v5 = off_1C02C4018;
      v6 = SGDGetUserSessionState(v2, v1, v3, v4);
      v11 = v6 + 16800;
      v12 = (_DWORD *)(v6 + 16812);
      if ( *((_DWORD *)v5 + 7) )
        *v12 |= 4u;
      if ( *((_DWORD *)v5 + 11) )
        *v12 |= 8u;
      v13 = *((_DWORD *)v5 + 3);
      if ( v13 <= 4 )
        *(_DWORD *)(v11 + 8) = v13;
      v14 = *((_DWORD *)v5 + 31);
      SGDGetUserSessionState(v8, v7, v9, v10);
      LOBYTE(v0) = v14 - 1;
      if ( (unsigned int)(v14 - 1) <= 0x13 )
      {
        LODWORD(v0) = *((_DWORD *)v5 + 31);
        *(_DWORD *)(v11 + 16) = (_DWORD)v0;
      }
      if ( *((_DWORD *)v5 + 51) <= 0x64u )
      {
        LOBYTE(v0) = *((_BYTE *)v5 + 204);
        *(_BYTE *)(v11 + 21) = (_BYTE)v0;
      }
      if ( *((_DWORD *)v5 + 47) )
        *(_DWORD *)(v11 + 20) |= 0x40u;
      if ( !*((_DWORD *)v5 + 35) )
        *(_DWORD *)(v11 + 20) &= ~1u;
      if ( !*((_DWORD *)v5 + 39) )
        *(_DWORD *)(v11 + 20) &= ~2u;
      if ( !*((_DWORD *)v5 + 43) )
        *(_DWORD *)(v11 + 20) &= ~4u;
      if ( !*((_DWORD *)v5 + 23) )
        *v12 &= ~0x200u;
      if ( !*((_DWORD *)v5 + 27) )
        *v12 &= ~0x400u;
      if ( !*((_DWORD *)v5 + 15) )
        *v12 &= ~0x80u;
      if ( !*((_DWORD *)v5 + 19) )
        *v12 &= ~0x100u;
      if ( !*((_DWORD *)v5 + 55) )
        *(_DWORD *)(v11 + 20) &= ~0x10000u;
      *(_DWORD *)v11 = 0;
      gTouchPadMonitor = 1;
    }
  }
  return (char)v0;
}
