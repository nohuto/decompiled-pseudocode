NTSTATUS __fastcall KiTraceLogControlCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  NTSTATUS result; // eax
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  ULONG_PTR v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  char *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int64 *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int64 *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  char *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]

  if ( (_DWORD)a2 == 1 )
  {
    result = KiTraceLogHeteroRundown(a7, a2);
    if ( *a7 > 5u )
    {
      v10 = KiHgsPlusConfiguration;
      v22 = 4LL;
      v21 = &v10;
      v23 = (char *)&v10 + 4;
      v18 = qword_140D1D368;
      v25 = &v18;
      v11 = dword_140D1D370;
      v27 = &v11;
      v19 = qword_140D1D378;
      v29 = &v19;
      v12 = dword_140D1D380;
      v31 = &v12;
      v13 = dword_140D1D384;
      v33 = &v13;
      v8 = dword_140D1D388;
      v35 = &v8;
      v9 = byte_140D1D3CC;
      v37 = &v9;
      v14 = dword_140D1D38C;
      v39 = &v14;
      v15 = dword_140D1D390;
      v41 = &v15;
      v16 = dword_140D1D394;
      v43 = &v16;
      v17 = dword_140D1D398;
      v45 = &v17;
      v24 = 4LL;
      v26 = 8LL;
      v28 = 4LL;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer((__int64)a7, (unsigned __int8 *)&word_14002CE3E, 0LL, 0LL, 0xFu, &v20);
    }
  }
  return result;
}
