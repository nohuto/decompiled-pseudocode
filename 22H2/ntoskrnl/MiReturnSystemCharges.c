/*
 * XREFs of MiReturnSystemCharges @ 0x140311238
 * Callers:
 *     MiCleanupPageTablePages @ 0x14027D96C (MiCleanupPageTablePages.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiDeleteSystemPageTableTail @ 0x140311190 (MiDeleteSystemPageTableTail.c)
 *     MiGetPageTablePages @ 0x140356F00 (MiGetPageTablePages.c)
 *     MiDeleteSessionPdes @ 0x14038C3C8 (MiDeleteSessionPdes.c)
 *     MiReturnSplitPageCharges @ 0x1403CE694 (MiReturnSplitPageCharges.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C8A94 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  unsigned __int64 v9; // rdx

  v3 = a2;
  switch ( a3 )
  {
    case 1:
      goto LABEL_15;
    case 2:
      goto LABEL_6;
    case 11:
LABEL_15:
      v9 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), -(__int64)v3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), -(__int64)v3);
      goto LABEL_6;
  }
  v4 = -(__int64)a2;
  if ( a3 == 4 )
    _InterlockedExchangeAdd64(&qword_140C4EFD8, v4);
  else
    _InterlockedExchangeAdd64(&qword_140C4EFC0, v4);
LABEL_6:
  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      for ( ; v3 + CachedResidentAvailable <= 0x100; result = v3 + (int)result )
      {
        if ( v3 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 CachedResidentAvailable + v3,
                                 CachedResidentAvailable);
        v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v8 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v3 += (int)result;
        }
      }
    }
  }
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v3);
  return result;
}
