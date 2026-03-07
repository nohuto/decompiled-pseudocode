__int64 __fastcall NVMeControllerSetWriteCacheEnable(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax

  result = *(_QWORD *)(a1 + 1840);
  if ( (*(_BYTE *)(result + 525) & 1) != 0 )
  {
    v3 = *(unsigned __int8 *)(a1 + 4236);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    {
      LocalCommandReuse(a1, a1 + 944);
      *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~4u;
      *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
      v4 = *(_QWORD *)(a1 + 1040);
      v5 = *(_DWORD *)(v4 + 4140) ^ v3;
      *(_BYTE *)(v4 + 4096) = 9;
      *(_DWORD *)(v4 + 4140) ^= v5 & 1;
      *(_BYTE *)(v4 + 4136) = 6;
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeSetFeaturesCacheCompletion;
      ProcessCommand(a1, a1 + 952);
      return WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
  return result;
}
