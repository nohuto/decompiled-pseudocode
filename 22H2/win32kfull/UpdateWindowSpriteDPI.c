/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C00BD5D8
 * Callers:
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0035D20 (xxxSetLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x1C00701D0 (UpdateWindowMonitor.c)
 *     SetRedirectedWindow @ 0x1C00BCE5C (SetRedirectedWindow.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01E5DFC (xxxEnableNonClientDpiScaling.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C00BD638 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C00BE1D0 (InitializeDPIINFO.c)
 */

__int64 __fastcall UpdateWindowSpriteDPI(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( a2 )
  {
    v3 = a1[5];
    if ( (*(_BYTE *)(v3 + 26) & 8) != 0 )
    {
      v5 = *(unsigned int *)(v3 + 288);
      v9 = 0LL;
      memset(v8, 0, sizeof(v8));
      ((void (__fastcall *)(_OWORD *, __int64, __int64, _QWORD *))InitializeDPIINFO)(v8, v5, a2, a1);
      return GreDwmNotifySpriteDPIChange(v6, *a1, 0LL, v8);
    }
  }
  return result;
}
