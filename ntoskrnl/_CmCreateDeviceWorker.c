/*
 * XREFs of _CmCreateDeviceWorker @ 0x1407893E0
 * Callers:
 *     _CmCreateDevice @ 0x140789278 (_CmCreateDevice.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _CmRaiseCreateEvent @ 0x14087BC44 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceWorker(__int64 a1, __int64 a2, int a3, _QWORD *a4, _BYTE *a5, __int16 a6)
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
    v9 = CmOpenDeviceRegKey(a1, a2, 16, 0, a3, 1, (__int64)a4, v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 1LL, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
