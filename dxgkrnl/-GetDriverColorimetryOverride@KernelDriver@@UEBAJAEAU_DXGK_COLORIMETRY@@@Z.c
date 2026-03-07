__int64 __fastcall KernelDriver::GetDriverColorimetryOverride(KernelDriver *this, struct _DXGK_COLORIMETRY *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return DpiGetMonitorColorimetryOverride(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL), *((unsigned int *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
