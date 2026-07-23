/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x180102910
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int i; // eax
  char v9; // di

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 == a1 )
    {
      i = *(_DWORD *)(a2 + 8);
      LODWORD(v6) = i;
      if ( i < *(_DWORD *)(a1 + 88) )
      {
        v7 = *(_QWORD *)(a2 + 16);
        goto LABEL_10;
      }
    }
LABEL_4:
    v9 = 0;
  }
  else
  {
    *(_QWORD *)a2 = a1;
    LODWORD(v6) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    v7 = **(_QWORD **)(a1 + 96);
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)(a2 + 16) = v7;
LABEL_10:
      if ( v7 )
        break;
      v6 = i + 1;
      *(_DWORD *)(a2 + 8) = v6;
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 88) )
        goto LABEL_12;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v6);
    }
    if ( (unsigned int)v6 < *(_DWORD *)(a1 + 88) )
      goto LABEL_14;
LABEL_12:
    if ( !v7 )
    {
      *a3 = 0LL;
      goto LABEL_4;
    }
LABEL_14:
    *a3 = v7;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
    v9 = 1;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return v9;
}
