/*
 * XREFs of EtwTraceTimeZoneInformationRefresh @ 0x140811F50
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall EtwTraceTimeZoneInformationRefresh(int a1, int a2, int a3, char a4, char a5)
{
  int v5; // r8d
  char result; // al
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  char v8; // [rsp+39h] [rbp-CFh] BYREF
  char v9; // [rsp+3Ah] [rbp-CEh] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  int *v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  int *v15; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  char *v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+84h] [rbp-84h]
  char *v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  int v22; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+98h] [rbp-70h] BYREF
  int *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C4h] [rbp-44h]
  __int64 *v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+D0h] [rbp-38h]
  int v29; // [rsp+D4h] [rbp-34h]
  char *v30; // [rsp+D8h] [rbp-30h]
  int v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E4h] [rbp-24h]
  char *v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+F4h] [rbp-14h]
  char *v36; // [rsp+F8h] [rbp-10h]
  int v37; // [rsp+100h] [rbp-8h]
  int v38; // [rsp+104h] [rbp-4h]
  int v39; // [rsp+138h] [rbp+30h] BYREF
  int v40; // [rsp+140h] [rbp+38h] BYREF
  int v41; // [rsp+148h] [rbp+40h] BYREF
  char v42; // [rsp+150h] [rbp+48h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v39 = a1;
  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      result = 68;
    else
      result = 85;
  }
  else
  {
    result = 83;
  }
  if ( (unsigned int)dword_140C06690 > 5 )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v7 = result;
    v30 = &v7;
    v33 = &v8;
    v10 = a1;
    v9 = a5;
    v24 = &v10;
    v36 = &v9;
    LODWORD(v11) = a2;
    v27 = &v11;
    v8 = a4;
    v25 = 4;
    v28 = 4;
    v31 = 1;
    v34 = 1;
    v37 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C06690,
               (unsigned __int8 *)&dword_1400346DC,
               0LL,
               0LL,
               7u,
               &v23);
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    v19 = 0;
    v22 = 0;
    UserData.Ptr = (ULONGLONG)&v39;
    v13 = &v40;
    v15 = &v41;
    v17 = &v42;
    v20 = &a5;
    UserData.Size = 4;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 1;
    v21 = 1;
    return EtwWrite(EtwKernelProvRegHandle, &KernelTimeZoneInformationRefresh, 0LL, 5u, &UserData);
  }
  return result;
}
