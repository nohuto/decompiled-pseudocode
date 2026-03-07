__int64 __fastcall HvlGetDeviceCapabilities(_WORD *a1, _OWORD *a2)
{
  PHYSICAL_ADDRESS *v4; // rbx
  PHYSICAL_ADDRESS *v5; // r14
  unsigned __int16 v6; // bx
  __int128 v8; // [rsp+28h] [rbp-59h] BYREF
  __int64 v9; // [rsp+38h] [rbp-49h]
  __int64 v10; // [rsp+40h] [rbp-41h]
  __int128 v11; // [rsp+48h] [rbp-39h] BYREF
  __int64 v12; // [rsp+58h] [rbp-29h]
  __int64 v13; // [rsp+60h] [rbp-21h]
  _BYTE v14[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v15[48]; // [rsp+88h] [rbp+7h] BYREF

  v12 = 0LL;
  LODWORD(v13) = 0;
  v9 = 0LL;
  *a2 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0LL;
  v8 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v11, 1, (__int64)v15, 24LL);
  v5 = HvlpAcquireHypercallPage((__int64)&v8, 2, (__int64)v14, 16LL);
  v4[1].QuadPart = 0LL;
  v4[2].QuadPart = 0LL;
  v4->QuadPart = 0x4000000000000000LL;
  HIWORD(v4->u.LowPart) = a1[4];
  LOWORD(v4->LowPart) = a1[6];
  HIWORD(v4->QuadPart) ^= (HIWORD(v4->QuadPart) ^ a1[5]) & 3;
  v6 = HvcallInitiateHypercall(170);
  if ( !v6 )
    *a2 = *(_OWORD *)&v5->LowPart;
  HvlpReleaseHypercallPage((__int64)&v8);
  HvlpReleaseHypercallPage((__int64)&v11);
  return HvlpHvToNtStatus(v6);
}
