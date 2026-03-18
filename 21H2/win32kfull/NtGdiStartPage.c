/*
 * XREFs of NtGdiStartPage @ 0x1C012C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C012CA30 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C012CA70 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C012CA98 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v10; // [rsp+78h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v8)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v4 = *(_QWORD *)(v8[0] + 496LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v8[0] + 48LL);
      if ( *(_QWORD *)(v5 + 2536) )
      {
        if ( (*(_DWORD *)(v5 + 40) & 0x8000) != 0 )
        {
          v10 = (XDCOBJ *)v8;
          if ( (*(_DWORD *)(v8[0] + 44LL) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v8);
            *(_DWORD *)(v8[0] + 44LL) &= ~2u;
          }
          if ( (gUMPDSecurityLevel == 2
             || gUMPDSecurityLevel
             && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3),
                 (unsigned int)bIsProcessLocalSystem(CurrentProcess))
             || *(_QWORD *)(v5 + 2928))
            && (v2 = (*(__int64 (__fastcall **)(__int64))(v5 + 2928))(v4 + 24)) != 0 )
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v10);
            *(_DWORD *)(v8[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v8[0] + 2104LL) = 0;
            *(_DWORD *)(v8[0] + 2108LL) = 0;
          }
          else
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v10);
            bEndDocInternal(a1, 1u, 2);
          }
          if ( v10 )
            XDCOBJ::vSaveAttributesAlways(v10);
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v9);
  return v2;
}
