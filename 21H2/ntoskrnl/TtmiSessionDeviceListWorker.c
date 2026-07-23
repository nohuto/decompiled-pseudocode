/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x1408FC504
 * Callers:
 *     TtmpSessionWorker @ 0x140900190 (TtmpSessionWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     TtmpCallAssignedToTerminal @ 0x1408FC7D0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408FCCD0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPublishDeviceEvent @ 0x1408FD0D0 (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x1408FD2B0 (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x1408FD47C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408FD568 (TtmpStopCallout.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmiSessionDeviceListWorker(__int64 a1)
{
  void **v1; // r14
  void **i; // rbx
  int v4; // ecx
  void **v5; // r15
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  void (__fastcall *v9)(void *); // rsi
  _QWORD *v10; // rdx
  void **v11; // rax
  _OWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

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
    v4 = *((_DWORD *)i + 150);
    if ( (v4 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
      v4 = *((_DWORD *)i + 150);
    }
LABEL_14:
    if ( (v4 & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFBF;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v8 = *((_DWORD *)i + 150);
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 2) != 0 )
      {
        *((_DWORD *)i + 150) = v8 | 8;
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      }
      v9 = (void (__fastcall *)(void *))i[5];
      if ( v9 )
      {
        v14 = 0LL;
        memset(v13, 0, sizeof(v13));
        TtmpStartCallout((unsigned int)v13, a1, (_DWORD)i, 2, (__int64)v9, 0);
        v9(i[3]);
        TtmpStopCallout(v13, 0LL);
      }
      v10 = *i;
      v11 = (void **)i[1];
      i = v11;
      if ( *((void ***)*v5 + 1) != v5 || *v11 != v5 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      --*(_DWORD *)(a1 + 116);
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 0LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 1LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 2LL);
  return TtmpCommitTerminalDisplayStateUpdateWorker(a1, 3LL);
}
