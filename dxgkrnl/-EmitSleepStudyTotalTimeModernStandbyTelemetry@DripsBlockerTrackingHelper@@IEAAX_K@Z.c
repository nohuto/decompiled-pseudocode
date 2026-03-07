void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(
        DripsBlockerTrackingHelper *this,
        __int64 a2)
{
  int v2; // r9d
  _BYTE *v3; // r10
  __int64 v6; // r11
  bool v7; // zf
  int v8; // r8d
  __int64 v9; // r9
  int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h] BYREF
  __int64 v16; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-19h]
  int v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+8Ch] [rbp-Dh]
  __int64 *v22; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+9Ch] [rbp+3h]
  __int64 *v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]
  __int64 *v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+BCh] [rbp+23h]
  __int64 *v31; // [rsp+C0h] [rbp+27h]
  int v32; // [rsp+C8h] [rbp+2Fh]
  int v33; // [rsp+CCh] [rbp+33h]
  __int64 *v34; // [rsp+D0h] [rbp+37h]
  int v35; // [rsp+D8h] [rbp+3Fh]
  int v36; // [rsp+DCh] [rbp+43h]

  v2 = 0;
  v3 = (char *)this + 104;
  v6 = 64LL;
  do
  {
    v7 = *v3 == 0;
    v8 = v2 + 1;
    v3 += 4720;
    if ( v7 )
      v8 = v2;
    v2 = v8;
    --v6;
  }
  while ( v6 );
  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000002000LL) )
    {
      v11 = *((_QWORD *)this + 37765);
      v36 &= v10;
      v33 &= v10;
      v30 &= v10;
      v27 &= v10;
      v24 &= v10;
      v21 &= v10;
      v14 = v11;
      v15 = *((_QWORD *)this + 37762);
      v34 = &v12;
      v31 = &v13;
      v28 = &v14;
      v25 = &v15;
      v22 = &v16;
      v19 = &v17;
      v13 = v9;
      v35 = v10 + 8;
      v32 = v10 + 8;
      v29 = v10 + 8;
      v26 = v10 + 8;
      v23 = v10 + 8;
      v20 = v10 + 8;
      v12 = 50331648LL;
      v16 = a2;
      v17 = 16LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C013A918,
        (unsigned __int8 *)dword_1C009E70D,
        0LL,
        0LL,
        v10 + 8,
        &v18);
    }
  }
}
