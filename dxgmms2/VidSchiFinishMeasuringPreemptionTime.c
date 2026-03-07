void __fastcall VidSchiFinishMeasuringPreemptionTime(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER v5; // r8
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // r8d
  __int64 v13; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 504) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
    v4 = *(_QWORD *)(v2 + 40);
    PerformanceFrequency.QuadPart = 0LL;
    v5 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(a1 + 504));
    v6 = (unsigned __int64)v5.QuadPart * (unsigned __int128)0x989680uLL;
    v15 = *((_QWORD *)&v6 + 1);
    if ( is_mul_ok(v5.QuadPart, 0x989680uLL) )
      v7 = v6 / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v7 = 10000000 * (v5.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v5.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    v8 = (unsigned __int64 *)(v3 + 2856);
    v9 = 8;
    v10 = 8LL;
    while ( v7 <= *v8 )
    {
      --v9;
      --v8;
      if ( --v10 < 0 )
        goto LABEL_9;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8LL * v9 + 2680));
LABEL_9:
    if ( v7 >= *(_QWORD *)(v3 + 2784) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 2672));
      if ( v7 >= *(_QWORD *)(v3 + 2768) && !*(_BYTE *)(*(_QWORD *)(v2 + 40) + 2632LL) )
      {
        v11 = *(_DWORD *)(v2 + 48);
        if ( (v11 & 8) == 0
          && (v11 & 1) == 0
          && !*(_DWORD *)(v3 + 3012)
          && !*(_BYTE *)(v2 + 204)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0)
          && (*(_DWORD *)(v3 + 2536) & 0x200) != 0 )
        {
          KeSetTimer((PKTIMER)(a1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v3 + 2776), (PKDPC)(a1 + 576));
          VidSchiUpdateContextStatus(a1, 7LL, 28534);
          if ( bTracingEnabled )
          {
            v13 = *(_QWORD *)(a1 + 56);
            if ( !v13 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
              LODWORD(v13) = a1;
            if ( (byte_1C00769C1 & 1) != 0 )
              McTemplateK0ppxx_EtwWriteTransfer(
                *(_QWORD *)(v3 + 2776),
                (unsigned int)&EventDelayContextScheduling,
                v12,
                v13,
                *(_QWORD *)(v4 + 2640),
                v7,
                *(_QWORD *)(v3 + 2776));
          }
        }
      }
    }
    *(_QWORD *)(a1 + 504) = 0LL;
  }
}
