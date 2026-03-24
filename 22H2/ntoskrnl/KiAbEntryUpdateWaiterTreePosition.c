/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x14038F384 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax

  v5 = *(unsigned __int8 *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 195);
  result = v5;
  if ( (char)v5 > 15 )
    result = 15LL;
  if ( *(_BYTE *)(a1 + 48) != (_BYTE)result )
  {
    v7 = a2 + 64;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode(a2 + 64, a1, v5, a4);
    v8 = 0;
    v9 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
    {
      if ( v9 )
        v9 ^= v7;
      else
        v9 = 0LL;
    }
    v10 = *(_BYTE *)(v7 + 8) & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v9 + 48) < *(_BYTE *)(a1 + 48) )
        {
          v11 = *(_QWORD *)v9;
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            if ( !v11 )
              break;
            v11 ^= v9;
          }
          if ( !v11 )
            break;
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 8);
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_11;
            v11 ^= v9;
          }
          if ( !v11 )
          {
LABEL_11:
            v8 = 1;
            break;
          }
        }
        v9 = v11;
      }
    }
    LOBYTE(v10) = v8;
    return RtlRbInsertNodeEx(v7, v9, v10, a1);
  }
  return result;
}
