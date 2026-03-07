NTSTATUS __fastcall McTemplateK0zzzzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  const wchar_t *v8; // rdi
  __int64 v9; // rax
  const wchar_t *v10; // r10
  const wchar_t *v11; // r11
  int v12; // r8d
  const wchar_t *v13; // rbx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  bool v22; // zf
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+38h] [rbp-39h] BYREF
  const wchar_t *v25; // [rsp+48h] [rbp-29h]
  int v26; // [rsp+50h] [rbp-21h]
  int v27; // [rsp+54h] [rbp-1Dh]
  const wchar_t *v28; // [rsp+58h] [rbp-19h]
  int v29; // [rsp+60h] [rbp-11h]
  int v30; // [rsp+64h] [rbp-Dh]
  const wchar_t *v31; // [rsp+68h] [rbp-9h]
  int v32; // [rsp+70h] [rbp-1h]
  int v33; // [rsp+74h] [rbp+3h]
  const wchar_t *v34; // [rsp+78h] [rbp+7h]
  int v35; // [rsp+80h] [rbp+Fh]
  int v36; // [rsp+84h] [rbp+13h]
  const wchar_t *v37; // [rsp+88h] [rbp+17h]
  int v38; // [rsp+90h] [rbp+1Fh]
  int v39; // [rsp+94h] [rbp+23h]

  v8 = a8;
  v9 = -1LL;
  v10 = a7;
  v11 = a6;
  v12 = 10;
  v13 = a5;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v26 = v15;
  v27 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v25 = a4;
  if ( a5 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a5[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v29 = v17;
  v30 = 0;
  if ( !a5 )
    v13 = L"NULL";
  v28 = v13;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v32 = v19;
  v33 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v31 = v11;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v35 = v21;
  v36 = 0;
  if ( !a7 )
    v10 = L"NULL";
  v34 = v10;
  v22 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v9;
    while ( a8[v9] );
    v12 = 2 * v9 + 2;
    v22 = a8 == 0LL;
  }
  if ( v22 )
    v8 = L"NULL";
  v38 = v12;
  v37 = v8;
  v39 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DuplicateDevice,
           0LL,
           6u,
           &v24);
}
