/*
 * XREFs of _CmCreateDeviceContainerWorker @ 0x14076CDB4
 * Callers:
 *     _CmCreateDeviceContainer @ 0x14076CC54 (_CmCreateDeviceContainer.c)
 * Callees:
 *     _CmRaiseCreateEvent @ 0x14076A8FC (_CmRaiseCreateEvent.c)
 *     _CmOpenDeviceContainerRegKey @ 0x14076D390 (_CmOpenDeviceContainerRegKey.c)
 */

__int64 __fastcall CmCreateDeviceContainerWorker(__int64 a1, __int64 a2, int a3, __int64 *a4, _BYTE *a5, __int16 a6)
{
  int v9; // ebx
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenDeviceContainerRegKey(a1, a2, a3, (_DWORD)a4, a3, 1, (__int64)a4, (__int64)v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 5u, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
