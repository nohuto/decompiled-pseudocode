NTSTATUS __fastcall PopDiagTraceFxPerfSetRegistration(
        PCEVENT_DESCRIPTOR EventDescriptor,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        unsigned __int16 *a9,
        int a10,
        __int64 a11,
        char a12)
{
  unsigned __int16 v12; // ax
  __int16 v14; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  int *v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  int *v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  __int16 *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  char *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  char *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  char *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  char *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  char *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+130h] [rbp+28h] BYREF
  int v41; // [rsp+138h] [rbp+30h] BYREF
  int v42; // [rsp+140h] [rbp+38h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a2;
  *(_QWORD *)&UserData.Size = 8LL;
  v24 = 0;
  v37 = 0;
  v17 = 4LL;
  v12 = *a9;
  v23 = *a9;
  v14 = v12 >> 1;
  UserData.Ptr = (ULONGLONG)&v40;
  v16 = &v41;
  v18 = &v42;
  v20 = &v14;
  v22 = *((_QWORD *)a9 + 1);
  v25 = &a5;
  v27 = &a6;
  v29 = &a7;
  v31 = &a8;
  v33 = &a10;
  v35 = a11;
  v36 = 8 * a10;
  v38 = &a12;
  v19 = 4LL;
  v21 = 2LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 8LL;
  v32 = 8LL;
  v34 = 4LL;
  v39 = 8LL;
  return EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 0xCu, &UserData);
}
