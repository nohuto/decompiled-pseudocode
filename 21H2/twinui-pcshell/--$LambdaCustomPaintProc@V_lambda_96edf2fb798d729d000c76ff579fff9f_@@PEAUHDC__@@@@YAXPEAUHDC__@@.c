/*
 * XREFs of ??$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x18048F430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180490A54 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

void __fastcall LambdaCustomPaintProc<_lambda_96edf2fb798d729d000c76ff579fff9f_,HDC__ *>(
        HDC a1,
        int *a2,
        enum DEVICE_SCALE_FACTOR *a3)
{
  int v3; // eax
  enum DEVICE_SCALE_FACTOR v4; // r9d
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = a2[1];
  v4 = *a3;
  v6 = *a2;
  v9 = v6;
  v5 = 0LL;
  v8 = 0LL;
  v7 = v3;
  v10 = v3;
  JointDivider_Paint(a1, (HDC)&v8, (const struct Geometry::CRect *)&v5, v4, 0LL);
}
