/*
 * XREFs of ?QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x1C0081180
 * Callers:
 *     NtDCompositionGetStatistics @ 0x1C0080E30 (NtDCompositionGetStatistics.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0081294 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

bool __fastcall DirectComposition::CConnection::QueryStats(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        unsigned int a4,
        struct tagCOMPOSITION_TARGET_ID *a5,
        unsigned int *a6)
{
  DirectComposition::CPushLockCriticalSection *v6; // r15
  unsigned int v11; // edi
  unsigned __int64 v12; // rdx
  __int64 v14; // r8
  __int64 v16; // rax

  v6 = (DirectComposition::CConnection *)((char *)this + 328);
  v11 = 0;
  ExAcquirePushLockSharedEx((char *)this + 328, 0LL);
  *((_BYTE *)v6 + 8) = 0;
  v12 = 464 * (a2 % 0x12C);
  if ( *(_QWORD *)((char *)this + v12 + 384) == a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12 + 392);
    *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v12 + 408);
    if ( a4 )
    {
      v14 = 0LL;
      do
      {
        if ( v11 >= *(_DWORD *)((char *)this + v12 + 380) )
          break;
        v16 = *(_QWORD *)((char *)this + v12 + 416);
        ++v11;
        *(_OWORD *)a5 = *(_OWORD *)(v16 + v14);
        *((_QWORD *)a5 + 2) = *(_QWORD *)(v16 + v14 + 16);
        LODWORD(v16) = *(_DWORD *)(v16 + v14 + 24);
        v14 += 104LL;
        *((_DWORD *)a5 + 6) = v16;
        a5 = (struct tagCOMPOSITION_TARGET_ID *)((char *)a5 + 28);
      }
      while ( v11 < a4 );
    }
    LOBYTE(v11) = 1;
    *a6 = *(_DWORD *)((char *)this + v12 + 380);
  }
  DirectComposition::CPushLockCriticalSection::Release(v6);
  return v11;
}
