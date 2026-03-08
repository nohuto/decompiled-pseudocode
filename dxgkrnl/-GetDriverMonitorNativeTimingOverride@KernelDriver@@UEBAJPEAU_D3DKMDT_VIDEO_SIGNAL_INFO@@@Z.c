/*
 * XREFs of ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C021A5E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetDriverMonitorNativeTimingOverride(
        KernelDriver *this,
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  __int64 v2; // rax
  unsigned int v4; // esi
  _QWORD *ChildDescriptor; // rax
  __int64 v6; // rdi

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v4 = -1071841279;
    ChildDescriptor = DpiFdoGetChildDescriptor(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL) + 64LL),
                        *((_DWORD *)this + 8));
    *(_OWORD *)&a2->VideoStandard = 0LL;
    *(_OWORD *)&a2->ActiveSize.cy = 0LL;
    *(_OWORD *)&a2->HSyncFreq.Denominator = 0LL;
    *(_QWORD *)&a2->AdditionalSignalInfo = 0LL;
    if ( ChildDescriptor )
    {
      v6 = ChildDescriptor[13];
      if ( v6 )
      {
        if ( RtlCompareMemory(a2, (const void *)(v6 + 8), 0x38uLL) != 56 )
        {
          v4 = 0;
          *(_OWORD *)&a2->VideoStandard = *(_OWORD *)(v6 + 8);
          *(_OWORD *)&a2->ActiveSize.cy = *(_OWORD *)(v6 + 24);
          *(_OWORD *)&a2->HSyncFreq.Denominator = *(_OWORD *)(v6 + 40);
          *(_QWORD *)&a2->AdditionalSignalInfo = *(_QWORD *)(v6 + 56);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    return 3221225664LL;
  }
}
