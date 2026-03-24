/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x140272350
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140272EAC (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax

  result = KiAbOwnerComputeCpuPriorityKey(a1, a2, a3);
  if ( *(_BYTE *)(a1 + 48) != (_BYTE)result )
  {
    v8 = a2 + 48;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode(v8, a1, v6, v7);
    v9 = 0;
    v10 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( v10 )
        v10 ^= v8;
      else
        v10 = 0LL;
    }
    v11 = *(_BYTE *)(v8 + 8) & 1;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v10 + 48) > *(_BYTE *)(a1 + 48) )
        {
          v12 = *(_QWORD *)v10;
          if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
          {
            if ( !v12 )
              break;
            v12 ^= v10;
          }
          if ( !v12 )
            break;
        }
        else
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_9;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_9:
            v9 = 1;
            break;
          }
        }
        v10 = v12;
      }
    }
    LOBYTE(v11) = v9;
    return RtlRbInsertNodeEx(v8, v10, v11, a1);
  }
  return result;
}
