void __fastcall VidSchiStopNodeYield(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  ULONGLONG v4; // rax
  __int64 v5; // rdi
  unsigned int MostSignificantBit; // edx
  __int64 v7; // rax
  LARGE_INTEGER v8; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 2000) = 0LL;
  v3 = a1;
  v4 = *(unsigned int *)(a1 + 1772);
  v5 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 2024) = 0;
  if ( (_DWORD)v4 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v4);
    a1 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 404) < MostSignificantBit )
      {
        v7 = *(_QWORD *)(v3 + 96);
        PerformanceFrequency.QuadPart = 0LL;
        *(_QWORD *)(v3 + 136) = v7;
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( is_mul_ok(v8.QuadPart, 0x989680uLL) )
        {
          a3 = (unsigned __int64)v8.QuadPart
             * (unsigned __int128)0x989680uLL
             / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          a1 = 10000000 * (v8.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
          a3 = a1
             + 10000000
             * (v8.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart;
        }
        *(_QWORD *)(v3 + 128) = a3;
      }
    }
  }
  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0pq_EtwWriteTransfer(a1, &EventYieldStopNode, a3, *(_QWORD *)(v5 + 16), *(unsigned __int16 *)(v3 + 4));
}
