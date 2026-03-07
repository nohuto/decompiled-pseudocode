char __fastcall PpmEventTraceMultiClassHeteroResponse(
        char a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  _UNKNOWN **v10; // rax
  REGHANDLE v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v19; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  unsigned __int64 *v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  unsigned int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  __int64 v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A4h] [rbp-64h]
  __int64 v30; // [rsp+A8h] [rbp-60h]
  int v31; // [rsp+B0h] [rbp-58h]
  int v32; // [rsp+B4h] [rbp-54h]
  char *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  char *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  char *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  char *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  char *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  char *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF
  char v46; // [rsp+148h] [rbp+40h] BYREF

  v10 = &retaddr;
  v46 = a1;
  if ( PpmEtwRegistered )
  {
    v14 = PpmEtwHandle;
    LOBYTE(v10) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE);
    if ( (_BYTE)v10 )
    {
      v15 = *a2;
      v16 = *a2;
      *(_QWORD *)&UserData.Size = 1LL;
      v22 = 2LL;
      v23 = a2;
      v24 = 8LL;
      v26 = 4LL;
      v27 = a3;
      v17 = ((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
      v29 = 0;
      v30 = a4;
      v32 = 0;
      v34 = 8LL;
      v36 = 4LL;
      v38 = 1LL;
      v40 = 1LL;
      UserData.Ptr = (ULONGLONG)&v46;
      v21 = a2 + 1;
      v25 = &v19;
      v19 = (unsigned int)((0x101010101010101LL * ((v17 + (v17 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      v42 = 1LL;
      v28 = 4 * v19;
      v31 = 4 * v19;
      v44 = 8LL;
      v33 = &a5;
      v35 = &a6;
      v37 = &a7;
      v39 = &a8;
      v41 = &a9;
      v43 = &a10;
      LOBYTE(v10) = EtwWriteEx(v14, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
    }
  }
  return (char)v10;
}
