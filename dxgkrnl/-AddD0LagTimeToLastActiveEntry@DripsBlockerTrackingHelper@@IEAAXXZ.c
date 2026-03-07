void __fastcall DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(DripsBlockerTrackingHelper *this)
{
  unsigned __int64 Elapsed; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  const wchar_t *v6; // r10
  int v7; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 302152) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 37767));
    v3 = *((unsigned int *)this + 75536);
    v4 = *((unsigned int *)this + 75537);
    if ( *((_BYTE *)this + 302153) )
      *((_QWORD *)this + 590 * v3 + 9 * v4 + 20) += Elapsed;
    else
      *((_QWORD *)this + 590 * v3 + 9 * v4 + 19) += Elapsed;
    if ( bTracingEnabled )
    {
      v5 = *((unsigned int *)this + 75536);
      v7 = 0;
      v6 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                              *((unsigned int *)this + 1180 * v5 + 18 * *((unsigned int *)this + 75537) + 43),
                              &v7);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0qqqszq_EtwWriteTransfer(
          *((unsigned __int8 *)this + 302153),
          &DripsBlockerTracking_AddD0LagTime,
          (__int64)this + 4720 * *((unsigned int *)this + 75536) + 8,
          *((_DWORD *)this + 75536),
          *((_DWORD *)this + 75537),
          *((_BYTE *)this + 302153),
          (const char *)this + 4720 * *((unsigned int *)this + 75536) + 8,
          v6,
          Elapsed / 0x2710);
    }
    *((_BYTE *)this + 302152) = 0;
  }
}
