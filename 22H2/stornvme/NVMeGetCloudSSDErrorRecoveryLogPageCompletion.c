/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0019150
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeGetCloudSSDErrorRecoveryLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE *)(v4 + 3) == 1;
  v6 = SrbExtension;
  v10 = 0x4DAB3DFD5A1983BALL;
  v7 = *(_QWORD *)(SrbExtension + 4200);
  v9 = v7;
  v11 = 0x44D93121FE3034AELL;
  if ( v5 && *(_QWORD *)(v7 + 496) == v10 && (result = *(_QWORD *)(v7 + 504), result == v11) )
  {
    *(_QWORD *)(a1 + 3992) = v7;
  }
  else
  {
    result = NVMeFreeDmaBuffer(a1, 512LL, &v9, *(_QWORD *)(a1 + 4008));
    *(_QWORD *)(a1 + 4008) = 0LL;
  }
  *(_BYTE *)(v6 + 4253) |= 8u;
  return result;
}
