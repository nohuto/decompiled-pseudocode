void __fastcall EtwTraceDisplayReqChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  char v5; // bl
  _DWORD *v6; // rax
  int v7; // ecx
  int v8; // r8d

  v4 = a1;
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x2000000000008000LL) != 0
    && (qword_1C02C4058 & 0x2000000000008000LL) == qword_1C02C4058 )
  {
    v5 = gProtocolType == 0;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v6 = (_DWORD *)SGDGetUserSessionState(a1, 0x2000000000008000LL, a3, a4);
      McTemplateK0qhq_EtwWriteTransfer(v7, (unsigned int)&DisplayReqChangeEvent, v8, *v6, v5, v4);
    }
  }
}
