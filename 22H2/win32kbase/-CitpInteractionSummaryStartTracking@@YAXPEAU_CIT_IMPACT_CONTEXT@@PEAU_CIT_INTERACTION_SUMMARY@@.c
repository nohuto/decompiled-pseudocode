/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C009FA80
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0047958 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C008F18C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  unsigned __int64 v4; // rcx
  __int16 v5; // ax
  struct _CIT_IMPACT_CONTEXT **v6; // rcx

  if ( (*((_BYTE *)a2 + 100) & 2) != 0 )
  {
    *((_OWORD *)a2 + 2) = 0LL;
    *((_OWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 8) = 0LL;
    *((_WORD *)a2 + 36) = 0;
    *((_QWORD *)a2 + 2) = 0LL;
    *(_QWORD *)((char *)a2 + 132) = 0LL;
    *(_QWORD *)((char *)a2 + 140) = 0LL;
    *(_QWORD *)((char *)a2 + 148) = 0LL;
    *(_QWORD *)((char *)a2 + 102) = 0LL;
    *(_DWORD *)((char *)a2 + 110) = 0;
    *((_WORD *)a2 + 57) = 0;
    memset(*((void **)a2 + 20), 0, *((_QWORD *)a2 + 21));
    *((_DWORD *)a2 + 29) &= 0xFF000000;
    *((_DWORD *)a2 + 31) &= 0xFF000000;
    v5 = *((_WORD *)a2 + 50);
  }
  else
  {
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_WORD *)a2 + 50) |= 2u;
    v5 = *((_WORD *)a2 + 50);
    *((_DWORD *)a2 + 23) = v4;
  }
  if ( (v5 & 1) == 0 )
    *((_QWORD *)a2 + 2) = **((_QWORD **)a2 + 3);
  v6 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 107);
  if ( *v6 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 848) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 848;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  *((_QWORD *)a1 + 107) = a2;
}
