/*
 * XREFs of VfThunkApplyThunks @ 0x1409D8C64
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409D9BA8 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x140263DE0 (MmGetNextSession.c)
 *     MmIsSessionAddress @ 0x1402C9800 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x1406A6080 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078E158 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D8ECC (ViThunkApplyThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  struct _DMA_ADAPTER *i; // rcx
  _KPROCESS *NextSession; // rax
  struct _DMA_ADAPTER *v7; // rbx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyThunksCurrentSession(a1, a2);
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
        v4 = ViThunkApplyThunksCurrentSession(a1, a2);
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
