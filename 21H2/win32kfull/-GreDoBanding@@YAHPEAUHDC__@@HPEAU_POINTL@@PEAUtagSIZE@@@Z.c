/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0152880
 * Callers:
 *     NtGdiDoBanding @ 0x1C01527D0 (NtGdiDoBanding.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B5924 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02878F0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288960 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, struct _POINTL *); // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(__int64, struct _POINTL *); // rdi
  struct _EPROCESS *v15; // rax
  EWNDOBJ *v17; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v18)
    || (v9 = *(_QWORD *)(v18[0] + 496LL)) == 0
    || (v10 = *(_QWORD *)(v18[0] + 48LL), !*(_QWORD *)(v10 + 2560))
    || (*(_DWORD *)(v9 + 112) & 0x2000000) == 0 )
  {
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  if ( a2 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v10 + 3144);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v11 )
    {
      v13 = v11(v9 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n",
          2484);
      v13 = 0;
    }
    a4->cx = *(_DWORD *)(v9 + 56);
    a4->cy = *(_DWORD *)(v9 + 60);
LABEL_15:
    *(struct _POINTL *)(v18[0] + 2112LL) = *a3;
    goto LABEL_23;
  }
  v14 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v10 + 3152);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v15 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8),
          !(unsigned int)bIsProcessLocalSystem(v15)) )
    {
      if ( !v14 )
      {
        if ( gfUMPDDebug )
          DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2511);
        goto LABEL_22;
      }
    }
  }
  v13 = v14(v9 + 24, a3);
  if ( !v13 )
    goto LABEL_23;
  if ( a3->x != -1 )
    goto LABEL_15;
  v13 &= -((*(_DWORD *)(v10 + 40) & 0x8000) != 0);
  if ( v13 )
  {
    *(_DWORD *)(v18[0] + 36LL) &= ~0x100u;
    v17 = *(EWNDOBJ **)(v9 + 136);
    if ( v17 )
    {
      GreDeleteWnd(v17);
      *(_QWORD *)(v9 + 136) = 0LL;
    }
    *(_WORD *)(v18[0] + 2096LL) = 0;
  }
LABEL_23:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  return v13;
}
