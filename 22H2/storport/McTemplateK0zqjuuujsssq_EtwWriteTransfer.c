/*
 * XREFs of McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0046738
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0011130 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C00475E8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047DF4 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0048438 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C004B1A8 (RaidUnitRequestTimeout.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14)
{
  __int64 v14; // rcx
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
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-C9h] BYREF
  const wchar_t *v28; // [rsp+40h] [rbp-B9h]
  int v29; // [rsp+48h] [rbp-B1h]
  int v30; // [rsp+4Ch] [rbp-ADh]
  char *v31; // [rsp+50h] [rbp-A9h]
  __int64 v32; // [rsp+58h] [rbp-A1h]
  __int64 v33; // [rsp+60h] [rbp-99h]
  __int64 v34; // [rsp+68h] [rbp-91h]
  char *v35; // [rsp+70h] [rbp-89h]
  __int64 v36; // [rsp+78h] [rbp-81h]
  char *v37; // [rsp+80h] [rbp-79h]
  __int64 v38; // [rsp+88h] [rbp-71h]
  char *v39; // [rsp+90h] [rbp-69h]
  __int64 v40; // [rsp+98h] [rbp-61h]
  __int64 v41; // [rsp+A0h] [rbp-59h]
  __int64 v42; // [rsp+A8h] [rbp-51h]
  const char *v43; // [rsp+B0h] [rbp-49h]
  int v44; // [rsp+B8h] [rbp-41h]
  int v45; // [rsp+BCh] [rbp-3Dh]
  const char *v46; // [rsp+C0h] [rbp-39h]
  int v47; // [rsp+C8h] [rbp-31h]
  int v48; // [rsp+CCh] [rbp-2Dh]
  const char *v49; // [rsp+D0h] [rbp-29h]
  int v50; // [rsp+D8h] [rbp-21h]
  int v51; // [rsp+DCh] [rbp-1Dh]
  char *v52; // [rsp+E0h] [rbp-19h]
  __int64 v53; // [rsp+E8h] [rbp-11h]

  v14 = -1LL;
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
  v32 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v34 = 16LL;
  v28 = a4;
  v31 = &a5;
  v33 = a6;
  v35 = &a7;
  v37 = &a8;
  v39 = &a9;
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
      ++v14;
    while ( a13[v14] );
    v25 = (unsigned int)(v14 + 1);
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
  v52 = &a14;
  return McGenEventWrite_EtwWriteTransfer(v25, a2, 0LL, 0xCu, &v27);
}
