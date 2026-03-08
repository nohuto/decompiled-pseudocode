/*
 * XREFs of ?ReportState@TrackedWorkloadMonitor@@QEAAXXZ @ 0x1C035A0A0
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0088258 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x1C0359ED8 (-ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0pqqqqqggqqqttqggqqqttqggqqqttqggqqqttqggqqqtt_EtwWriteTransfer @ 0x1C00592D8 (McTemplateK0pqqqqqggqqqttqggqqqttqggqqqttqggqqqttqggqqqtt_EtwWriteTransfer.c)
 */

void __fastcall TrackedWorkloadMonitor::ReportState(TrackedWorkloadMonitor *this)
{
  __int64 v1; // r8
  __int128 v2; // [rsp+C8h] [rbp-C0h]
  __int128 v3; // [rsp+108h] [rbp-80h]
  __int128 v4; // [rsp+148h] [rbp-40h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 && (qword_1C013A870 & 0x10000000) != 0 )
  {
    v1 = *((unsigned __int8 *)this + 181);
    v4 = *((_OWORD *)this + 12);
    v3 = *(_OWORD *)((char *)this + 152);
    v2 = *((_OWORD *)this + 7);
    McTemplateK0pqqqqqggqqqttqggqqqttqggqqqttqggqqqttqggqqqtt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      *((unsigned __int8 *)this + 220),
      v1,
      *(_QWORD *)this,
      *((_DWORD *)this + 3),
      *((_DWORD *)this + 4),
      *((_DWORD *)this + 5),
      *((_DWORD *)this + 56),
      *((_DWORD *)this + 6),
      *((_OWORD *)this + 2),
      *((_QWORD *)this + 5),
      *((_DWORD *)this + 12),
      *((_DWORD *)this + 13),
      *((_DWORD *)this + 14),
      *((_BYTE *)this + 60),
      *((_BYTE *)this + 61),
      *((_DWORD *)this + 16),
      *(_OWORD *)((char *)this + 72),
      *((_QWORD *)this + 10),
      *((_DWORD *)this + 22),
      *((_DWORD *)this + 23),
      *((_DWORD *)this + 24),
      *((_BYTE *)this + 100),
      *((_BYTE *)this + 101),
      *((_DWORD *)this + 26),
      v2,
      SBYTE8(v2),
      *((_DWORD *)this + 32),
      *((_DWORD *)this + 33),
      *((_DWORD *)this + 34),
      *((_BYTE *)this + 140),
      *((_BYTE *)this + 141),
      *((_DWORD *)this + 36),
      v3,
      SBYTE8(v3),
      *((_DWORD *)this + 42),
      *((_DWORD *)this + 43),
      *((_DWORD *)this + 44),
      *((_BYTE *)this + 180),
      v1,
      *((_DWORD *)this + 46),
      v4,
      SBYTE8(v4),
      *((_DWORD *)this + 52),
      *((_DWORD *)this + 53),
      *((_DWORD *)this + 54),
      *((_BYTE *)this + 220),
      *((_BYTE *)this + 221));
  }
}
