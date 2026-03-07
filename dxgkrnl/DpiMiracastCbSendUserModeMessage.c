__int64 __fastcall DpiMiracastCbSendUserModeMessage(
        int *P,
        size_t Size,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // edi
  int v9; // r15d
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edi
  size_t Sizea; // [rsp+20h] [rbp-58h]
  int Sizec; // [rsp+20h] [rbp-58h]
  size_t Sizeb; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v8 = a3;
  v9 = Size;
  if ( P && P[4] == 1953656900 && P[5] == 14 && *((_QWORD *)P + 54) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      v23 = 0;
      Sizec = Size;
      McTemplateK0xqqppq_EtwWriteTransfer(
        (__int64)P,
        &EventEnterDxgkCbSendUserModeMessage,
        a3,
        *((_QWORD *)P + 12),
        Sizec,
        a4,
        a6,
        a7,
        v23);
    }
    DpiMiracastAddRefMiracastDeviceContext((__int64)P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    LODWORD(Sizea) = v9;
    v13 = DpiMiracastSendAsyncUserModeRequest(v12, v11, 2295820, v8, Sizea, a5, a4, a6, a7, 0LL, 0LL);
    v16 = v13;
    if ( v13 < 0 )
      WdLogSingleEntry1(2LL, v13);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v24) = v16;
      LODWORD(v22) = a4;
      LODWORD(Sizeb) = v9;
      McTemplateK0xqqppq_EtwWriteTransfer(
        v14,
        &EventLeaveDxgkCbSendUserModeMessage,
        v15,
        *((_QWORD *)P + 12),
        Sizeb,
        v22,
        a6,
        a7,
        v24);
    }
    DpiMiracastReleaseMiracastDeviceContext(P, (unsigned int)DpiMiracastCbSendUserModeMessage);
  }
  else
  {
    v16 = -1073741585;
    WdLogSingleEntry2(2LL, P, -1073741585LL);
  }
  return v16;
}
