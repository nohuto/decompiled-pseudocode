char __fastcall PopPotsLogPowerTransitionReliability(int a1, int a2, int a3)
{
  unsigned __int16 *v3; // rdi
  unsigned __int16 *v4; // rsi
  int v5; // r14d
  char result; // al
  int v9; // ecx
  int v10; // ecx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v13; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-90h] BYREF
  BOOL *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  unsigned __int16 **v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  _BYTE v25[16]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int64 v28; // [rsp+E0h] [rbp-20h]
  _DWORD v29[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  __int64 v32; // [rsp+100h] [rbp+0h]
  _DWORD v33[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 **v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  __int64 *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  size_t Dst[3]; // [rsp+140h] [rbp+40h] BYREF
  int v41; // [rsp+1B0h] [rbp+B0h] BYREF

  v41 = a3;
  v16[0] = 0x20000LL;
  v11 = 0;
  v16[1] = &word_1408834C0;
  v3 = (unsigned __int16 *)v16;
  v13 = (unsigned __int16 *)v16;
  v4 = (unsigned __int16 *)v16;
  v12 = (unsigned __int16 *)v16;
  v5 = a3;
  if ( a1 >= 0 )
  {
    PopQueryMostRecentWakeSourceAttributes(&v41, &v13, &v12, &v11);
    v5 = v41;
    v3 = v13;
    v4 = v12;
  }
  result = swprintf_s((wchar_t *)Dst, 9uLL, L"%08X", (unsigned int)a1);
  if ( PotsPowerTransitionsHandleRegistered && (unsigned int)dword_140C064E0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL);
    if ( result )
    {
      v20 = 4LL;
      v19 = &v14;
      v15 = a2;
      v21 = &v15;
      v22 = 4LL;
      v23 = &v12;
      v14 = a1 >= 0;
      LODWORD(v12) = v5;
      v24 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v25, Dst);
      v9 = *v3;
      v28 = *((_QWORD *)v3 + 1);
      v26 = v29;
      v29[0] = v9;
      v27 = 2LL;
      v29[1] = 0;
      v10 = *v4;
      v32 = *((_QWORD *)v4 + 1);
      LODWORD(v13) = PopFullWake;
      v34 = &v13;
      v36 = &v11;
      v38 = &v17;
      v30 = v33;
      v33[0] = v10;
      v31 = 2LL;
      v33[1] = 0;
      v35 = 4LL;
      v37 = 4LL;
      v17 = 0x1000000LL;
      v39 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C064E0,
               (unsigned __int8 *)byte_14003237B,
               0LL,
               0LL,
               0xDu,
               &v18);
    }
  }
  return result;
}
