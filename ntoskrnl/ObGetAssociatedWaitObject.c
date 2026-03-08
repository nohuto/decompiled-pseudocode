/*
 * XREFs of ObGetAssociatedWaitObject @ 0x14024F1CC
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x14024EEE0 (NtAssociateWaitCompletionPacket.c)
 *     IopCancelWaitCompletionPacket @ 0x1402DEF38 (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall ObGetAssociatedWaitObject(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  __int16 *v3; // r8

  v1 = 0LL;
  v2 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v3 = *(__int16 **)(v2 + 32);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    if ( (__int64)v3 < 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( ((unsigned __int8)v3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v2 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v2 + 180) + a1)) != *(_DWORD *)(v2 + 176) )
    {
      v3 = (__int16 *)((char *)v3 - 3);
LABEL_3:
      v3 = (__int16 *)((char *)v3 + a1);
      goto LABEL_4;
    }
    v3 = *(__int16 **)(*(unsigned __int16 *)(v2 + 182) + a1);
  }
  else
  {
    v3 = *(__int16 **)((char *)v3 + a1 - 1);
  }
LABEL_4:
  if ( v3 != &ObpDefaultObject )
    return v3;
  return (__int16 *)v1;
}
