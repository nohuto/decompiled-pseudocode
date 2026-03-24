/*
 * XREFs of NtGdiStartPage @ 0x1C013A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B5924 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013A940 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C013A980 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C013A9A8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C016B4F4 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288960 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v11; // [rsp+78h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v9)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v5 = *(_QWORD *)(v9[0] + 496LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v9[0] + 48LL);
      if ( *(_QWORD *)(v6 + 2560) )
      {
        if ( (*(_DWORD *)(v6 + 40) & 0x8000) != 0 )
        {
          v11 = (XDCOBJ *)v9;
          if ( (*(_DWORD *)(v9[0] + 44LL) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v9);
            *(_DWORD *)(v9[0] + 44LL) &= ~2u;
          }
          if ( (gUMPDSecurityLevel == 2
             || gUMPDSecurityLevel
             && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4),
                 (unsigned int)bIsProcessLocalSystem(CurrentProcess))
             || *(_QWORD *)(v6 + 2952))
            && (v2 = (*(__int64 (__fastcall **)(__int64))(v6 + 2952))(v5 + 24)) != 0 )
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v11);
            *(_DWORD *)(v9[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v9[0] + 2112LL) = 0;
            *(_DWORD *)(v9[0] + 2116LL) = 0;
          }
          else
          {
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v11);
            bEndDocInternal(a1, 1u, 2u);
          }
          if ( v11 )
            XDCOBJ::vSaveAttributesAlways(v11);
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v2;
}
