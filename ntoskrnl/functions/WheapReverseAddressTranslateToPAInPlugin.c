__int64 __fastcall WheapReverseAddressTranslateToPAInPlugin(__int64 a1, _QWORD *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-39h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v9; // [rsp+58h] [rbp-1h]
  _OWORD v10[4]; // [rsp+60h] [rbp+7h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = *(_OWORD *)(a1 + 24);
  *(_QWORD *)&v10[0] = 0x4000000003LL;
  v9 = 0LL;
  memset(v8, 0, sizeof(v8));
  v7 = 56;
  v5 = *(_OWORD *)(a1 + 8);
  v10[3] = v4;
  v10[2] = v5;
  result = ((__int64 (__fastcall *)(__int64, _OWORD *, int *, _OWORD *))PshedDoPluginCtl)(64LL, v10, &v7, v8);
  if ( (int)result >= 0 )
    *a2 = *(_QWORD *)&v8[0];
  return result;
}
