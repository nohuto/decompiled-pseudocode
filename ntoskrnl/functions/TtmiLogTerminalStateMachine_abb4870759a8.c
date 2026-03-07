char __fastcall TtmiLogTerminalStateMachine(int a1, int *a2, int *a3)
{
  _UNKNOWN **v3; // rax
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  char v9; // [rsp+39h] [rbp-CFh] BYREF
  char v10; // [rsp+3Ah] [rbp-CEh] BYREF
  int ProcessSessionId; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+88h] [rbp-80h] BYREF
  int *p_ProcessSessionId; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  char *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  char *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  int *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  int *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  int *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  char *v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+170h] [rbp+68h]
  int *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  __int64 *v53; // [rsp+188h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+88h]
  __int64 *v55; // [rsp+198h] [rbp+90h]
  __int64 v56; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h] BYREF

  v3 = &retaddr;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      p_ProcessSessionId = &ProcessSessionId;
      v27 = &v12;
      v13 = *a2;
      v29 = &v13;
      v18 = *((_QWORD *)a2 + 1);
      v31 = &v18;
      v19 = *((_QWORD *)a2 + 2);
      v33 = &v19;
      v20 = *((_QWORD *)a2 + 3);
      v35 = &v20;
      v21 = *((_QWORD *)a2 + 4);
      v37 = &v21;
      v8 = *((_BYTE *)a2 + 40);
      v39 = &v8;
      v9 = *((_BYTE *)a2 + 41);
      v41 = &v9;
      v14 = a2[11];
      v43 = &v14;
      v15 = a2[12];
      v45 = &v15;
      v16 = *a3;
      v47 = &v16;
      v10 = *((_BYTE *)a3 + 4);
      v49 = &v10;
      v17 = a3[2];
      v51 = &v17;
      v22 = *((_QWORD *)a3 + 2);
      v53 = &v22;
      v23 = *((_QWORD *)a3 + 3);
      v55 = &v23;
      v26 = 4LL;
      v12 = a1;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 1LL;
      v52 = 4LL;
      v54 = 8LL;
      v56 = 8LL;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)byte_140033241,
                     0LL,
                     0LL,
                     0x12u,
                     &v24);
    }
  }
  return (char)v3;
}
