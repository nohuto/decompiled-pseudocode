/*
 * XREFs of McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1C001A2A4
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001A740 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuusssz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const wchar_t *a13)
{
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  const char *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const char *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const wchar_t *v26; // rax
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v30; // [rsp+40h] [rbp-A1h]
  int v31; // [rsp+48h] [rbp-99h]
  int v32; // [rsp+4Ch] [rbp-95h]
  char *v33; // [rsp+50h] [rbp-91h]
  __int64 v34; // [rsp+58h] [rbp-89h]
  __int64 v35; // [rsp+60h] [rbp-81h]
  __int64 v36; // [rsp+68h] [rbp-79h]
  char *v37; // [rsp+70h] [rbp-71h]
  __int64 v38; // [rsp+78h] [rbp-69h]
  char *v39; // [rsp+80h] [rbp-61h]
  __int64 v40; // [rsp+88h] [rbp-59h]
  char *v41; // [rsp+90h] [rbp-51h]
  __int64 v42; // [rsp+98h] [rbp-49h]
  const char *v43; // [rsp+A0h] [rbp-41h]
  int v44; // [rsp+A8h] [rbp-39h]
  int v45; // [rsp+ACh] [rbp-35h]
  const char *v46; // [rsp+B0h] [rbp-31h]
  int v47; // [rsp+B8h] [rbp-29h]
  int v48; // [rsp+BCh] [rbp-25h]
  const char *v49; // [rsp+C0h] [rbp-21h]
  int v50; // [rsp+C8h] [rbp-19h]
  int v51; // [rsp+CCh] [rbp-15h]
  const wchar_t *v52; // [rsp+D0h] [rbp-11h]
  int v53; // [rsp+D8h] [rbp-9h]
  int v54; // [rsp+DCh] [rbp-5h]

  v13 = -1LL;
  v14 = 10;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v31 = v16;
  v17 = a10;
  v33 = &a5;
  v35 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v37 = &a7;
  v30 = a4;
  v39 = &a8;
  v41 = &a9;
  v32 = 0;
  v34 = 4LL;
  v36 = 16LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  if ( a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a10[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5;
  }
  v44 = v19;
  v45 = 0;
  if ( !a10 )
    v17 = "NULL";
  v43 = v17;
  v20 = a11;
  if ( a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v47 = v22;
  v48 = 0;
  if ( !a11 )
    v20 = "NULL";
  v46 = v20;
  v23 = a12;
  if ( a12 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a12[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v50 = v25;
  v26 = a13;
  if ( !a12 )
    v23 = "NULL";
  v51 = 0;
  v49 = v23;
  v27 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v13;
    while ( a13[v13] );
    v14 = 2 * v13 + 2;
    v27 = a13 == 0LL;
  }
  if ( v27 )
    v26 = L"NULL";
  v53 = v14;
  v52 = v26;
  v54 = 0;
  return McGenEventWrite_EtwWriteTransfer(v13, &EventUnitArrived, 0LL, 0xBu, &v29);
}
