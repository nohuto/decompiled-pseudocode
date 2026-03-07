__int64 HalpPicDiscover()
{
  __int64 AcpiTable; // rax
  __int64 result; // rax
  int v2; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+2Ch] [rbp-DCh]
  __int64 v4; // [rsp+34h] [rbp-D4h]
  _QWORD v5[3]; // [rsp+3Ch] [rbp-CCh]
  int v6; // [rsp+54h] [rbp-B4h]
  _QWORD v7[32]; // [rsp+58h] [rbp-B0h] BYREF
  int v8; // [rsp+178h] [rbp+70h] BYREF

  AcpiTable = HalSocGetAcpiTable(1128878145LL);
  if ( AcpiTable && (*(_BYTE *)(AcpiTable + 40) & 1) == 0 )
    return 0LL;
  memset(v7, 0, sizeof(v7));
  v7[0] = 0x10000000001LL;
  v7[27] = &v8;
  v7[9] = HalpPicWriteEndOfInterrupt;
  v7[28] = 0x100000004LL;
  v7[11] = HalpPicSetLineState;
  v7[12] = xKdEnumerateDebuggingDevices;
  v7[29] = 45056LL;
  *(_QWORD *)((char *)&v7[30] + 4) = 0LL;
  v7[1] = 0LL;
  v7[2] = HalpPicInitializeIoUnit;
  v7[7] = 0LL;
  memset(&v7[3], 0, 24);
  v7[13] = 0LL;
  LODWORD(v7[30]) = 0;
  v8 = 45056;
  result = HalpInterruptRegisterController((__int64)v7);
  if ( (int)result >= 0 )
  {
    memset(v7, 0, sizeof(v7));
    v7[0] = 0x10000000001LL;
    v7[27] = &v8;
    v7[9] = HalpPicWriteEndOfInterrupt;
    v7[11] = HalpPicSetLineState;
    v7[12] = xKdEnumerateDebuggingDevices;
    v7[28] = 0x100000004LL;
    v7[29] = 45057LL;
    *(_QWORD *)((char *)&v7[30] + 4) = 0LL;
    v7[1] = 0LL;
    v7[2] = HalpPicInitializeIoUnit;
    v7[7] = 0LL;
    memset(&v7[3], 0, 24);
    v7[13] = 0LL;
    LODWORD(v7[30]) = 0;
    v8 = 45057;
    result = HalpInterruptRegisterController((__int64)v7);
    if ( (int)result >= 0 )
    {
      v3 = 0x200000001LL;
      v4 = 6LL;
      v6 = 0;
      v5[0] = -1LL;
      *(_OWORD *)&v5[1] = 0LL;
      v2 = 45056;
      result = HalpInterruptRegisterLine(&v2);
      if ( (int)result >= 0 )
      {
        LODWORD(v4) = 2;
        v3 = 0x800000000LL;
        HIDWORD(v5[0]) = -1;
        v2 = 45056;
        result = HalpInterruptRegisterLine(&v2);
        if ( (int)result >= 0 )
        {
          v4 = 6LL;
          v6 = 0;
          *(_OWORD *)&v5[1] = 0LL;
          v5[0] = -4294922240LL;
          v3 = 0x300000002LL;
          v2 = 45057;
          result = HalpInterruptRegisterLine(&v2);
          if ( (int)result >= 0 )
          {
            LODWORD(v4) = 2;
            v3 = 0x800000000LL;
            HIDWORD(v5[0]) = -1;
            v2 = 45057;
            return HalpInterruptRegisterLine(&v2);
          }
        }
      }
    }
  }
  return result;
}
