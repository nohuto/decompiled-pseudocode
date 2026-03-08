/*
 * XREFs of ExpSetTimerObject2 @ 0x1402CF9D4
 * Callers:
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1402CDD38 (ExpSetTimer.c)
 *     ExpSetTimer2 @ 0x1402CF8A0 (ExpSetTimer2.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall ExpSetTimerObject2(_QWORD *Object, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  char v7; // cl

  v4 = 0;
  if ( a3 && (*((_BYTE *)Object + 129) & 2) != 0 )
  {
    v4 = -1073741811;
  }
  else if ( a4 && (*(_DWORD *)a4 || *(__int64 *)(a4 + 8) < -1) )
  {
    v4 = -1073741583;
  }
  else
  {
    if ( a2 )
    {
      v6 = *a2;
      v7 = 1;
    }
    else
    {
      v7 = 0;
      v6 = 0LL;
    }
    Object[18] = v6;
    Object[19] = 0LL;
    if ( a4 )
      Object[19] = *(_QWORD *)(a4 + 8);
    if ( v7 )
      KeSetTimer2((__int64)Object, v6, a3, a4);
    else
      KeCancelTimer2((__int64)Object, 0LL, a3, (_DWORD *)a4);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v4;
}
