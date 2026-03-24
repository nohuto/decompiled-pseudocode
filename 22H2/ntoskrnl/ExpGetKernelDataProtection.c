/*
 * XREFs of ExpGetKernelDataProtection @ 0x140665C80
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1405B2C08 (ExpGetLicenseTamperState.c)
 *     sub_14094D660 @ 0x14094D660 (sub_14094D660.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     sub_140665D38 @ 0x140665D38 (sub_140665D38.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(__int64 a1, _OWORD *a2)
{
  signed __int64 *v4; // rbx
  _OWORD **v5; // rax
  _OWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-28h]
  _OWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v4 = (signed __int64 *)(a1 + 47024);
  ExAcquirePushLockSharedEx(a1 + 47024, 0LL);
  v5 = *(_OWORD ***)(a1 + 47016);
  if ( v5 )
  {
    v9 = *v5;
    v8 = sub_140665D38(&v9);
    if ( v8 >= 0 )
    {
      v6 = v9;
      *a2 = *v9;
      a2[1] = v6[1];
      a2[2] = v6[2];
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v8;
}
