/*
 * XREFs of _CmCreateInstallerClassWorker @ 0x140A5E2B0
 * Callers:
 *     _CmCreateInstallerClass @ 0x140A5E144 (_CmCreateInstallerClass.c)
 * Callees:
 *     _CmOpenInstallerClassRegKey @ 0x1406C4ED8 (_CmOpenInstallerClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x14087BC44 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInstallerClassWorker(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5, __int16 a6)
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
    v9 = CmOpenInstallerClassRegKey(a1, a2, a3, (__int64)a4, a3, 1, (__int64)a4, (__int64)v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 2u, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
