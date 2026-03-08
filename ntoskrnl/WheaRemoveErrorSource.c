/*
 * XREFs of WheaRemoveErrorSource @ 0x140A04C80
 * Callers:
 *     WheaUnregisterErrorSourceOverride @ 0x140611410 (WheaUnregisterErrorSourceOverride.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A04E60 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheapIsNonHestErrorSource @ 0x14037D750 (WheapIsNonHestErrorSource.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 *     WheapCallErrorSourceUninitialize @ 0x140610450 (WheapCallErrorSourceUninitialize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall WheaRemoveErrorSource(unsigned int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int128 v7; // xmm1
  int v8; // eax
  void *v9; // rcx
  int v10; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[972]; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+41Ch] [rbp+31Ch]
  char v16; // [rsp+420h] [rbp+320h]

  memset(v14, 0, sizeof(v14));
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v3 = (__int64)ErrorSource;
  if ( ErrorSource )
  {
    LOBYTE(ErrorSource) = WheapIsNonHestErrorSource((__int64)(ErrorSource + 12));
    if ( (_BYTE)ErrorSource )
    {
      LODWORD(ErrorSource) = *(_DWORD *)(v3 + 108) - 3;
      if ( (unsigned int)ErrorSource > 1 )
      {
        v5 = 7LL;
        Interval.QuadPart = -1000LL;
        v6 = v14;
        do
        {
          *(_OWORD *)v6 = *(_OWORD *)v4;
          *((_OWORD *)v6 + 1) = *(_OWORD *)(v4 + 16);
          *((_OWORD *)v6 + 2) = *(_OWORD *)(v4 + 32);
          *((_OWORD *)v6 + 3) = *(_OWORD *)(v4 + 48);
          *((_OWORD *)v6 + 4) = *(_OWORD *)(v4 + 64);
          *((_OWORD *)v6 + 5) = *(_OWORD *)(v4 + 80);
          *((_OWORD *)v6 + 6) = *(_OWORD *)(v4 + 96);
          v6 += 128;
          v7 = *(_OWORD *)(v4 + 112);
          v4 += 128LL;
          *((_OWORD *)v6 - 1) = v7;
          --v5;
        }
        while ( v5 );
        *(_OWORD *)v6 = *(_OWORD *)v4;
        *((_OWORD *)v6 + 1) = *(_OWORD *)(v4 + 16);
        *((_OWORD *)v6 + 2) = *(_OWORD *)(v4 + 32);
        *((_OWORD *)v6 + 3) = *(_OWORD *)(v4 + 48);
        *((_QWORD *)v6 + 8) = *(_QWORD *)(v4 + 64);
        *((_DWORD *)v6 + 18) = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v3 + 108) = 4;
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 92), -1, 0) > 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        v8 = WheapCallErrorSourceUninitialize(v3);
        v9 = *(void **)(v3 + 48);
        v10 = v8;
        *(_DWORD *)(v3 + 108) = 3;
        if ( v9 )
        {
          ExFreePoolWithTag(v9, 0x61656857u);
          *(_QWORD *)(v3 + 48) = 0LL;
        }
        Src[3] = 0;
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[2] = 1009;
        Src[5] = -2147483636;
        Src[4] = 1280201291;
        Src[6] = 2;
        Src[7] = 977;
        v15 = v10;
        v16 = 1;
        LOBYTE(ErrorSource) = WheaLogInternalEvent(Src);
      }
    }
  }
  return (char)ErrorSource;
}
