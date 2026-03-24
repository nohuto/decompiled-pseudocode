/*
 * XREFs of ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D4ED8
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D60A0 (xxxProcessHidInput.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002BC4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C00065B0 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0050880 (PostInputMessage.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1C01D4D78 (-DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 */

__int64 __fastcall PostHidInput(struct DEVICEINFO *a1, struct tagQ *a2, struct tagWND *a3, unsigned __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v8; // r12d
  __int64 *HidData; // rax
  __int64 *v10; // rsi
  __int64 v11; // r8

  v5 = *((_DWORD *)a1 + 66);
  v8 = *(unsigned __int16 *)(*((_QWORD *)a1 + 58) + 44LL);
  if ( v5 % v8 )
    return 0LL;
  if ( !(v5 / v8) )
    return 0LL;
  if ( v5 >= 0xFFFFFFF8 )
    return 0LL;
  HidData = (__int64 *)AllocateHidData(*(_QWORD *)a1, 2, v5 + 8, a4, (__int64)a3);
  v10 = HidData;
  if ( !HidData )
    return 0LL;
  *((_DWORD *)HidData + 14) = v8;
  *((_DWORD *)HidData + 15) = v5 / v8;
  memmove(HidData + 8, *(const void **)(*((_QWORD *)a1 + 58) + 24LL), v5);
  InputTraceLogging::RIM::DeliverRawInput(a1, a4 == 1, v11);
  if ( !(unsigned int)PostInputMessage(a2, a3, 0xFFu, a4, *v10, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 0LL) )
  {
    FreeHidData((__int64)v10);
    return 0LL;
  }
  return 1LL;
}
