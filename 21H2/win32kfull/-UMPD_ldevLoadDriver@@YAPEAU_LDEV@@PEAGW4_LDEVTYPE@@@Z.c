/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C012B4D0
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x1C012B660 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C012B34C (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C012B41C (-UMPDDrvDriverFn@@YAHPEAXPEAH@Z.c)
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1C012B5C4 (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rbx
  void *v8; // [rsp+20h] [rbp-1C8h] BYREF
  int v9[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x388u, 0x706D7547u);
  if ( v4 )
  {
    v8 = 0LL;
    if ( !UMPDDrvEnableDriver(a1, &v8) )
      goto LABEL_6;
    v6 = v8;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[5] = v6;
    *((_DWORD *)v4 + 6) = a2;
    *((_DWORD *)v4 + 7) = 1;
    v4[6] = PsGetCurrentProcessWin32Process(v5);
    if ( !(unsigned int)UMPDDrvDriverFn(v6, v9) || !(unsigned int)UMPD_ldevFillTable((struct _LDEV *)v4, v9) )
    {
LABEL_6:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
