__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        struct _LUID a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  struct DXGADAPTER *v10; // rsi
  unsigned int v11; // edi
  int LowPart; // edx
  unsigned int TargetUsage; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  char v18[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v21[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a1[3];
  v21[0] = 0LL;
  v19 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v21, &v19);
  v10 = v21[0];
  if ( v21[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v21[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL) < 0 || !*((_QWORD *)v10 + 365) )
    {
      WdLogSingleEntry2(3LL, v19.HighPart, v5.LowPart);
      v11 = -1073741275;
LABEL_15:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
      goto LABEL_16;
    }
    if ( a4 && *(_QWORD *)&a2 )
    {
      LowPart = a1[4].LowPart;
      v18[0] = 0;
      TargetUsage = DmmGetTargetUsage((__int64)v10, LowPart, v18);
      if ( TargetUsage != a5 )
      {
        WdLogSingleEntry4(3LL, v19.HighPart, v5.LowPart, a1[4].LowPart, a5);
        v11 = -1073741267;
        goto LABEL_15;
      }
      v14 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v18[0]);
      v11 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry4(3LL, v19.HighPart, v5.LowPart, a1[4].LowPart, v14);
        goto LABEL_15;
      }
    }
    v15 = a1[4].LowPart;
    v22[0] = &v19;
    v20 = a3;
    v22[1] = &v20;
    v19 = a2;
    v16 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v10, v15, v22);
    v11 = v16;
    if ( v16 >= 0 )
      v11 = 0;
    else
      WdLogSingleEntry1(3LL, v16);
    goto LABEL_15;
  }
  WdLogSingleEntry2(3LL, v19.HighPart, v5.LowPart);
  v11 = -1073741275;
LABEL_16:
  DXGADAPTER_REFERENCE::Assign(v21, 0LL);
  return v11;
}
