ULONG __fastcall McTemplateU0pqnz_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-21h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  int *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  __int64 v16; // [rsp+60h] [rbp+Fh]
  __int64 v17; // [rsp+68h] [rbp+17h]
  const wchar_t *v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+7Ch] [rbp+2Bh]
  __int64 v21; // [rsp+B0h] [rbp+5Fh] BYREF
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  v21 = a3;
  v7 = a7;
  v12 = &v21;
  v13 = 8LL;
  v14 = &v22;
  v16 = a6;
  v15 = 4LL;
  v17 = 8LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v19 = v9;
  v20 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v18 = v7;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_HWDEVICE_CREATE,
           0LL,
           5u,
           &v11);
}
