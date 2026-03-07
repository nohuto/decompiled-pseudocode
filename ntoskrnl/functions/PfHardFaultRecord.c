__int64 __fastcall PfHardFaultRecord(
        LARGE_INTEGER *a1,
        LARGE_INTEGER a2,
        LONG a3,
        LARGE_INTEGER a4,
        LARGE_INTEGER *a5,
        __int64 a6)
{
  __int64 result; // rax

  a1[4] = a2;
  a1[5] = a4;
  a1[6] = a5[3];
  a1[7].LowPart = *(_DWORD *)(a6 + 1232);
  a1[7].HighPart = a3;
  if ( (PerfGlobalGroupMask & 0x2000) != 0 )
    EtwGetKernelTraceTimestampSilo(a1, 0x2000u, *(_QWORD *)(*(_QWORD *)(a6 + 544) + 2160LL));
  else
    *(_OWORD *)&a1->LowPart = 0LL;
  result = (unsigned int)dword_140D0BE94;
  if ( (dword_140D0BE94 & 1) != 0 )
  {
    result = MEMORY[0xFFFFF78000000320];
    a1[8].QuadPart = MEMORY[0xFFFFF78000000320];
  }
  else
  {
    a1[8].QuadPart = 0LL;
  }
  return result;
}
