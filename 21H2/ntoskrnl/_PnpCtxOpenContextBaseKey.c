/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x1406997B8
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x140697EF0 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140805024 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v11 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, a2, &v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v5 )
      v8 = *(_QWORD *)(v5 + 224);
    else
      LODWORD(v8) = 0;
    v9 = SysCtxRegOpenKey(v8, v11, (unsigned int)&word_140867F00, 0, a4, a5);
    if ( v9 == -1073741444 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
