/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x1409AEAA0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rcx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess(a1, 0LL, (__int64)v10, a4);
  v6 = a1[1].Affinity.StaticBitmap[24];
  if ( v6 )
  {
    v7 = 0LL;
    v8 = (__int64 *)a1[1].Affinity.StaticBitmap[30];
    if ( v8 )
      v7 = *v8;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 80), 0x60u);
      if ( v7 )
        _InterlockedOr((volatile signed __int32 *)(v7 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 80), 0xFFFFFFBF);
      if ( v7 )
        _InterlockedAnd((volatile signed __int32 *)(v7 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((__int64)v10, 0LL);
}
