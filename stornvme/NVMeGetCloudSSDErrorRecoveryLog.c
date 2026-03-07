_UNKNOWN **__fastcall NVMeGetCloudSSDErrorRecoveryLog(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rbx
  void *v4; // rcx
  unsigned int v5; // r8d
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v7; // [rsp+60h] [rbp+8h]
  void *v8; // [rsp+70h] [rbp+18h]

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 1040);
  v4 = *(void **)(a1 + 4208);
  v8 = v4;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_QWORD *)(a1 + 4208) = 0LL;
    if ( v4 )
    {
      result = *(_UNKNOWN ***)(a1 + 4224);
      v7 = (__int64)result;
      if ( result )
      {
        memset(v4, 0, 0x200uLL);
        LocalCommandReuse(a1, a1 + 944);
        *(_BYTE *)(v2 + 4253) |= 3u;
        LOBYTE(v5) = -63;
        *(_WORD *)(v2 + 4244) = 0;
        BuildGetLogPageCommand(a1, v2, v5, 0x200u, v7, -1, 0LL, 0);
        *(_BYTE *)(v2 + 4253) |= 4u;
        *(_QWORD *)(v2 + 4200) = v8;
        *(_QWORD *)(v2 + 4208) = v7;
        *(_QWORD *)(v2 + 4224) = NVMeGetCloudSSDErrorRecoveryLogPageCompletion;
        *(_DWORD *)(v2 + 4240) = 512;
        ProcessCommand(a1, a1 + 952);
        return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
      }
    }
    else
    {
      return (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 0x200u);
    }
  }
  return result;
}
