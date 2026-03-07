__int64 __fastcall PfSnVolumeCheckIsSdBus(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  int InputBuffer; // [rsp+60h] [rbp-48h] BYREF
  __int64 v9; // [rsp+64h] [rbp-44h]
  __int128 OutputBuffer; // [rsp+70h] [rbp-38h] BYREF
  __int128 v11; // [rsp+80h] [rbp-28h]

  OutputBuffer = 0LL;
  v4 = 0;
  v9 = 0LL;
  v11 = 0LL;
  InputBuffer = 1;
  IoStatusBlock = 0LL;
  ZwResetEvent((__int64)a2, 0LL);
  Status = ZwDeviceIoControlFile(*a1, a2, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, &OutputBuffer, 0x20u);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(a2, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    LOBYTE(v4) = BYTE8(v11) == 12;
  return v4;
}
