int ExpLogRefreshTimeZoneInformationCutoverFail()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v1; // dl
  __int64 *v2; // r8
  char v3; // r9
  __int64 v4; // r10
  struct _LIST_ENTRY *Blink; // rcx
  int *v6; // r10
  char v7; // cl
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  char v12; // [rsp+33h] [rbp-CDh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int Flink_high; // [rsp+38h] [rbp-C8h] BYREF
  int Flink; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  char *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *p_Flink_high; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *p_Flink; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  _BYTE v35[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  int *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Blink = CurrentServerSiloGlobals[78].Blink;
  if ( (unsigned int)dword_140C06760 > 5 )
  {
    v11 = v1;
    v21 = &v9;
    v13 = (int)Blink[62].Blink;
    v23 = &v13;
    Flink_high = HIDWORD(Blink[27].Flink);
    p_Flink_high = &Flink_high;
    Flink = (int)Blink[27].Flink;
    p_Flink = &Flink;
    v10 = ExpRealTimeIsUniversal;
    v29 = &v10;
    v31 = &v11;
    v19 = *v2;
    v33 = &v19;
    v9 = v3;
    v22 = 1LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 1LL;
    v32 = 1LL;
    v34 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v35, (const size_t *)(v4 + 172));
    v7 = *((_BYTE *)v6 + 428);
    v36 = &v12;
    v16 = *v6;
    v12 = v7;
    v38 = &v16;
    v17 = v6[21];
    v40 = &v17;
    v18 = v6[42];
    v42 = &v18;
    v44 = v6 + 17;
    v46 = v6 + 38;
    v45 = 16LL;
    v47 = 16LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C06760,
                                          (unsigned __int8 *)byte_140036115,
                                          0LL,
                                          0LL,
                                          0x10u,
                                          &v20);
  }
  return (int)CurrentServerSiloGlobals;
}
