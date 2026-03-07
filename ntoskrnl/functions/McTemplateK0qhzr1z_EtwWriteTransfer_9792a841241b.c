NTSTATUS __fastcall McTemplateK0qhzr1z_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        __int64 a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-21h] BYREF
  int *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  __int64 v16; // [rsp+60h] [rbp+Fh]
  int v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+7Ch] [rbp+2Bh]
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  v7 = a7;
  v12 = &v22;
  v13 = 4LL;
  v14 = &a5;
  v16 = a6;
  v15 = 2LL;
  v17 = 2 * a5;
  v18 = 0;
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
  v20 = v9;
  v21 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v19 = v7;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceAdd_Start,
           0LL,
           5u,
           &v11);
}
