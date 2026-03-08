/*
 * XREFs of IpmiLibpKcsSendRequestToBMC @ 0x140675EF8
 * Callers:
 *     IpmiLibpKcsBmcTransact @ 0x140675A94 (IpmiLibpKcsBmcTransact.c)
 * Callees:
 *     IpmiLibReadOneByte @ 0x14067568C (IpmiLibReadOneByte.c)
 *     IpmiLibWriteOneByte @ 0x1406756CC (IpmiLibWriteOneByte.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406760E0 (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpHandleSendInterrupt @ 0x140676360 (IpmiLibpHandleSendInterrupt.c)
 */

__int64 __fastcall IpmiLibpKcsSendRequestToBMC(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned __int16 v7; // si
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int8 OneByte; // al
  __int64 v11; // rcx
  signed __int8 v12; // al
  signed __int8 v13; // al
  __int64 v14; // rcx
  unsigned int v15; // r9d

  dword_140C2C7F4 = 7;
  v7 = 0;
  if ( (unsigned int)IpmiLibpKcsSpinRegister(a1, a4, 2LL) )
    goto LABEL_22;
  IpmiLibReadOneByte(v8, 0);
  dword_140C2C7F4 = 0;
  IpmiLibWriteOneByte(v9, 1u, 0x61u);
  if ( (dword_140C2C7C0 & 1) != 0 )
  {
    if ( (unsigned int)IpmiLibpHandleSendInterrupt(v8, a4) )
      goto LABEL_22;
  }
  if ( (unsigned int)IpmiLibpKcsSpinRegister(v8, a4, 2LL) )
    goto LABEL_22;
  OneByte = IpmiLibReadOneByte(v8, 1u);
  if ( OneByte >= 0 || (OneByte & 0x40) != 0 )
    goto LABEL_22;
  IpmiLibReadOneByte(v8, 0);
  dword_140C2C7F4 = 1;
  while ( a3 > 1u )
  {
    IpmiLibWriteOneByte(v11, 0, *(_BYTE *)(v7 + a2));
    if ( (dword_140C2C7C0 & 1) != 0 && (unsigned int)IpmiLibpHandleSendInterrupt(v8, a4) )
      goto LABEL_22;
    if ( (unsigned int)IpmiLibpKcsSpinRegister(v8, a4, 2LL) )
      goto LABEL_22;
    v12 = IpmiLibReadOneByte(v8, 1u);
    if ( v12 >= 0 || (v12 & 0x40) != 0 )
      goto LABEL_22;
    IpmiLibReadOneByte(v8, 0);
    ++v7;
    --a3;
  }
  if ( (IpmiLibWriteOneByte(v11, 1u, 0x62u), dword_140C2C7F4 = 2, (dword_140C2C7C0 & 1) != 0)
    && (unsigned int)IpmiLibpHandleSendInterrupt(v8, a4)
    || (unsigned int)IpmiLibpKcsSpinRegister(v8, a4, 2LL)
    || (v13 = IpmiLibReadOneByte(v8, 1u), v13 >= 0)
    || (v13 & 0x40) != 0 )
  {
LABEL_22:
    IpmiLibWriteOneByte(v8, 1u, 0x60u);
  }
  else
  {
    IpmiLibReadOneByte(v8, 0);
    IpmiLibWriteOneByte(v14, 0, *(_BYTE *)(v7 + a2));
    dword_140C2C7F4 = 3;
    return 0;
  }
  return v15;
}
