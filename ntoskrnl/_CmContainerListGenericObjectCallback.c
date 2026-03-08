/*
 * XREFs of _CmContainerListGenericObjectCallback @ 0x14085C100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _CmValidateDeviceContainerName @ 0x1406C3EDC (_CmValidateDeviceContainerName.c)
 */

char __fastcall CmContainerListGenericObjectCallback(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  char result; // al

  result = 0;
  if ( a4 )
  {
    if ( (int)CmValidateDeviceContainerName(a1, a2) < 0 )
    {
      return 0;
    }
    else
    {
      result = 1;
      if ( *(_QWORD *)a4 )
        return (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64, _QWORD))a4)(a1, a2, 5LL, *(_QWORD *)(a4 + 8));
    }
  }
  return result;
}
