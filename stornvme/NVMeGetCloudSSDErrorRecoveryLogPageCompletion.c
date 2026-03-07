__int64 __fastcall NVMeGetCloudSSDErrorRecoveryLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE *)(v4 + 3) == 1;
  v6 = SrbExtension;
  v10 = 0xAE3430FE2131D944uLL;
  v7 = *(_QWORD *)(SrbExtension + 4200);
  v9 = v7;
  v11 = 0x5A1983BA3DFD4DABLL;
  if ( !v5 )
    goto LABEL_6;
  result = *(_QWORD *)(v7 + 496) - v10;
  if ( !result )
    result = *(_QWORD *)(v7 + 504) - v11;
  if ( result )
  {
LABEL_6:
    result = NVMeFreeDmaBuffer(a1, 512LL, &v9, *(_QWORD *)(a1 + 4224));
    *(_QWORD *)(a1 + 4224) = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 12) |= 1u;
    *(_QWORD *)(a1 + 4208) = v7;
  }
  *(_BYTE *)(v6 + 4253) |= 8u;
  return result;
}
