__int64 __fastcall TtmiSessionDeviceListWorker(__int64 a1)
{
  void **v1; // r14
  void **i; // rbx
  int v4; // ecx
  void **v5; // r15
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  void (__fastcall *v10)(void *); // rsi
  _QWORD *v11; // rdx
  void **v12; // rax
  _OWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v1 = (void **)(a1 + 96);
  for ( i = *(void ***)(a1 + 96); i != v1; i = (void **)*i )
  {
    v4 = *((_DWORD *)i + 150);
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_14;
    if ( (v4 & 1) != 0 )
    {
      v6 = v4 & 0xFFFFFFFC | 2;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        v6 |= 0x40u;
      }
      v7 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_12;
      v6 = v4 & 0xFFFFFFEF;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        v6 |= 0x40u;
      }
      v7 = 4LL;
    }
    *((_DWORD *)i + 150) = v6 | 0x20;
    TtmpPublishDeviceEvent(a1, 0LL, i, v7);
LABEL_12:
    v8 = *((_DWORD *)i + 150);
    if ( (v8 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v8 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
    }
LABEL_14:
    if ( ((_DWORD)i[75] & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) &= ~0x40u;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v9 = *((_DWORD *)i + 150);
    if ( (v9 & 4) != 0 )
    {
      if ( (v9 & 2) != 0 )
      {
        *((_DWORD *)i + 150) = v9 | 8;
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      }
      v10 = (void (__fastcall *)(void *))i[5];
      if ( v10 )
      {
        v15 = 0LL;
        memset(v14, 0, sizeof(v14));
        TtmpStartCallout((unsigned int)v14, a1, (_DWORD)i, 2, (__int64)v10, 0);
        v10(i[3]);
        TtmpStopCallout(v14, 0LL);
      }
      v11 = *i;
      v12 = (void **)i[1];
      i = v12;
      if ( *((void ***)*v5 + 1) != v5 || *v12 != v5 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      --*(_DWORD *)(a1 + 116);
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 0LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 1LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 2LL);
  return TtmpCommitTerminalDisplayStateUpdateWorker(a1, 3LL);
}
