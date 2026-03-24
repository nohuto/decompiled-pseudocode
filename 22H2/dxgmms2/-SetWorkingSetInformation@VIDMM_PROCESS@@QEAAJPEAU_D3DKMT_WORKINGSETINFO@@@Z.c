/*
 * XREFs of ?SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C00B9258
 * Callers:
 *     VidMmSetWorkingSetInformation @ 0x1C0023070 (VidMmSetWorkingSetInformation.c)
 * Callees:
 *     McTemplateK0tqq_EtwWriteTransfer @ 0x1C0025C4C (McTemplateK0tqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_PROCESS::SetWorkingSetInformation(
        VIDMM_PROCESS *this,
        struct _D3DKMT_WORKINGSETINFO *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = 0;
  if ( (*(_DWORD *)&a2->Flags & 1) != 0 )
  {
    *((_DWORD *)this + 24) |= 1u;
  }
  else if ( SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    *((_DWORD *)this + 24) &= ~1u;
    *((_DWORD *)this + 25) = a2->MaximumWorkingSetPercentile;
    *((_DWORD *)this + 26) = a2->MinimumWorkingSetPercentile;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(v6, a2);
    WdLogEvent5_WdWarning(v7);
    v3 = -1073741790;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0tqq_EtwWriteTransfer(
      *((unsigned int *)this + 26),
      (__int64)a2,
      a3,
      *((_DWORD *)this + 24) & 1,
      *((_DWORD *)this + 26),
      *((_DWORD *)this + 25));
  return v3;
}
