/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013A088
 * Callers:
 *     NtGdiStartDoc @ 0x1C01399A0 (NtGdiStartDoc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C00305A8 (_tlgKeywordOn.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090784 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     GreExtEscape @ 0x1C00A8DB0 (GreExtEscape.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0125320 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013A550 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C013A590 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C013A5B8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288330 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 (__fastcall *v18)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v20; // edi
  DC *v21; // rcx
  char v23[8]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1h] BYREF
  int v25; // [rsp+58h] [rbp+7h] BYREF
  XDCOBJ *v26; // [rsp+60h] [rbp+Fh] BYREF
  DC *v27[6]; // [rsp+68h] [rbp+17h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v27) )
  {
    if ( *((_WORD *)v27[0] + 6) != 1 )
    {
      if ( (unsigned int)dword_1C032A3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3D8, 0x400000000000LL) )
      {
        *(_DWORD *)v23 = 0;
        LODWORD(v24) = v12;
        v26 = (XDCOBJ *)0x1000000;
        v25 = 74780;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          (int)&unk_1C02F401A,
          v10,
          v11,
          (__int64)&v25,
          (__int64)&v26,
          (__int64)&v24,
          (__int64)v23);
      }
      goto LABEL_13;
    }
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v13 = *((_QWORD *)v27[0] + 6);
      v24 = v13;
      v14 = *(_DWORD *)(v13 + 40);
      if ( (v14 & 1) == 0 && *(_QWORD *)(v13 + 2560) && !*((_DWORD *)v27[0] + 8) && !*((_QWORD *)v27[0] + 62) )
      {
        if ( (v14 & 0x8000) == 0 )
        {
LABEL_13:
          v8 = -1;
          goto LABEL_36;
        }
        if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v24, 0LL) )
        {
          v15 = v24;
          *a3 = *(_DWORD *)(*(_QWORD *)(v24 + 2552) + 112LL) & 0x2000000;
          DC::pSurface(v27[0], *(struct SURFACE **)(v15 + 2552));
          if ( *a3 )
            *((_QWORD *)v27[0] + 64) = *(_QWORD *)(*(_QWORD *)(v24 + 2552) + 56LL);
          DC::bSetDefaultRegion(v27[0]);
          v26 = 0LL;
          v18 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v24 + 2968);
          if ( (*(_DWORD *)(v24 + 40) & 0x8000) != 0 )
          {
            v26 = (XDCOBJ *)v27;
            if ( (*((_DWORD *)v27[0] + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v27);
              *((_DWORD *)v27[0] + 11) &= ~2u;
            }
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v16, v17),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || v18 )
          {
            v20 = v18(
                    (*(_QWORD *)(v24 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v24 + 2552) != 0LL),
                    a2->lpszDocName,
                    a4);
          }
          else
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n",
                1755);
            v20 = 0;
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v26);
          v21 = v27[0];
          if ( *((_DWORD *)v27[0] + 525) != -1 )
          {
            v25 = *((_DWORD *)v27[0] + 525);
            GreExtEscape(a1, 17, 4, (char *)&v25, 0, 0LL);
            *((_DWORD *)v27[0] + 525) = -1;
            v21 = v27[0];
          }
          if ( (*((_DWORD *)v21 + 9) & 0x400) != 0 )
          {
            *(_WORD *)v23 = 1;
            GreExtEscape(a1, 33, 2, v23, 0, 0LL);
            *((_DWORD *)v27[0] + 9) &= ~0x400u;
            v21 = v27[0];
          }
          if ( v20 )
          {
            v8 = a4;
            *((_DWORD *)v21 + 27) = *((_DWORD *)v21 + 26);
          }
          if ( v26 )
            XDCOBJ::vSaveAttributesAlways(v26);
        }
      }
    }
  }
LABEL_36:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v8;
}
