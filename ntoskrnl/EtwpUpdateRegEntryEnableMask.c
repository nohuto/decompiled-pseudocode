/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x14069059C
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E46E0 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x140695404 (EtwpApplyScopeFilters.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1409F26D8 (EtwpTrackDecodeGuidForSession.c)
 */

char __fastcall EtwpUpdateRegEntryEnableMask(__int64 a1, __int64 a2, char a3, char a4, char a5, int a6)
{
  __int64 v7; // rbp
  __int64 v9; // rbx
  __int16 v10; // ax
  char v12; // [rsp+58h] [rbp+20h] BYREF

  v7 = a2;
  if ( a4 )
    v9 = a5 != 0 ? 103LL : 101LL;
  else
    v9 = a5 != 0 ? 102LL : 100LL;
  LOBYTE(v10) = a6;
  if ( a6 == 1 )
  {
    v12 = a3;
    LOBYTE(a2) = 1;
    EtwpApplyScopeFilters(a1, a2, a4, a5, (__int64)&v12);
    v10 = *(_WORD *)(a1 + 98);
    if ( (v10 & 8) != 0 )
    {
      LOBYTE(v10) = v12;
      *(_BYTE *)(a1 + 100) = v12;
    }
    else
    {
      if ( (v10 & 0x400) != 0 )
      {
        if ( v12 )
        {
          LOBYTE(v10) = EtwpTrackDecodeGuidForSession(v7, a1);
          if ( !(_BYTE)v10 )
          {
            LOBYTE(v10) = -1;
            _InterlockedAnd16((volatile signed __int16 *)(a1 + 98), 0xFBFFu);
          }
        }
      }
      *(_BYTE *)(v9 + a1) = v12 | *(_BYTE *)(v9 + a1) & ~a3;
    }
  }
  else if ( !a6 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *(_BYTE *)(v9 + a1) &= ~a3;
  }
  return v10;
}
