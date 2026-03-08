/*
 * XREFs of SupportsOnlyRawAccess @ 0x1C0052F58
 * Callers:
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     WriteField @ 0x1C0053090 (WriteField.c)
 * Callees:
 *     FindRSAccess @ 0x1C004B438 (FindRSAccess.c)
 */

bool __fastcall SupportsOnlyRawAccess(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  __int64 RSAccess; // rax

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) == 5 )
  {
    v2 = **(_QWORD **)(a1 + 32);
    if ( *(_WORD *)(v2 + 66) == 131 )
    {
      RSAccess = FindRSAccess(*(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v2 + 96) + 96LL) + 12LL));
      if ( RSAccess )
      {
        if ( *(_QWORD *)(RSAccess + 32) )
          return *(_QWORD *)(RSAccess + 16) == 0LL;
      }
    }
  }
  return v1;
}
