/*
 * XREFs of NVMeMaskInterrupt @ 0x1C001A6F8
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0005EC0 (NVMeHwMSIInterrupt.c)
 *     ProcessCompletionQueues @ 0x1C001C2B0 (ProcessCompletionQueues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeMaskInterrupt(__int64 a1, char a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 18) )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(result + 12) = 1 << a2;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      *(_BYTE *)(a1 + 18) = 1;
    }
  }
  return result;
}
