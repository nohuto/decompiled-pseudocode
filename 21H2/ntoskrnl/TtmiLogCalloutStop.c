/*
 * XREFs of TtmiLogCalloutStop @ 0x140901594
 * Callers:
 *     TtmpStopCallout @ 0x1408FD568 (TtmpStopCallout.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14023A7B0 (PsGetProcessSessionIdEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutStop(int a1, int a2, __int64 a3, int a4, int a5, unsigned __int64 a6)
{
  _UNKNOWN **v6; // rax
  unsigned __int64 v7; // rdi
  char *v11; // rdx
  int *v12; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v13; // rax
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int ProcessSessionId; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  char v27; // [rsp+78h] [rbp-90h] BYREF
  int *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  _QWORD *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  _QWORD v39[5]; // [rsp+F0h] [rbp-18h] BYREF
  char v40; // [rsp+118h] [rbp+10h] BYREF
  int *p_ProcessSessionId; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  int *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  int *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  __int64 *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  _QWORD *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  int *v51; // [rsp+188h] [rbp+80h]
  _QWORD v52[5]; // [rsp+190h] [rbp+88h] BYREF
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF
  int v54; // [rsp+200h] [rbp+F8h] BYREF

  v6 = &retaddr;
  v54 = a4;
  v7 = a6;
  if ( a6 > 0x1312D00 )
  {
    if ( (unsigned int)dword_140D2D890 > 5 )
    {
      LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140D2D890, 0x400000000001LL);
      if ( (_BYTE)v6 )
      {
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = byte_14002BAA3;
        v42 = 4LL;
        p_ProcessSessionId = &ProcessSessionId;
        v12 = &dword_140D2D890;
        v20 = a1;
        v43 = &v20;
        v45 = &v21;
        v47 = &v25;
        v49 = v52;
        v51 = &v54;
        v22 = a5;
        v52[1] = &v22;
        v52[3] = &v26;
        v13 = (struct _EVENT_DATA_DESCRIPTOR *)&v40;
        v44 = 4LL;
        v21 = a2;
        v46 = 4LL;
        v25 = a3;
        v48 = 8LL;
        v50 = 2LL;
        v52[0] = 4LL;
        v52[2] = 4LL;
        v26 = v7;
        v52[4] = 8LL;
        goto LABEL_8;
      }
    }
  }
  else if ( (unsigned int)dword_140D2D8C8 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140D2D8C8, 1LL);
    if ( (_BYTE)v6 )
    {
      v15 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v11 = &byte_14002BD2F;
      v29 = 4LL;
      v28 = &v15;
      v12 = &dword_140D2D8C8;
      v16 = a1;
      v30 = &v16;
      v32 = &v17;
      v34 = &v23;
      v36 = v39;
      v38 = &v54;
      v18 = a5;
      v39[1] = &v18;
      v39[3] = &v24;
      v13 = (struct _EVENT_DATA_DESCRIPTOR *)&v27;
      v31 = 4LL;
      v17 = a2;
      v33 = 4LL;
      v23 = a3;
      v35 = 8LL;
      v37 = 2LL;
      v39[0] = 4LL;
      v39[2] = 4LL;
      v24 = v7;
      v39[4] = 8LL;
LABEL_8:
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer((__int64)v12, (unsigned __int8 *)v11, 0LL, 0LL, 0xAu, v13);
    }
  }
  return (char)v6;
}
