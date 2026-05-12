/*
 * XREFs of McTemplateK0zjquuujssstq_EtwWriteTransfer @ 0x1C003E55C
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C003F930 (RaidUnitEndMaintenanceTime.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zjquuujssstq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15)
{
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  const char *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const char *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const char *v24; // rax
  __int64 v25; // rcx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  char *v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  char *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  char *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  char *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const char *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  const char *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  const char *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]

  v15 = -1LL;
  if ( a4 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a4[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v29 = v17;
  v18 = a11;
  v30 = 0;
  v32 = 16LL;
  if ( !a4 )
    a4 = L"NULL";
  v34 = 4LL;
  v31 = a5;
  v33 = &a6;
  v35 = &a7;
  v37 = &a8;
  v39 = &a9;
  v28 = a4;
  v41 = a10;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 16LL;
  if ( a11 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a11[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v44 = v20;
  v45 = 0;
  if ( !a11 )
    v18 = "NULL";
  v43 = v18;
  v21 = a12;
  if ( a12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a12[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v47 = v23;
  v24 = a13;
  if ( !a12 )
    v21 = "NULL";
  v48 = 0;
  v46 = v21;
  if ( a13 )
  {
    do
      ++v15;
    while ( a13[v15] );
    v25 = (unsigned int)(v15 + 1);
  }
  else
  {
    v25 = 5LL;
  }
  v50 = v25;
  v51 = 0;
  if ( !a13 )
    v24 = "NULL";
  v53 = 4LL;
  v49 = v24;
  v55 = 4LL;
  v52 = &a14;
  v54 = &a15;
  return McGenEventWrite_EtwWriteTransfer(v25, &EventUnitMaintenanceStopOperational, 0LL, 0xDu, &v27);
}
