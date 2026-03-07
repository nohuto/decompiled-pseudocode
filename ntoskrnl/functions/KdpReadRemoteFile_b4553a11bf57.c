__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  char v11; // r12
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v14[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-61h]
  __int128 v16; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v17[8]; // [rsp+60h] [rbp-41h] BYREF

  v5 = (unsigned int)(a1 - 1);
  memset(v17, 0, sizeof(v17));
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v11 = KdEnterDebugger(0LL);
  if ( KdpRemoteFiles[v5] )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v12 = KdpRemoteFiles[v5];
        v14[1] = 0;
        v13 = 0;
        v17[1] = v12;
        v16 = 0LL;
        v17[0] = 13361LL;
        v17[2] = a2;
        LODWORD(v17[3]) = a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64
                        ? a4
                        : KdTransportMaxPacketSize - 64;
        v14[0] = 4194368;
        v15 = v17;
        KdSendPacket(11LL, v14, 0LL, &KdpContext);
        if ( (_BYTE)KdDebuggerNotPresent )
          break;
        WORD1(v16) = v17[3];
        *((_QWORD *)&v16 + 1) = a3;
        if ( !(unsigned int)KdReceivePacket(11LL, v14, &v16, &v13, &KdpContext) )
        {
          if ( v17[0] < 0 )
            goto LABEL_16;
          v9 += v13;
          a3 += v13;
          a2 += v13;
          a4 -= v13;
        }
        if ( !a4 )
          goto LABEL_16;
      }
      HIDWORD(v17[0]) = -1073740972;
    }
LABEL_16:
    *a5 = v9;
  }
  else
  {
    HIDWORD(v17[0]) = -1073741811;
  }
  KdExitDebugger(v11);
  return HIDWORD(v17[0]);
}
