NTSTATUS __fastcall McTemplateK0qqqqzzzqx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // r8
  const wchar_t *v13; // r10
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+38h] [rbp-99h] BYREF
  int *v23; // [rsp+48h] [rbp-89h]
  __int64 v24; // [rsp+50h] [rbp-81h]
  char *v25; // [rsp+58h] [rbp-79h]
  __int64 v26; // [rsp+60h] [rbp-71h]
  char *v27; // [rsp+68h] [rbp-69h]
  __int64 v28; // [rsp+70h] [rbp-61h]
  char *v29; // [rsp+78h] [rbp-59h]
  __int64 v30; // [rsp+80h] [rbp-51h]
  const wchar_t *v31; // [rsp+88h] [rbp-49h]
  int v32; // [rsp+90h] [rbp-41h]
  int v33; // [rsp+94h] [rbp-3Dh]
  const wchar_t *v34; // [rsp+98h] [rbp-39h]
  int v35; // [rsp+A0h] [rbp-31h]
  int v36; // [rsp+A4h] [rbp-2Dh]
  const wchar_t *v37; // [rsp+A8h] [rbp-29h]
  int v38; // [rsp+B0h] [rbp-21h]
  int v39; // [rsp+B4h] [rbp-1Dh]
  char *v40; // [rsp+B8h] [rbp-19h]
  __int64 v41; // [rsp+C0h] [rbp-11h]
  char *v42; // [rsp+C8h] [rbp-9h]
  __int64 v43; // [rsp+D0h] [rbp-1h]
  int v44; // [rsp+110h] [rbp+3Fh] BYREF

  v44 = a4;
  v12 = a8;
  v13 = a10;
  v14 = a9;
  v23 = &v44;
  v25 = &a5;
  v27 = &a6;
  v29 = &a7;
  v15 = -1LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  if ( a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a8[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v32 = v17;
  v33 = 0;
  if ( !a8 )
    v12 = L"NULL";
  v31 = v12;
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a9[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v35 = v19;
  v36 = 0;
  if ( !a9 )
    v14 = L"NULL";
  v34 = v14;
  if ( a10 )
  {
    do
      ++v15;
    while ( a10[v15] );
    v20 = (unsigned int)(2 * v15 + 2);
  }
  else
  {
    v20 = 10LL;
  }
  v38 = v20;
  v40 = &a11;
  v39 = 0;
  v42 = &a12;
  v41 = 4LL;
  if ( !a10 )
    v13 = L"NULL";
  v37 = v13;
  v43 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v20, &MessageCheckDelayEvent, &W32kControlGuid, 0xAu, &v22);
}
