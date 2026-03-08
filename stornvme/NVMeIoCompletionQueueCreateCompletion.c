/*
 * XREFs of NVMeIoCompletionQueueCreateCompletion @ 0x1C001F330
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeIoCompletionQueueCreateCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rbx

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 3) != 1 )
  {
    *(_DWORD *)(v3 + 36) = 23;
LABEL_5:
    result = StorPortExtendedFunction(101LL, v3, v3 + 4160, v3);
    goto LABEL_6;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 924)) == *(unsigned __int16 *)(v3 + 338) )
    goto LABEL_5;
LABEL_6:
  *(_BYTE *)(v5 + 4253) |= 8u;
  return result;
}
