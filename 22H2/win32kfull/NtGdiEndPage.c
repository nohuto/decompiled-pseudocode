/*
 * XREFs of NtGdiEndPage @ 0x1C027CB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B55C4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013A550 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C013A590 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C013A5B8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02872C0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288330 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // ecx
  XDCOBJ *v9; // rbx
  int v10; // eax
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v16; // [rsp+78h] [rbp+28h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v14) )
  {
    v5 = v1 & 0x7F0000;
    if ( v5 != 0x10000 && v5 != 6684672 )
    {
      v6 = *(_QWORD *)(v14[0] + 496LL);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v14[0] + 48LL);
        v8 = *(_DWORD *)(v7 + 40);
        if ( (v8 & 1) == 0 )
        {
          if ( *(_QWORD *)(v7 + 2560) )
          {
            v9 = 0LL;
            v16 = 0LL;
            if ( (v8 & 0x8000) != 0 )
            {
              v10 = *(_DWORD *)(v14[0] + 44LL);
              v9 = (XDCOBJ *)v14;
              v16 = (XDCOBJ *)v14;
              if ( (v10 & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v14);
                *(_DWORD *)(v14[0] + 44LL) &= ~2u;
              }
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v7 + 2944) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v7 + 2944))(v6 + 24);
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v16);
                if ( (*(_DWORD *)(v7 + 40) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v14[0] + 36LL) &= ~0x100u;
                  v12 = *(EWNDOBJ **)(v6 + 136);
                  if ( v12 )
                  {
                    GreDeleteWnd(v12);
                    *(_QWORD *)(v6 + 136) = 0LL;
                  }
                  *(_WORD *)(v14[0] + 2096LL) = -1;
                }
                v9 = v16;
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2380);
            }
            if ( v9 )
              XDCOBJ::vSaveAttributesAlways(v9);
          }
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v15);
  return v2;
}
