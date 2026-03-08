/*
 * XREFs of ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1C0007F80 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C00080A0 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1C000827C (-GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C000831C (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005CBD8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetCompositorClockInfo(
        DirectComposition::CConnection *this,
        struct DirectComposition::CCompClockInfo **a2)
{
  int v4; // edi
  struct DirectComposition::CProcessData *v5; // rbx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v4 = 0;
  v5 = DirectComposition::CProcessData::Current();
  *a2 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v9 = 0LL;
  if ( !v5 || !DirectComposition::CConnection::GetPrimaryTargetId(this, (struct tagCOMPOSITION_TARGET_ID *)&v9) )
    return (unsigned int)-1073741823;
  ExAcquirePushLockExclusiveEx((char *)v5 + 40, 0LL);
  *((_BYTE *)v5 + 48) = 1;
  v7 = *((_QWORD *)v5 + 7);
  if ( !v7 )
  {
LABEL_9:
    v4 = DirectComposition::CCompClockInfo::Create(
           (const struct tagCOMPOSITION_TARGET_ID *)&v9,
           (struct DirectComposition::CCompClockInfo **)v5 + 7);
    if ( v4 < 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (_QWORD)v9 != *(_QWORD *)(v7 + 4) )
  {
    DirectComposition::CCompClockInfo::Release((DirectComposition::CCompClockInfo *)v7, v6);
    *((_QWORD *)v5 + 7) = 0LL;
    goto LABEL_9;
  }
  *(_DWORD *)(v7 + 12) = v10;
  if ( !*((_QWORD *)v5 + 7) )
    goto LABEL_9;
LABEL_6:
  _InterlockedIncrement(*((volatile signed __int32 **)v5 + 7));
  *a2 = (struct DirectComposition::CCompClockInfo *)*((_QWORD *)v5 + 7);
LABEL_7:
  DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CProcessData *)((char *)v5 + 40));
  return (unsigned int)v4;
}
