/*
 * XREFs of HvlSharedIsr @ 0x14045ED00
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     HvlpGetLpcbByLpIndex @ 0x1403CE3B8 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x14045EDF0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpHandleIommuFaultMessage @ 0x1405482EC (HvlpHandleIommuFaultMessage.c)
 */

char __fastcall HvlSharedIsr(__int64 a1)
{
  __int64 v1; // rax
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v3; // rbx
  unsigned int *v4; // rcx
  __int64 v5; // rcx

  LOBYTE(v1) = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    LODWORD(a1) = KeGetPcr()->Prcb.Number;
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
    v3 = *((_QWORD *)HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex) + 5);
    _m_prefetchw((const void *)(v3 + 1024));
    LODWORD(v1) = *(_DWORD *)(v3 + 1024);
    if ( (_DWORD)v1 )
    {
      v4 = (unsigned int *)(v3 + 1040);
      if ( *(_DWORD *)(v3 + 1024) == -2147483612 )
      {
        HvlpHandleIommuFaultMessage(v4);
      }
      else
      {
        v5 = qword_140D18E20 + 104LL * *v4;
        *(_DWORD *)(v5 + 4) = 2;
        KiInsertQueueDpc(v5 + 8, 0LL, 0LL, 0LL, 0);
      }
      *(_DWORD *)(v3 + 1024) = 0;
      LOBYTE(v1) = *(_BYTE *)(v3 + 1029);
      if ( (v1 & 1) != 0 )
      {
        LOBYTE(v1) = 0;
        __writemsr(0x40000084u, 0LL);
      }
    }
  }
  else if ( KiEpfCompletionQueue )
  {
    v1 = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != v1 )
    {
      _InterlockedIncrement(&dword_140C41768);
      LOBYTE(v1) = KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return v1;
}
