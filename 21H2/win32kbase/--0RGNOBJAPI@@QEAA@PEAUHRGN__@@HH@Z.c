/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130
 * Callers:
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027800 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C0027A70 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreGetRegionData @ 0x1C008B460 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C008E120 (EngDeleteRgn.c)
 *     bDeleteRegion @ 0x1C008E1A0 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C008F340 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C0092B40 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C00980D0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C0098230 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C00B76F0 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x1C00CA430 (GreCopyVisRgn.c)
 *     EngEqualRgn @ 0x1C0177A80 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     HmgLock @ 0x1C0021050 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C0021920 (HmgPentryFromPobj.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0026240 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C008E460 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C016B1A4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // edi
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r15
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v19; // r14
  __int64 ProcessWow64Process; // rax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // r14
  char v24; // cl
  int v26; // [rsp+44h] [rbp-54h] BYREF
  int v27; // [rsp+48h] [rbp-50h] BYREF
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF
  struct _RECTL v29; // [rsp+58h] [rbp-40h] BYREF
  __int64 v30; // [rsp+68h] [rbp-30h]

  v28 = (__int64)this;
  v8 = (_QWORD *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v8,
      (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64),
      (__int64)UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic);
  v9 = HmgLock((unsigned int)a2, 4);
  v10 = v9;
  *(_QWORD *)this = v9;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  if ( !v9 )
    return this;
  v11 = 1;
  if ( a4 && *(_WORD *)(v9 + 12) != 1 )
  {
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
    {
      v26 = 0;
      v28 = 0x1000000LL;
      v27 = 82559;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C028D6F0,
        (unsigned int)&unk_1C025BFF6,
        v10,
        v12,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v26);
      v10 = *(_QWORD *)this;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    goto LABEL_34;
  }
  if ( *(_DWORD *)(v9 + 36) )
  {
    if ( !(unsigned int)GrepIsPreviousModeKernel() )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      v11 = 0;
    }
    goto LABEL_32;
  }
  v17 = *(_QWORD *)(HmgPentryFromPobj((_DWORD *)v9) + 16);
  if ( v17 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v16);
    v19 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v21 = *((unsigned int *)v19 + 73);
    v22 = *((_DWORD *)v19 + 73);
    v23 = ProcessWow64Process
        ? v21 ^ (unsigned int)__ROR4__(v17, 32 - (v22 & 0x1F))
        : __ROR8__(v17, 64 - (v22 & 0x3Fu)) ^ v21;
    if ( v23 )
    {
      v29 = *(struct _RECTL *)v23;
      v30 = *(_QWORD *)(v23 + 16);
      v24 = _mm_cvtsi128_si32((__m128i)v29);
      if ( (v24 & 0x11) == 0x10 )
      {
        if ( (v24 & 0x20) == 0 )
          goto LABEL_32;
        if ( v29.top == 1 )
        {
          RGNOBJ::vSet(this);
LABEL_30:
          *(_DWORD *)v23 &= ~0x20u;
          goto LABEL_32;
        }
        if ( v29.top != 2 )
          goto LABEL_32;
        if ( (((v29.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((HIDWORD(v30) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((v30 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((v29.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
        {
          RGNOBJ::vSet((struct _RECTL **)this, (struct _RECTL *)&v29.right);
          goto LABEL_30;
        }
      }
      v11 = 0;
    }
  }
LABEL_32:
  if ( !v11 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_34:
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  return this;
}
