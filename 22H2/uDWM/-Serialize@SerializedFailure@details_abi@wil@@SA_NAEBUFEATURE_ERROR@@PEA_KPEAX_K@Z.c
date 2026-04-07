/*
 * XREFs of ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18007F5E0
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18007EDE4 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ??R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z @ 0x18007DCEC (--R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z.c)
 */

bool __fastcall wil::details_abi::SerializedFailure::Serialize(
        const struct FEATURE_ERROR *a1,
        unsigned __int64 *a2,
        _OWORD *a3,
        unsigned __int64 a4)
{
  unsigned __int16 *v6; // r14
  unsigned __int8 *file; // rdx
  _OWORD *v9; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-41h] BYREF
  _OWORD *v11; // [rsp+50h] [rbp-19h] BYREF
  char *v12; // [rsp+58h] [rbp-11h] BYREF
  char v13; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v14; // [rsp+E8h] [rbp+7Fh] BYREF

  v14 = a4;
  v11 = a3;
  v9 = a3;
  *a2 = 36LL;
  v6 = (unsigned __int16 *)&v13;
  v12 = (char *)a3 + a4;
  if ( a4 >= 0x24 )
  {
    v6 = (unsigned __int16 *)a3;
    *a3 = 0LL;
    a3[1] = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *(_DWORD *)a3 = a1->hr;
    *((_WORD *)a3 + 2) = a1->lineNumber;
    *((_DWORD *)a3 + 3) = a1->callerReturnAddressOffset;
    *((_WORD *)a3 + 9) = a1->originLineNumber;
    *((_DWORD *)a3 + 6) = a1->originCallerReturnAddressOffset;
    v9 = (_OWORD *)((char *)v9 + 36);
  }
  file = (unsigned __int8 *)a1->file;
  v10[0] = &v11;
  v10[1] = a2;
  v10[2] = &v14;
  v10[3] = &v9;
  v10[4] = &v12;
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, file, v6 + 3, 0);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->process, v6 + 16, 0);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->module, v6 + 4, v6[16]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->callerModule,
    v6 + 5,
    v6[4]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->message, v6 + 8, 0);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->originFile, v6 + 10, v6[3]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->callerModule,
    v6 + 5,
    v6[4]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->originModule,
    v6 + 11,
    v6[4]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->originCallerModule,
    v6 + 14,
    v6[11]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->originName, v6 + 15, 0);
  return *a2 <= v14;
}
