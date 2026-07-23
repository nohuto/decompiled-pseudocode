/*
 * XREFs of _CmCreateDeviceContainerWorker @ 0x140759788
 * Callers:
 *     _CmCreateDeviceContainer @ 0x140759624 (_CmCreateDeviceContainer.c)
 * Callees:
 *     _CmOpenDeviceContainerRegKey @ 0x1406080B0 (_CmOpenDeviceContainerRegKey.c)
 *     _CmRaiseCreateEvent @ 0x14074BC70 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceContainerWorker(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, bool *a5, __int16 a6)
{
  int v9; // ebx
  bool v10; // dl
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenDeviceContainerRegKey(a1, a2, a3, (__int64)a4, a3, 1, (__int64)a4, v12);
    if ( v9 >= 0 )
    {
      v10 = v12[0] == 1;
      *a5 = v12[0] == 1;
      if ( v10 )
        CmRaiseCreateEvent(a1, a2, 5u, *a4);
    }
  }
  return (unsigned int)v9;
}
