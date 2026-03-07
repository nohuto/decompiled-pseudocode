char __fastcall PopDiagTraceCsDripsWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9,
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  int v12; // edi
  REGHANDLE v13; // rbx
  __int64 v14; // rax
  __int16 v15; // dx
  __int64 v16; // rax
  __int16 v17; // dx
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  int *v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  char *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  char *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  char *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  char *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  int v49; // [rsp+158h] [rbp+50h] BYREF
  int v50; // [rsp+160h] [rbp+58h] BYREF
  int v51; // [rsp+168h] [rbp+60h] BYREF

  v11 = &retaddr;
  v51 = a3;
  v50 = a2;
  v49 = a1;
  v12 = a4;
  if ( PopDiagHandleRegistered )
  {
    v13 = PopDiagHandle;
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG);
    if ( (_BYTE)v11 )
    {
      v22 = a6;
      UserData.Ptr = (ULONGLONG)&v49;
      v24 = &v50;
      v26 = &v51;
      v28 = &v21;
      v30 = &a5;
      v32 = &v22;
      v34 = &a7;
      v21 = v12;
      *(_QWORD *)&UserData.Size = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 2LL;
      if ( a8 )
      {
        v14 = *((_QWORD *)a8 + 1);
        v39 = *a8;
        v38 = v14;
        v15 = (unsigned __int16)v39 >> 1;
        v36 = &v19;
      }
      else
      {
        v38 = 0LL;
        v36 = &v19;
        v15 = 0;
        v39 = 0LL;
      }
      LOWORD(v19) = v15;
      v41 = 2LL;
      if ( a9 )
      {
        v16 = *((_QWORD *)a9 + 1);
        v43 = *a9;
        v42 = v16;
        v17 = (unsigned __int16)v43 >> 1;
        v40 = &v20;
      }
      else
      {
        v42 = 0LL;
        v40 = &v20;
        v17 = 0;
        v43 = 0LL;
      }
      LOWORD(v20) = v17;
      v44 = &a10;
      v45 = 4LL;
      v46 = &a11;
      v47 = 4LL;
      LOBYTE(v11) = EtwWriteEx(v13, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  return (char)v11;
}
