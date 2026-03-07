void __fastcall AcpiDiagTraceAmliWatchdogTimeout(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  _DWORD v11[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C006DCE0 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C006DCE0, a2, *a1, MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 - *(_QWORD *)(v2 + 456);
      v8 = v11;
      v10 = *(_QWORD *)(v2 + 448);
      v11[0] = *(unsigned __int16 *)(v2 + 440);
      v9 = 2LL;
      v12 = &v5;
      v6 = AmliWatchdogTimeout;
      v14 = &v6;
      v5 = v4 / 0x2710;
      v11[1] = 0;
      v13 = 4LL;
      v15 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C006DCE0, (int)&dword_1C00629A1, v2, v4, 6u, &v7);
    }
  }
}
