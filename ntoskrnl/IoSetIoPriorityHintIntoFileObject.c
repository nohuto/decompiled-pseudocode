/*
 * XREFs of IoSetIoPriorityHintIntoFileObject @ 0x140554D30
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoFileObject(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( a2 >= 5 )
    return 3221225485LL;
  result = IopAllocateFileObjectExtension(a1, &v4);
  if ( (int)result >= 0 )
    *(_DWORD *)(v4 + 88) = a2 + 1;
  return result;
}
