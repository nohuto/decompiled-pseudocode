/*
 * XREFs of WheaRemoveErrorSource @ 0x14095D100
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x14095D2F0 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     WheapIsNonHestErrorSource @ 0x1403BB214 (WheapIsNonHestErrorSource.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 *     WheapCallErrorSourceUninitialize @ 0x1405BCED0 (WheapCallErrorSourceUninitialize.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall WheaRemoveErrorSource(int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  char *v5; // rdx
  __int128 v6; // xmm1
  int v7; // eax
  void *v8; // rcx
  int v9; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[8]; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+E0h] [rbp-20h]
  int v19; // [rsp+41Ch] [rbp+31Ch]
  char v20; // [rsp+420h] [rbp+320h]

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v2 = (__int64)ErrorSource;
  if ( ErrorSource )
  {
    LOBYTE(ErrorSource) = WheapIsNonHestErrorSource(*((_DWORD *)ErrorSource + 26));
    if ( (_BYTE)ErrorSource )
    {
      if ( (unsigned int)(*(_DWORD *)(v2 + 108) - 3) > 1 )
      {
        v3 = 7LL;
        Interval.QuadPart = -1000LL;
        v4 = v2 + 96;
        v5 = &v13;
        do
        {
          *(_OWORD *)v5 = *(_OWORD *)v4;
          *((_OWORD *)v5 + 1) = *(_OWORD *)(v4 + 16);
          *((_OWORD *)v5 + 2) = *(_OWORD *)(v4 + 32);
          *((_OWORD *)v5 + 3) = *(_OWORD *)(v4 + 48);
          *((_OWORD *)v5 + 4) = *(_OWORD *)(v4 + 64);
          *((_OWORD *)v5 + 5) = *(_OWORD *)(v4 + 80);
          *((_OWORD *)v5 + 6) = *(_OWORD *)(v4 + 96);
          v5 += 128;
          v6 = *(_OWORD *)(v4 + 112);
          v4 += 128LL;
          *((_OWORD *)v5 - 1) = v6;
          --v3;
        }
        while ( v3 );
        *(_OWORD *)v5 = *(_OWORD *)v4;
        *((_OWORD *)v5 + 1) = *(_OWORD *)(v4 + 16);
        *((_OWORD *)v5 + 2) = *(_OWORD *)(v4 + 32);
        *((_OWORD *)v5 + 3) = *(_OWORD *)(v4 + 48);
        *((_QWORD *)v5 + 8) = *(_QWORD *)(v4 + 64);
        *((_DWORD *)v5 + 18) = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v2 + 108) = 4;
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 92), -1, 0) > 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        v7 = WheapCallErrorSourceUninitialize(v2);
        v8 = *(void **)(v2 + 48);
        v9 = v7;
        *(_DWORD *)(v2 + 108) = 3;
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x61656857u);
          *(_QWORD *)(v2 + 48) = 0LL;
        }
        Src[3] = 0;
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[2] = 1009;
        Src[5] = -2147483636;
        Src[4] = 1280201291;
        Src[6] = 2;
        Src[7] = 977;
        if ( *(_DWORD *)(v2 + 104) == 16 )
        {
          v15 = 0LL;
          v16 = 0LL;
          v17 = 0LL;
          v14 = 0LL;
          v18 = 0LL;
        }
        v19 = v9;
        v20 = 1;
        LOBYTE(ErrorSource) = WheaLogInternalEvent(Src);
      }
    }
  }
  return (char)ErrorSource;
}
