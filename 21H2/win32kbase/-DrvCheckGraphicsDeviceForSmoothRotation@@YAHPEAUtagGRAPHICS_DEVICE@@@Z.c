/*
 * XREFs of ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0170B80
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0171DC0 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0073504 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall DrvCheckGraphicsDeviceForSmoothRotation(struct tagGRAPHICS_DEVICE *a1)
{
  __int16 v2; // ax
  wchar_t *i; // rbx
  __int16 v4; // ax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 0LL;
  v2 = -1;
  if ( !gForceDisconnect )
    v2 = gProtocolType;
  if ( !(unsigned int)GetPrimaryAttachFlags(a1, v2, &v7, &v6) || !v6 )
    return 0LL;
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( a1 != (struct tagGRAPHICS_DEVICE *)i )
    {
      v4 = -1;
      if ( !gForceDisconnect )
        v4 = gProtocolType;
      if ( (unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v4, &v7, &v6) && v6 )
        return 0LL;
    }
  }
  return 1LL;
}
