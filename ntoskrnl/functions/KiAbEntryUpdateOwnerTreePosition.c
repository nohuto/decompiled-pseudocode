char __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rbx
  bool v6; // cl
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  result = KiAbOwnerComputeCpuPriorityKey(a1);
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v5 = a2 + 48;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode((unsigned __int64 *)v5, a1 + 24);
    v6 = 0;
    v7 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v5;
    }
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v7 + 24) > *(_BYTE *)(a1 + 48) )
        {
          v8 = *(_QWORD *)v7;
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
            v8 ^= v7;
          }
          if ( !v8 )
            return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
        }
        else
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_9;
            v8 ^= v7;
          }
          if ( !v8 )
          {
LABEL_9:
            v6 = 1;
            return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
          }
        }
        v7 = v8;
      }
    }
    return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
  }
  return result;
}
