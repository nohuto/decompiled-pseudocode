/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x140774E0C
 * Callers:
 *     NtSecureConnectPort @ 0x140774850 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x140716C08 (AlpcpReadMessageData.c)
 *     AlpcpQueryRemoteView @ 0x140774F54 (AlpcpQueryRemoteView.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407CFC50 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140975F5C (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        char *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char *v8; // r15
  __int64 v9; // rsi
  int v10; // eax
  int RemoteView; // edi
  __int64 v12; // rcx
  __int16 v13; // si
  _WORD *v14; // r14
  unsigned int v15; // eax
  __int64 v17[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  v8 = a2;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  v17[0] = 0LL;
  v9 = *a1;
  v10 = AlpcpReceiveSynchronousReply((_DWORD)a1, (_DWORD)a2, (unsigned int)v17, 0, 0LL);
  RemoteView = v10;
  if ( !v10 )
  {
    if ( a4 )
    {
      LODWORD(v19) = 0;
      RemoteView = AlpcpQueryRemoteView(v9, a4, v18);
      if ( RemoteView < 0 )
      {
LABEL_16:
        AlpcpUnlockMessage(v17[0]);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v19;
    }
    if ( a6 )
    {
      v12 = *(_QWORD *)(v17[0] + 144);
      if ( v12 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 40LL);
      }
    }
    if ( v8 )
    {
      v13 = 0;
      v14 = (_WORD *)(v17[0] + 240);
      v17[1] = v17[0] + 240;
      v15 = *(unsigned __int16 *)(v17[0] + 240);
      if ( *(_DWORD *)a3 < v15 )
      {
        v13 = *(_WORD *)(v17[0] + 240);
        *v14 = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v15;
      }
      if ( *(_QWORD *)(v17[0] + 176) )
        AlpcpGetDataFromUserVaSafe(v17[0], v8);
      else
        AlpcpReadMessageData(v17[0], v8);
      if ( v13 )
        *v14 = v13;
    }
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v9 + 416) & 0x10) != 0 || v10 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
