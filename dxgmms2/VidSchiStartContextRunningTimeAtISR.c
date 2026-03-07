char __fastcall VidSchiStartContextRunningTimeAtISR(LARGE_INTEGER *a1, DWORD LowPart)
{
  LARGE_INTEGER v2; // rdi
  LARGE_INTEGER v4; // r9

  v2 = a1[12];
  a1[56].QuadPart = 0LL;
  if ( *(_DWORD *)(v2.QuadPart + 2892) == 1 )
    a1[58] = KeQueryPerformanceCounter(0LL);
  if ( bTracingEnabled )
  {
    v4 = a1[7];
    if ( !v4.QuadPart || (LowPart = a1[14].LowPart, (LowPart & 0x40) != 0) )
      v4.LowPart = (unsigned int)a1;
    if ( (byte_1C00769C1 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        a1[56].QuadPart,
        LowPart,
        *(_QWORD *)(v2.QuadPart + 2016),
        v4.LowPart,
        a1[56].QuadPart,
        a1[55].QuadPart,
        *(_QWORD *)(v2.QuadPart + 2016),
        a1[54].HighPart,
        0);
  }
  return 1;
}
