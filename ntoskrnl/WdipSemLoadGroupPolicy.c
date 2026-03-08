/*
 * XREFs of WdipSemLoadGroupPolicy @ 0x14083195C
 * Callers:
 *     WdipSemCleanStart @ 0x1408318F0 (WdipSemCleanStart.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     WdipSemQueryValueFromRegistry @ 0x140833488 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x140833598 (WdipSemOpenRegistryKey.c)
 *     WdipSemCleanupGroupPolicy @ 0x140834798 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DB298 (WdipSemLoadLocalGroupPolicy.c)
 */

__int64 WdipSemLoadGroupPolicy()
{
  int LocalGroupPolicy; // ebx
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h]

  Handle = 0LL;
  v2 = 0;
  LODWORD(v3) = 4;
  if ( (int)WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WDI") < 0 )
    goto LABEL_2;
  LocalGroupPolicy = WdipSemQueryValueFromRegistry(Handle, &v2, (__int64)&v3);
  if ( LocalGroupPolicy >= 0 )
  {
    if ( !v2 )
      LocalGroupPolicy = -1073741823;
  }
  else
  {
    LocalGroupPolicy = WdipSemLoadLocalGroupPolicy(Handle);
    if ( LocalGroupPolicy < 0 )
    {
      WdipSemCleanupGroupPolicy();
LABEL_2:
      LocalGroupPolicy = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)LocalGroupPolicy;
}
