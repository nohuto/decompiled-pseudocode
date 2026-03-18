/*
 * XREFs of NVMeSanitizeCommandCompletion @ 0x1C001F040
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 */

__int64 __fastcall NVMeSanitizeCommandCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int16 v6; // cx

  result = GetSrbExtension(a2);
  if ( !v4 )
    goto LABEL_2;
  v6 = *(_WORD *)(v4 + 14) & 0x1FE;
  if ( v6 == 58 )
  {
    *(_BYTE *)(v3 + 3) = 5;
    goto LABEL_3;
  }
  if ( v6 == 56 )
  {
    *(_BYTE *)(v3 + 3) = 0;
    *(_BYTE *)(result + 4253) &= ~8u;
    *(_DWORD *)(v5 + 4136) |= 1u;
    *(_QWORD *)(v5 + 4128) = v3;
    return NVMeQueueWorkItem(v5, (__int64)NVMeGetSanitizeLogWorkItem, 0LL, v5);
  }
  else
  {
    if ( v6 )
    {
LABEL_2:
      *(_BYTE *)(v3 + 3) = 4;
LABEL_3:
      *(_BYTE *)(result + 4253) |= 8u;
      return result;
    }
    *(_QWORD *)(v5 + 4128) = v3;
    *(_BYTE *)(v3 + 3) = 0;
    *(_BYTE *)(result + 4253) &= ~8u;
  }
  return result;
}
