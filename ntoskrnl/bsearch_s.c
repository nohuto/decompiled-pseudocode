/*
 * XREFs of bsearch_s @ 0x1403D4390
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402D851C (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405AFAC8 (RtlGuardCheckLongJumpTarget.c)
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x140674E30 (I_MinCryptIsCertificateHashRevokedV2.c)
 *     RtlVerifyUserUnwindTarget @ 0x1409BF8B0 (RtlVerifyUserUnwindTarget.c)
 *     SeQuerySecureBootPlatformManifest @ 0x1409CDA80 (SeQuerySecureBootPlatformManifest.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall @ 0x140421180 (_guard_check_icall.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  rsize_t v11; // r15
  bool v12; // zf
  char *v13; // r14
  int v14; // eax

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    while ( v9 <= v8 )
    {
      v11 = v7 >> 1;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v12 = (v7 & 1) == 0;
      v7 = v11 - 1;
      if ( !v12 )
        v7 = v11;
      v13 = &v9[SizeOfElements * v7];
      v14 = ((__int64 (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v13);
      if ( !v14 )
        return &v9[SizeOfElements * v7];
      if ( v14 >= 0 )
      {
        v9 = &v13[SizeOfElements];
        v7 = v11;
      }
      else
      {
        v8 = &v13[-SizeOfElements];
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
