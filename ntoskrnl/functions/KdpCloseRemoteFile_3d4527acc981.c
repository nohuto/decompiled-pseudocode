__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  char v3; // di
  __int64 v4; // rax
  int v5; // eax
  int v6; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp-29h]
  __int128 v9; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v10[8]; // [rsp+68h] [rbp-9h] BYREF

  v1 = (unsigned int)(a1 - 1);
  memset(v10, 0, sizeof(v10));
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v3 = KdEnterDebugger(0LL);
  if ( KdpRemoteFiles[v1] )
  {
    for ( v10[1] = KdpRemoteFiles[v1]; ; v10[1] = v4 )
    {
      v7[1] = 0;
      v6 = 0;
      LODWORD(v10[0]) = 13363;
      v7[0] = 4194368;
      v8 = v10;
      v9 = 0LL;
      KdSendPacket(11LL, v7, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v5 = -1073740972;
        HIDWORD(v10[0]) = -1073740972;
        goto LABEL_10;
      }
      WORD1(v9) = 12288;
      *((_QWORD *)&v9 + 1) = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, v7, &v9, &v6, &KdpContext) )
        break;
      v4 = KdpRemoteFiles[v1];
      HIDWORD(v10[0]) = 0;
    }
    v5 = HIDWORD(v10[0]);
LABEL_10:
    if ( v5 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    HIDWORD(v10[0]) = -1073741811;
  }
  KdExitDebugger(v3);
  return HIDWORD(v10[0]);
}
