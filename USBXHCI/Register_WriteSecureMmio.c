/*
 * XREFs of Register_WriteSecureMmio @ 0x1C003F1E8
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     XilRegister_WriteUlong64 @ 0x1C0014C68 (XilRegister_WriteUlong64.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     Register_BiosHandoff @ 0x1C00186F0 (Register_BiosHandoff.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_WriteSecureMmio(__int64 a1, __int64 a2, int a3, const void *a4)
{
  __int64 v4; // rax
  __int64 v9; // r15
  size_t v10; // rbx
  __int64 result; // rax
  int v12; // edx
  int v13[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v14[8]; // [rsp+40h] [rbp-88h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v13[0] = 0;
  v9 = *(_QWORD *)(v4 + 112);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v10 = 2LL;
        break;
      case 2:
        v10 = 4LL;
        break;
      case 3:
        v10 = 8LL;
        break;
      default:
        v10 = 0LL;
        break;
    }
  }
  else
  {
    v10 = 1LL;
  }
  memset(v14, 0, sizeof(v14));
  v14[3] = *(_QWORD *)(a1 + 128);
  LODWORD(v14[4]) = 11;
  v14[5] = a2;
  LODWORD(v14[6]) = a3;
  memmove(&v14[7], a4, v10);
  result = SecureChannel_SendRequestSynchronously(v9, v14, 64LL, v13, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v13[0];
    if ( v13[0] < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               v12,
               6,
               76,
               (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
               v13[0]);
    }
  }
  return result;
}
