NTSTATUS __fastcall McTemplateK0zzqqzttquqqzxt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        const wchar_t *a15,
        char a16,
        char a17)
{
  const wchar_t *v17; // rbx
  __int64 v18; // rax
  const wchar_t *v19; // r11
  const wchar_t *v20; // r8
  int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // r10d
  __int64 v24; // rcx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  int v27; // r8d
  bool v28; // zf
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  const wchar_t *v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  char *v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  const wchar_t *v39; // [rsp+88h] [rbp-80h]
  int v40; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+94h] [rbp-74h]
  char *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  char *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  char *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  char *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  char *v50; // [rsp+D8h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-28h]
  char *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  const wchar_t *v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+100h] [rbp-8h]
  int v56; // [rsp+104h] [rbp-4h]
  char *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  char *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]

  v17 = a15;
  v18 = -1LL;
  v19 = a8;
  v20 = a5;
  v21 = 10;
  if ( a4 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a4[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v32 = v23;
  if ( !a4 )
    a4 = L"NULL";
  v31 = a4;
  if ( a5 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a5[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v34 = v25;
  if ( !a5 )
    v20 = L"NULL";
  v35 = &a6;
  v33 = v20;
  v37 = &a7;
  v36 = 4LL;
  v38 = 4LL;
  if ( a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a8[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v40 = v27;
  v42 = &a9;
  v41 = 0;
  v44 = &a10;
  if ( !a8 )
    v19 = L"NULL";
  v39 = v19;
  v46 = &a11;
  v48 = &a12;
  v50 = &a13;
  v52 = &a14;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 1LL;
  v51 = 4LL;
  v53 = 4LL;
  v28 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v18;
    while ( a15[v18] );
    v21 = 2 * v18 + 2;
    v28 = a15 == 0LL;
  }
  if ( v28 )
    v17 = L"NULL";
  v55 = v21;
  v54 = v17;
  v57 = &a16;
  v56 = 0;
  v59 = &a17;
  v58 = 8LL;
  v60 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_Rebalance_Failure,
           0LL,
           0xFu,
           &v30);
}
