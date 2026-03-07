__int64 __fastcall WheapTranslateAddressInPlugin(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // xmm1_8
  int v5; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-50h]
  __int64 v8; // [rsp+38h] [rbp-48h]
  _OWORD v9[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h]

  v8 = 0LL;
  v6[0] = 1;
  v10 = 0LL;
  v5 = 56;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = *a1;
  v6[1] = 24;
  memset(v9, 0, sizeof(v9));
  result = ((__int64 (__fastcall *)(__int64, _DWORD *, int *, _OWORD *))PshedDoPluginCtl)(24LL, v6, &v5, v9);
  if ( (int)result >= 0 )
  {
    v4 = *((_QWORD *)&v9[2] + 1);
    *(_OWORD *)a2 = *(_OWORD *)((char *)&v9[1] + 8);
    *(_QWORD *)(a2 + 16) = v4;
  }
  return result;
}
