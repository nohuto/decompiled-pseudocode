/*
 * XREFs of _PnpCtxOpenContextNodeBaseKey @ 0x140A5DD70
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x140876FB8 (PiDevCfgEnumDeviceKeys.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406D370C (_PnpCtxGetCachedNodeBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxOpenContextNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  int CachedNodeBaseKey; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v7 = *(_QWORD *)&PiPnpRtlCtx;
  v13 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
  if ( v8 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
  {
    return (unsigned int)-1073741772;
  }
  else
  {
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, (__int64 *)(v8 - 16), a4, &v13);
    if ( CachedNodeBaseKey >= 0 )
    {
      if ( v7 )
        v10 = *(_QWORD *)(v7 + 224);
      else
        v10 = 0LL;
      v11 = SysCtxRegOpenKey(v10, v13, (__int64)&word_1408834C0, 0, 0xF003Fu, a7);
      if ( v11 == -1073741444 )
      {
        return (unsigned int)-1073741595;
      }
      else if ( v11 < 0 )
      {
        return (unsigned int)v11;
      }
    }
  }
  return (unsigned int)CachedNodeBaseKey;
}
