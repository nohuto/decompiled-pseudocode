/*
 * XREFs of ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0213278
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1C0212230 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C00DD278 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0211064 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1C021338C (-GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetCompositorClockInfo(
        DirectComposition::CConnection *this,
        struct DirectComposition::CCompClockInfo **a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  struct DirectComposition::CProcessData *v7; // rsi
  struct _ERESOURCE *v8; // rbx
  volatile signed __int32 **v9; // rbx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]

  v6 = 0;
  v7 = DirectComposition::CProcessData::Current((__int64)this, (__int64)a2, a3, a4);
  *a2 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v12 = 0LL;
  if ( !v7 || !DirectComposition::CConnection::GetPrimaryTargetId(this, (struct tagCOMPOSITION_TARGET_ID *)&v12) )
    return (unsigned int)-1073741823;
  v8 = (struct _ERESOURCE *)*((_QWORD *)v7 + 4);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v8, 1u);
  v9 = (volatile signed __int32 **)((char *)v7 + 40);
  v10 = *((_QWORD *)v7 + 5);
  if ( v10 )
  {
    if ( (_QWORD)v12 == *(_QWORD *)(v10 + 4) )
    {
      *(_DWORD *)(v10 + 12) = v13;
      if ( *((_QWORD *)v7 + 5) )
      {
LABEL_7:
        _InterlockedIncrement(*v9);
        *a2 = (struct DirectComposition::CCompClockInfo *)*v9;
        goto LABEL_8;
      }
    }
    else
    {
      DirectComposition::CCompClockInfo::Release((DirectComposition::CCompClockInfo *)v10);
      *v9 = 0LL;
    }
  }
  v6 = DirectComposition::CCompClockInfo::Create(
         (const struct tagCOMPOSITION_TARGET_ID *)&v12,
         (struct DirectComposition::CCompClockInfo **)v7 + 5);
  if ( v6 >= 0 )
    goto LABEL_7;
LABEL_8:
  ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
