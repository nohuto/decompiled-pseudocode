/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C0085D10
 * Callers:
 *     <none>
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001DEE0 (DrvUpdateGraphicsDeviceList.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0085D74 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(unsigned __int16 *a1)
{
  __int64 result; // rax

  StringCchCopyW((unsigned __int16 *)qword_1C0252288, (unsigned int)dword_1C0252290, a1);
  if ( gProtocolType )
  {
    gcRemoteNextGlobalDeviceNumber = 0;
    gcRemoteNextMirrorDriverDeviceNumber = 0;
  }
  else
  {
    gcLocalNextGlobalDeviceNumber = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393256);
  return result;
}
