/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0140E60
 * Callers:
 *     NtGdiDoBanding @ 0x1C0140DB0 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02844B0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, struct _POINTL *); // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(__int64, struct _POINTL *); // rdi
  struct _EPROCESS *v14; // rax
  EWNDOBJ *v16; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v17)
    || (v8 = *(_QWORD *)(v17[0] + 496LL)) == 0
    || (v9 = *(_QWORD *)(v17[0] + 48LL), !*(_QWORD *)(v9 + 2536))
    || (*(_DWORD *)(v8 + 112) & 0x2000000) == 0 )
  {
LABEL_22:
    v12 = 0;
    goto LABEL_23;
  }
  if ( a2 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v9 + 3120);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v10 )
    {
      v12 = v10(v8 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n",
          2473);
      v12 = 0;
    }
    a4->cx = *(_DWORD *)(v8 + 56);
    a4->cy = *(_DWORD *)(v8 + 60);
LABEL_15:
    *(struct _POINTL *)(v17[0] + 2104LL) = *a3;
    goto LABEL_23;
  }
  v13 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v9 + 3128);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v14 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7),
          !(unsigned int)bIsProcessLocalSystem(v14)) )
    {
      if ( !v13 )
      {
        if ( gfUMPDDebug )
          DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2500);
        goto LABEL_22;
      }
    }
  }
  v12 = v13(v8 + 24, a3);
  if ( !v12 )
    goto LABEL_23;
  if ( a3->x != -1 )
    goto LABEL_15;
  v12 &= -((*(_DWORD *)(v9 + 40) & 0x8000) != 0);
  if ( v12 )
  {
    *(_DWORD *)(v17[0] + 36LL) &= ~0x100u;
    v16 = *(EWNDOBJ **)(v8 + 136);
    if ( v16 )
    {
      GreDeleteWnd(v16);
      *(_QWORD *)(v8 + 136) = 0LL;
    }
    *(_WORD *)(v17[0] + 2088LL) = 0;
  }
LABEL_23:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
  return v12;
}
