__int64 __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  bool v6; // zf

  result = WdLogSingleEntry3(9LL, a1, a2, 0LL);
  v6 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 4160) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    return McTemplateK0pt_EtwWriteTransfer(
             &DxgkControlGuid_Context,
             &Dxgk_SetDevicePowerTransitionState,
             v5,
             *(_QWORD *)(a1 + 3912),
             a2);
  return result;
}
