/*
 * XREFs of NVMeIoSubmissionQueueCreateCompletion @ 0x1C001A260
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeIoSubmissionQueueCreateCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rbx

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 3) != 1 )
  {
    *(_DWORD *)(v3 + 28) = 22;
LABEL_5:
    result = StorPortExtendedFunction(101LL, v3, v3 + 3968, v3);
    goto LABEL_6;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 824)) == *(unsigned __int16 *)(v3 + 288) )
    goto LABEL_5;
LABEL_6:
  *(_BYTE *)(v5 + 4253) |= 8u;
  return result;
}
