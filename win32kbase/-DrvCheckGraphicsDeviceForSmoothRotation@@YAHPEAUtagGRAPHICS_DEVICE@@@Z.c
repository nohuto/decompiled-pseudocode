/*
 * XREFs of ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C018D984
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F15C (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0023F7C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall DrvCheckGraphicsDeviceForSmoothRotation(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rsi
  __int16 v3; // ax
  __int64 i; // rbx
  __int16 v5; // ax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v7 = 0;
  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = -1;
  if ( !*(_DWORD *)(v2 + 1292) )
    v3 = gProtocolType;
  if ( !(unsigned int)GetPrimaryAttachFlags(a1, v3, &v8, &v7) || !v7 )
    return 0LL;
  for ( i = *(_QWORD *)(v2 + 1264); i; i = *(_QWORD *)(i + 128) )
  {
    if ( a1 != (struct tagGRAPHICS_DEVICE *)i )
    {
      v5 = -1;
      if ( !*(_DWORD *)(v2 + 1292) )
        v5 = gProtocolType;
      if ( (unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v5, &v8, &v7) && v7 )
        return 0LL;
    }
  }
  return 1LL;
}
