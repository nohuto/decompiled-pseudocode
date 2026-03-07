bool __fastcall IsStartedIndirectDisplayDevice(__int64 a1)
{
  bool v3; // bl
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 436) & 0x100) == 0 )
    return 0;
  v5 = a1;
  v6 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  v3 = *(_DWORD *)(a1 + 200) == 1;
  if ( v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  return v3;
}
