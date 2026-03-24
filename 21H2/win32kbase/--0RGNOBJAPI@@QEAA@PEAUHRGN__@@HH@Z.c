/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50
 * Callers:
 *     bDeleteRegion @ 0x1C001C640 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C001F660 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0034520 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C00347A0 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00362B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003809C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreDeleteObject @ 0x1C0038500 (GreDeleteObject.c)
 *     GreOffsetRgn @ 0x1C0039190 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C0039860 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C007FC00 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0080BB0 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C00849A0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C0085BF0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C0093D80 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C00A7980 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x1C00BB990 (GreCopyVisRgn.c)
 *     EngDeleteRgn @ 0x1C014B7B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014B830 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C029A0FC (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C002B180 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     PushThreadGuardedObject @ 0x1C002CCA0 (PushThreadGuardedObject.c)
 *     HmgLock @ 0x1C002D9E0 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C002E5D0 (HmgPentryFromPobj.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00C917C (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C013E1F4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ebx
  int v12; // r9d
  __int64 v13; // rdi
  char v14; // cl
  int v16; // [rsp+44h] [rbp-54h] BYREF
  int v17; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF
  struct _RECTL v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]

  v18[1] = this;
  *(_QWORD *)this = 0LL;
  v8 = (char *)this + 8;
  *(_OWORD *)v8 = 0LL;
  *((_OWORD *)v8 + 1) = 0LL;
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
    if ( (unsigned int)dword_1C024A250 > 5 && tlgKeywordOn((__int64)&dword_1C024A250, 0x400000000000LL) )
    {
      v16 = 0;
      v18[0] = 0x1000000LL;
      v17 = 82559;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C024A250,
        (unsigned int)&unk_1C021A251,
        v10,
        v12,
        (__int64)&v17,
        (__int64)v18,
        (__int64)&v16);
      v10 = *(_QWORD *)this;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    goto LABEL_26;
  }
  if ( !*(_DWORD *)(v9 + 36) )
  {
    v13 = *(_QWORD *)(HmgPentryFromPobj((_DWORD *)v9) + 16);
    if ( !v13 )
      goto LABEL_24;
    v19 = *(struct _RECTL *)v13;
    v20 = *(_QWORD *)(v13 + 16);
    v14 = _mm_cvtsi128_si32((__m128i)v19);
    if ( (v14 & 0x11) == 0x10 )
    {
      if ( (v14 & 0x20) == 0 )
        goto LABEL_24;
      if ( v19.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_22:
        *(_DWORD *)v13 &= ~0x20u;
        goto LABEL_24;
      }
      if ( v19.top != 2 )
        goto LABEL_24;
      if ( (((v19.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v20) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v20 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v19.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet((struct _RECTL **)this, (struct _RECTL *)&v19.right);
        goto LABEL_22;
      }
    }
    v11 = 0;
    goto LABEL_24;
  }
  if ( !(unsigned int)GrepIsPreviousModeKernel() )
    v11 = 0;
LABEL_24:
  if ( !v11 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_26:
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  return this;
}
