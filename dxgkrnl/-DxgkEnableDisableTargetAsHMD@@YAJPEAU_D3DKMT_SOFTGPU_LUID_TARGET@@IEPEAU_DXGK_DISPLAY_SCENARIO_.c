__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rsi
  int *v8; // rdi
  __int64 v9; // rbp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rbx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-C8h] BYREF

  LODWORD(v5) = -1073741811;
  if ( a2 > 0x10 )
    return 3221225485LL;
  if ( a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = a2;
    do
    {
      Global = DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v8 - 1), &v15);
      v12 = v11;
      if ( v11 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v11, 0LL);
        DXGADAPTER::ReleaseReference(v12);
        v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v16, 1LL);
        v5 = v13;
        if ( v13 >= 0 )
        {
          if ( *((_QWORD *)v12 + 365) )
          {
            v14 = MonitorSetUsageClass(v12, (unsigned int)v8[1], a3 != 0, a4);
            v5 = v14;
            if ( v14 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v8[1], *v8, (unsigned int)*(v8 - 1), v14);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to enable/disable given targetID 0x%I64x as HMD on adapter 0x%I64x%08I64x, Status = 0x%I64x.",
                (unsigned int)v8[1],
                *v8,
                (unsigned int)*(v8 - 1),
                v5,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, *v8, (unsigned int)*(v8 - 1), v13);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Status = 0x%I64x.",
            *v8,
            (unsigned int)*(v8 - 1),
            v5,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
      }
      else
      {
        LODWORD(v5) = -1073741811;
        WdLogSingleEntry3(2LL, *v8, (unsigned int)*(v8 - 1), -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
          *v8,
          (unsigned int)*(v8 - 1),
          -1073741811LL,
          0LL,
          0LL);
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  return (unsigned int)v5;
}
