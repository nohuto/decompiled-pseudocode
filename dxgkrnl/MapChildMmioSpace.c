/*
 * XREFs of MapChildMmioSpace @ 0x1C0391240
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  void *Pool2; // rsi
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rdi

  Pool2 = (void *)ExAllocatePool2(256LL, 48LL, 1265072196LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry1(6LL, 15492LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate channel context",
      15492LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v11 = *(_DWORD *)(a1 + 424);
  if ( (v11 & 0x100) != 0 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
  }
  else
  {
    if ( (v11 & 0x80u) == 0 )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
    v12 = *(_QWORD *)(a1 + 608);
  }
  v13 = (_QWORD *)(v12 + 160);
LABEL_9:
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, void *))qword_1C013D0B0)(
          *v13,
          a2 + 48,
          a3 >> 12,
          a4,
          Pool2);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *a5 = Pool2;
    _InterlockedIncrement(&g_VgpuNumHpaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeHpaToGpaMappings, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbChannelMapChildMmioSpace failed: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0x4B677844u);
  }
  return (unsigned int)v15;
}
