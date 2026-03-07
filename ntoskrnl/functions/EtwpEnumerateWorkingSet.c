_QWORD *__fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 *v7; // r9

  v4 = 4096LL;
  while ( 1 )
  {
    result = *(_QWORD **)(a2 + 48);
    if ( !result )
    {
      v6 = 32 * v4 + 16;
      *(_QWORD *)(a2 + 56) = v6;
      result = (_QWORD *)ExAllocatePool2(64LL, v6, 1953985605LL);
      *(_QWORD *)(a2 + 48) = result;
      if ( !result )
        break;
    }
    result = (_QWORD *)MiGetWorkingSetInfoEx(a1 + 1664, 0, result, *(_QWORD *)(a2 + 56));
    v7 = *(__int64 **)(a2 + 48);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v7[1] )
          return (_QWORD *)EtwLogPfnInfoRundown(
                             a1,
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1096LL),
                             **(_DWORD **)(a2 + 32),
                             v7);
      }
      return result;
    }
    v4 = v7[1] + 64;
    ExFreePoolWithTag(*(PVOID *)(a2 + 48), 0);
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  return result;
}
