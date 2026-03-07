__int64 __fastcall VIDMM_PROCESS::SetWorkingSetInformation(
        VIDMM_PROCESS *this,
        struct _D3DKMT_WORKINGSETINFO *a2,
        __int64 a3)
{
  unsigned int v3; // edi

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
    WdLogSingleEntry0(3LL);
    v3 = -1073741790;
  }
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0tqq_EtwWriteTransfer(
      *((unsigned int *)this + 26),
      (__int64)a2,
      a3,
      *((_DWORD *)this + 24) & 1,
      *((_DWORD *)this + 26),
      *((_DWORD *)this + 25));
  return v3;
}
