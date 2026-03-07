char __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(__int64 *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _DWORD v7[2]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v8; // [rsp+68h] [rbp-10h]

  v7[0] = a2;
  v7[1] = 0;
  v8 = *a1;
  v2 = DxgkStatusChangeNotify(v7);
  if ( v2 < 0 )
  {
    LOBYTE(v2) = WdLogSingleEntry1(1LL, 1553LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v2) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v2) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       v4,
                       v3,
                       v5,
                       0,
                       2,
                       -1,
                       (__int64)L"NT_SUCCESS(_Status)",
                       17,
                       0,
                       0,
                       0,
                       0);
    }
  }
  return v2;
}
