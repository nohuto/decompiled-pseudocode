/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00D2EA0
 * Callers:
 *     <none>
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005D400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(size_t *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  StringCchCopyW(*(unsigned __int16 **)(v2 + 3056), *(unsigned int *)(v2 + 3064), a1);
  if ( gProtocolType )
  {
    *(_DWORD *)(v2 + 1336) = 0;
    *(_DWORD *)(v2 + 1416) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 1340) = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1);
  v4 = *(_QWORD *)(v2 + 1928);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 1573024));
  return result;
}
