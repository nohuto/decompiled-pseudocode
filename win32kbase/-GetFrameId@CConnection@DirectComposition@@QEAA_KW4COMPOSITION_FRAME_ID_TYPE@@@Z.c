/*
 * XREFs of ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1C000872C
 * Callers:
 *     NtDCompositionGetFrameId @ 0x1C0008660 (NtDCompositionGetFrameId.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetFrameId(_QWORD *a1, int a2)
{
  DirectComposition::CPushLockCriticalSection *v2; // rbp
  __int64 v5; // rbx
  int v6; // edi

  v2 = (DirectComposition::CPushLockCriticalSection *)(a1 + 43);
  v5 = 0LL;
  ExAcquirePushLockSharedEx(a1 + 43, 0LL);
  *((_BYTE *)v2 + 8) = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        v5 = a1[48];
    }
    else
    {
      v5 = a1[47];
    }
  }
  else
  {
    v5 = a1[46];
  }
  DirectComposition::CPushLockCriticalSection::Release(v2);
  return v5;
}
