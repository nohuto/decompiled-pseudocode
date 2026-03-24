/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C01163D8
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x1C01163C0 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1C01164DC (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z.c)
 *     ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C0116570 (-UMPDDrvDriverFn@@YAHPEAXPEAH@Z.c)
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C0116624 (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // esi
  void *v7; // rbx
  void *v9; // [rsp+20h] [rbp-1C8h] BYREF
  int v10[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x388u, 0x706D7547u);
  if ( v4 )
  {
    v9 = 0LL;
    v6 = UMPDDrvEnableDriver(a1, &v9);
    if ( !v6 )
      goto LABEL_6;
    v7 = v9;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[5] = v7;
    *((_DWORD *)v4 + 6) = a2;
    *((_DWORD *)v4 + 7) = 1;
    v4[6] = PsGetCurrentProcessWin32Process(v5);
    if ( (UMPDDrvDriverFn(v7, v10) != 0 ? v6 : 0) == 0 || !(unsigned int)UMPD_ldevFillTable((struct _LDEV *)v4, v10) )
    {
LABEL_6:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
