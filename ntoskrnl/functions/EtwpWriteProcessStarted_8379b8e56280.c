char __fastcall EtwpWriteProcessStarted(__int64 a1, int *a2, __int64 a3, unsigned __int16 *a4, unsigned __int8 **a5)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  int v11; // r10d
  unsigned __int8 *v12; // rcx
  int v13; // eax
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int ProcessSessionId; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *p_ProcessSessionId; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  _DWORD *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 v36; // [rsp+E8h] [rbp-20h]
  _DWORD v37[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 *p_Time; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  __int64 *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  _BYTE v50[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v51[16]; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int8 *v52; // [rsp+178h] [rbp+70h]
  int v53; // [rsp+180h] [rbp+78h]
  int v54; // [rsp+184h] [rbp+7Ch]
  _DWORD *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  __int64 v57; // [rsp+198h] [rbp+90h]
  _DWORD v58[2]; // [rsp+1A0h] [rbp+98h] BYREF

  v5 = *(_QWORD *)(a1 + 1472);
  v6 = &EmptyUnicodeString;
  if ( v5 )
    v6 = *(__int64 **)(a1 + 1472);
  if ( (unsigned int)dword_140C042B8 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140C042B8, 3LL);
    if ( (_BYTE)v5 )
    {
      v20 = *(_QWORD *)(a1 + 1128);
      v26 = &v20;
      v15 = *(_DWORD *)(a1 + 1088);
      v28 = &v15;
      v16 = *(_DWORD *)(a1 + 1344);
      v30 = &v16;
      v27 = 8LL;
      v29 = 4LL;
      v31 = 4LL;
      ProcessSessionId = PsGetProcessSessionId(a1);
      v33 = 4LL;
      p_ProcessSessionId = &ProcessSessionId;
      v35 = 2LL;
      v34 = v37;
      v36 = v6[1];
      v37[0] = *(unsigned __int16 *)v6;
      v37[1] = 0;
      ProcessStartKey = PsGetProcessStartKey(a1);
      p_ProcessStartKey = &ProcessStartKey;
      v22 = *(_QWORD *)(a1 + 2296);
      v40 = &v22;
      v23 = *(_QWORD *)(a1 + 2304);
      v42 = &v23;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      Time = MmGetSessionCreateTime();
      v45 = 8LL;
      p_Time = &Time;
      v18 = *a2;
      v46 = &v18;
      LODWORD(v19) = a2[1];
      v48 = &v19;
      v47 = 4LL;
      v49 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v50, (const size_t *)(a3 + 16));
      tlgCreate1Sz_wchar_t((__int64)v51, (const size_t *)(a3 + 272));
      if ( a5 )
        v12 = *a5;
      else
        v12 = (unsigned __int8 *)SeNullSid;
      v13 = v12[1];
      v52 = v12;
      v54 = v11;
      v56 = 2LL;
      v58[1] = v11;
      v53 = 4 * v13 + 8;
      v55 = v58;
      v57 = *((_QWORD *)a4 + 1);
      v58[0] = *a4;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C042B8,
                     (unsigned __int8 *)&word_140034F16,
                     0LL,
                     0LL,
                     0x13u,
                     &v25);
    }
  }
  return v5;
}
