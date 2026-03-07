__int64 __fastcall NVMeGetSanitizeLogWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 SrbExtension; // rax
  __int64 v9; // rdx
  void *v11; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+48h]

  LocalCommandReuse(a1, a1 + 944);
  v11 = 0LL;
  v12 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v11 )
  {
    memset(v11, 0, 0x200uLL);
    v6 = *(_QWORD *)(a1 + 1040);
    LOBYTE(v7) = -127;
    *(_BYTE *)(v6 + 4253) |= 3u;
    *(_WORD *)(v6 + 4244) = 0;
    BuildGetLogPageCommand(a1, v6, v7, 0x200u, v12, 0, 0LL, 0);
    *(_BYTE *)(v6 + 4253) |= 4u;
    *(_QWORD *)(v6 + 4224) = NVMeSanitizeRecoverCompletionRoutine;
    *(_QWORD *)(v6 + 4200) = v11;
    *(_QWORD *)(v6 + 4208) = v12;
    *(_DWORD *)(v6 + 4240) = 512;
    ProcessCommand(a1, a1 + 952);
    WaitForCommandCompleteWithCustomTimeout(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 955) = 38;
  }
  if ( *(_BYTE *)(a1 + 955) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4328) )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4328));
      *(_BYTE *)(SrbExtension + 4253) |= 8u;
      *(_BYTE *)(v9 + 3) = 4;
      NVMeRequestComplete(a1, v9);
      *(_QWORD *)(a1 + 4328) = 0LL;
    }
    *(_DWORD *)(a1 + 4336) &= ~1u;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  if ( v11 )
    NVMeFreeDmaBuffer(a1, 512LL, (__int64 *)&v11, v12);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
