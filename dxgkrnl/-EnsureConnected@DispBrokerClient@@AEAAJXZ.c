/*
 * XREFs of ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01D5780
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01D565C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x1C00021A8 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00154F0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01D5A20 (_lambda_8317567312832b51b45aaef017a7684b_--operator().c)
 */

__int64 __fastcall DispBrokerClient::EnsureConnected(DispBrokerClient *this)
{
  unsigned __int64 v2; // rax
  NTSTATUS v3; // eax
  wchar_t *v4; // r8
  NTSTATUS v5; // eax
  int v6; // eax
  __int64 v7; // rax
  HANDLE v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  const wchar_t *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp-88h] BYREF
  __int64 v18; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v20[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-48h]
  __int128 v22; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v23; // [rsp+E8h] [rbp-20h]
  unsigned __int64 *v24; // [rsp+F0h] [rbp-18h]
  _BYTE v25[48]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v26[10]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int16 v27[56]; // [rsp+178h] [rbp+70h] BYREF
  WCHAR SourceString[56]; // [rsp+1E8h] [rbp+E0h] BYREF

  LODWORD(v14) = 0;
  v2 = KeQueryInterruptTimePrecise(&v17);
  v15 = 0LL;
  *(_QWORD *)&v22 = this;
  *((_QWORD *)&v22 + 1) = &v15;
  v23 = &v14;
  v17 = v2 / 0xA;
  v24 = &v17;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v25, &v22);
  memset(v27, 0, 0x6CuLL);
  memset(SourceString, 0, 0x6CuLL);
  if ( **(_DWORD **)this )
  {
    v3 = RtlStringCchPrintfW(v27, 0x36uLL, (size_t *)L"\\Sessions\\%d");
    LODWORD(v14) = v3;
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(2LL, v3, 0LL);
      v12 = L"Failed to build the session directory path (Status = 0x%I64x).";
LABEL_19:
      v13 = 0LL;
LABEL_23:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, (int)v14, v13, 0LL, 0LL, 0LL);
LABEL_13:
      v10 = v14;
      goto LABEL_14;
    }
  }
  v4 = L"%s\\BaseNamedObjects\\DispBrokerPort";
  if ( !*((_BYTE *)this + 9) )
    v4 = (wchar_t *)L"%s\\Windows\\DispBrokerPort";
  v5 = RtlStringCchPrintfW(SourceString, 0x36uLL, (size_t *)v4, v27);
  LODWORD(v14) = v5;
  if ( v5 < 0 )
  {
    v13 = 1LL;
    WdLogSingleEntry2(2LL, v5, 1LL);
    v12 = L"Failed to build the display broker ALPC port object path (Status = 0x%I64x).";
    goto LABEL_23;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v20[0] = 48LL;
  v20[3] = 512LL;
  v20[1] = 0LL;
  v20[2] = 0LL;
  v21 = 0LL;
  memset(v26, 0, 0x48uLL);
  v26[2] = 65280LL;
  LODWORD(v26[0]) = 0x100000;
  v18 = -150000000LL;
  Handle = 0LL;
  v6 = ZwAlpcConnectPort(&Handle, &DestinationString, v20, v26, 1179648, 0LL, 0LL, 0LL, 0LL, 0LL, &v18);
  LODWORD(v14) = v6;
  if ( v6 == 258 )
  {
    LODWORD(v14) = -1073741505;
    WdLogSingleEntry1(2LL, -1073741505LL);
    v12 = L"Timeout to connect display broker ALPC port, returning 0x%I64x.";
    goto LABEL_19;
  }
  if ( v6 == 192 )
  {
    LODWORD(v14) = -1073741749;
    v13 = 3LL;
    WdLogSingleEntry2(2LL, -1073741749LL, 3LL);
    v12 = L"Failed to connect the display broker ALPC port as current thread is being terminating, returning 0x%I64x.";
    goto LABEL_23;
  }
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, 2LL);
    v12 = L"Failed to connect the display broker ALPC port (Status = 0x%I64x).";
    v13 = 2LL;
    goto LABEL_23;
  }
  v7 = operator new[](0x10uLL, 0x4B677844u, 256LL);
  v8 = Handle;
  v9 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(1LL, 34LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PortHandle != nullptr", 34LL, 0LL, 0LL, 0LL, 0LL);
    }
    v15 = v9;
    goto LABEL_13;
  }
  v15 = 0LL;
  ZwClose(Handle);
  WdLogSingleEntry1(6LL, 281LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DispBrokerClientHandle for a new ALPC port.",
    281LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v10 = -1073741801;
LABEL_14:
  if ( v25[32] )
    lambda_8317567312832b51b45aaef017a7684b_::operator()(v25);
  return v10;
}
