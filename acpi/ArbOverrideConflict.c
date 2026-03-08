/*
 * XREFs of ArbOverrideConflict @ 0x1C00A20A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ArbOverrideConflict(__int64 a1, __int64 a2)
{
  char v2; // di
  ULONGLONG Start; // rax
  ULONGLONG v5; // r8
  bool v6; // cf
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+58h] [rbp+10h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) != 0 )
  {
    RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
    while ( 1 )
    {
      if ( !Range )
        return v2;
      Start = Range->Start;
      v5 = *(_QWORD *)(a2 + 16);
      v6 = v5 < Range->Start;
      if ( v5 > Range->Start )
      {
        if ( Range->End < v5 )
          goto LABEL_12;
        v6 = v5 < Start;
      }
      if ( (!v6 || *(_QWORD *)(a2 + 24) >= Start) && (*(_BYTE *)(a2 + 67) & Range->Attributes) == 0 )
      {
        if ( Range->Owner != *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL)
          || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
        {
          return 0;
        }
        v2 = 1;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v5;
      }
LABEL_12:
      RtlGetNextRange(&Iterator, &Range, 1u);
    }
  }
  return 0;
}
