/*
 * XREFs of NVMeMaskInterrupt @ 0x1C0021054
 * Callers:
 *     ProcessCompletionQueues @ 0x1C0002F50 (ProcessCompletionQueues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeMaskInterrupt(__int64 a1, char a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 25) )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a1 + 184);
      *(_DWORD *)(result + 12) = 1 << a2;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      *(_BYTE *)(a1 + 25) = 1;
    }
  }
  return result;
}
