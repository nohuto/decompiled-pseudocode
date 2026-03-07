char __fastcall lambda_cc320e0eecd868534feeae0a4f9b43e2_::operator()(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // rax
  int v4; // r9d
  int v5; // r8d
  __int64 v6; // rax
  int *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  int v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+84h] [rbp-7Ch]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  __int16 *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  __int64 *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]

  v1 = *a1;
  v3 = a1[2];
  memset(v21, 0, sizeof(v21));
  v24 = 0;
  v4 = *(_DWORD *)v1;
  v5 = *((_DWORD *)v1 + 1);
  v6 = *v3;
  v23 = 0;
  v22 = 0LL;
  v7 = (int *)a1[1];
  v20[0] = 30;
  v20[1] = 72;
  memset(v21, 0, sizeof(v21));
  v28 = *v7;
  v8 = a1[3];
  v25 = 110;
  v26 = v5;
  v27 = v4;
  v9 = *v8;
  v29 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20, v9);
  v10 = a1[4];
  if ( *(_BYTE *)v10 )
  {
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_1C013A918, 0x800000000004LL);
      if ( (_BYTE)v10 )
      {
        v11 = *a1;
        v42 = 0;
        v39 = 0;
        v36 = 0;
        v12 = *v11;
        v13 = a1[2];
        v33 = 0;
        v17 = v12;
        v41 = 8;
        v14 = *v13;
        v16 = 1;
        v40 = &v17;
        v37 = &v18;
        v34 = &v16;
        v31 = &v19;
        v18 = v14;
        v38 = 8;
        v32 = 8;
        v19 = 2048LL;
        v35 = 2;
        LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C013A918,
                        (unsigned __int8 *)dword_1C009DDE7,
                        0LL,
                        0LL,
                        6u,
                        &v30);
      }
    }
  }
  return (char)v10;
}
