/*
 * XREFs of ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0041B1C
 * Callers:
 *     ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00458F0 (-DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0pqqxxx_EtwWriteTransfer @ 0x1C0041CA4 (McTemplateK0pqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0042164 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::PerformClockCalibration(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  unsigned int i; // ebx
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebp
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  _DXGK_GPUCLOCKDATA v11; // [rsp+60h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 2);
  for ( i = 0; i < *(_DWORD *)(v1 + 288); ++i )
  {
    v4 = 0;
    v5 = 344LL * i;
    v6 = *(_QWORD *)(v1 + 2808);
    v7 = *(unsigned __int16 *)(v5 + v6);
    if ( *(_WORD *)(v5 + v6) )
    {
      do
      {
        if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
        {
          memset(&v11, 0, sizeof(v11));
          if ( (unsigned int)ADAPTER_RENDER::DdiCalibrateGpuClock(this, v4, i, &v11) )
          {
            WdLogSingleEntry1(1LL, 4187LL);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v9,
                  v8,
                  v10,
                  0,
                  2,
                  -1,
                  (__int64)L"Status == STATUS_SUCCESS",
                  4187LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0pqqxxx_EtwWriteTransfer(
              v9,
              v8,
              v10,
              *((_QWORD *)this + 2),
              v4,
              i,
              v11.GpuFrequency,
              v11.GpuClockCounter,
              v11.CpuClockCounter);
        }
        ++v4;
      }
      while ( v4 < v7 );
    }
    v1 = *((_QWORD *)this + 2);
  }
}
