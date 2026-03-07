__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  void *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    result = NVMeAllocateDmaBuffer(a1, 0x100u);
    if ( v4 )
    {
      NVMeZeroMemory(v4, 0x100u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4200LL) = v4;
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4208LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4240LL) = 256;
      v3 = *(_QWORD *)(a1 + 1040);
      *(_QWORD *)(v3 + 4120) = 0LL;
      *(_BYTE *)(v3 + 4096) = 10;
      *(_BYTE *)(v3 + 4136) = 12;
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetAutoPowerStateTransitionCompletion;
      ProcessCommand(a1, a1 + 952);
      WaitForCommandCompleteWithCustomTimeout(a1);
      return NVMeFreeDmaBuffer(a1, 256LL, (__int64 *)&v4, 0LL);
    }
  }
  return result;
}
