/*
 * XREFs of VfThunkApplyMandatoryThunks @ 0x1409D8B6C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409D9B98 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     MmGetNextSession @ 0x1402D5F90 (MmGetNextSession.c)
 *     MmIsSessionAddress @ 0x140349110 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x1406C3770 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078E258 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D8E2C (ViThunkApplyMandatoryThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyMandatoryThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  struct _DMA_ADAPTER *i; // rcx
  _KPROCESS *NextSession; // rax
  struct _DMA_ADAPTER *v7; // rbx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v7 = (struct _DMA_ADAPTER *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v9) >= 0 )
    {
      v4 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v4 = ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v7, (__int64)v9);
      if ( !v4 )
      {
        MmQuitNextSession(v7);
        return v4;
      }
    }
  }
  return v4;
}
