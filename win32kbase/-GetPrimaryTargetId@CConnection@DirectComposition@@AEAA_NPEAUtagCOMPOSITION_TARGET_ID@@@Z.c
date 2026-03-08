/*
 * XREFs of ?GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1C000827C
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CConnection::GetPrimaryTargetId(
        DirectComposition::CConnection *this,
        struct tagCOMPOSITION_TARGET_ID *a2)
{
  DirectComposition::CPushLockCriticalSection *v2; // rbp
  char v5; // bl
  __int64 v6; // rax
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8

  v2 = (DirectComposition::CConnection *)((char *)this + 344);
  v5 = 0;
  ExAcquirePushLockSharedEx((char *)this + 344, 0LL);
  *((_BYTE *)v2 + 8) = 0;
  v6 = 464LL * *((unsigned int *)this + 90);
  if ( *(_QWORD *)((char *)this + v6 + 400) && *(_DWORD *)((char *)this + v6 + 396) )
  {
    v7 = *(__int128 **)((char *)this + v6 + 432);
    v5 = 1;
    v8 = *v7;
    v9 = *((_QWORD *)v7 + 2);
    LODWORD(v7) = *((_DWORD *)v7 + 6);
    *(_OWORD *)a2 = v8;
    *((_QWORD *)a2 + 2) = v9;
    *((_DWORD *)a2 + 6) = (_DWORD)v7;
  }
  DirectComposition::CPushLockCriticalSection::Release(v2);
  return v5;
}
