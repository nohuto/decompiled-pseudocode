char __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  bool v5; // cl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  result = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1501);
  if ( result > 30 )
    result = 30;
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v4 = a2 + 64;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode((unsigned __int64 *)(a2 + 64), a1 + 24);
    v5 = 0;
    v6 = *(_QWORD *)v4;
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
    {
      if ( v6 )
        v6 ^= v4;
    }
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v6 + 24) < *(_BYTE *)(a1 + 48) )
        {
          v7 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
          {
            if ( !v7 )
              return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1 + 24);
            v7 ^= v6;
          }
          if ( !v7 )
            return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1 + 24);
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_11;
            v7 ^= v6;
          }
          if ( !v7 )
          {
LABEL_11:
            v5 = 1;
            return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1 + 24);
          }
        }
        v6 = v7;
      }
    }
    return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1 + 24);
  }
  return result;
}
