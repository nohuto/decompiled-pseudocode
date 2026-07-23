/*
 * XREFs of WheaRemoveErrorSourceDeviceDriver @ 0x14095D2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyA @ 0x140246F94 (RtlStringCchCopyA.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WheaGetErrorSource @ 0x1405BB330 (WheaGetErrorSource.c)
 *     WheaRemoveErrorSource @ 0x14095D100 (WheaRemoveErrorSource.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaRemoveErrorSourceDeviceDriver(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 ErrorSource; // rax
  __int64 v4; // rdi
  signed __int32 v5; // eax
  void *v6; // rcx
  _DWORD Src[8]; // [rsp+20h] [rbp-50h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]

  *(_OWORD *)pszDest = 0LL;
  v10 = 0LL;
  v2 = 0;
  ErrorSource = WheaGetErrorSource(a1);
  v4 = ErrorSource;
  if ( ErrorSource )
  {
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(ErrorSource + 152), -1, 0);
    if ( v5 != -1 )
    {
      if ( v5 )
      {
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[3] = 1;
        Src[7] = 32;
        Src[2] = 64;
        Src[5] = -2147483604;
        Src[4] = 1280201291;
        Src[6] = 2;
        RtlStringCchCopyA(pszDest, 0x20uLL, "RemoveErrorSourceDeviceDriver");
        WheaLogInternalEvent(Src);
        return (unsigned int)-1073740024;
      }
      else
      {
        v6 = *(void **)(v4 + 72);
        if ( v6 )
        {
          ExFreePoolWithTag(v6, 0x41454857u);
          ExFreePoolWithTag(*(PVOID *)(v4 + 144), 0x41454857u);
          *(_QWORD *)(v4 + 72) = 0LL;
          *(_QWORD *)(v4 + 144) = 0LL;
        }
        WheaRemoveErrorSource(a1);
        *(_QWORD *)(v4 + 80) = HalSystemVectorDispatchEntry;
        *(_QWORD *)(v4 + 88) = xHalTimerWatchdogStop;
      }
    }
  }
  return v2;
}
