/*
 * XREFs of ACPICMLidWorker @ 0x1C00199B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIButtonEvent @ 0x1C00189F0 (ACPIButtonEvent.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // di
  __int64 result; // rax
  const char *v6; // rcx
  const char *v7; // r8
  __int64 v8; // rdx
  BOOL v9; // edi
  KIRQL v10; // al
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  result = ACPIGet(a1, 1145654367, 268697602, 0, 0, 0LL, 0LL, (__int64)&v11, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = v11 != 0;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    *(_BYTE *)(a1 + 192) = v9;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v10);
    return ACPIButtonEvent(*(_QWORD *)(a1 + 768), (v9 ? 0x80000000 : 4) | (((a2 & 1) + 2) << 18));
  }
  else
  {
    v6 = (const char *)&unk_1C00622D0;
    v7 = (const char *)&unk_1C00622D0;
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(a1 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_dqss(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               0x11u,
               0x18u,
               (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
               result,
               v2,
               v6,
               v7);
  }
  return result;
}
