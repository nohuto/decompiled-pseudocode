/*
 * XREFs of MiDriverPageMustStayResident @ 0x1402B0248
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiDriverPageMustStayResident(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 272);
  v3 = (a2 - ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3;
  if ( (unsigned int)v3 >= *(_DWORD *)v2 )
    return 0;
  else
    return _bittest64(*(const signed __int64 **)(v2 + 8), (unsigned int)v3);
}
