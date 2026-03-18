/*
 * XREFs of GreResetDCInternal @ 0x1C014BAFC
 * Callers:
 *     NtGdiResetDC @ 0x1C014B9B0 (NtGdiResetDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?Feature_2990973245__private_IsEnabled@@YAHXZ @ 0x1C015DCF4 (-Feature_2990973245__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r15
  BOOL v7; // r14d
  int v8; // r13d
  HDC v9; // r12
  unsigned int v10; // edi
  DC *v11; // rbx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rax
  bool v16; // zf
  BOOL v17; // r15d
  HDC v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  DC *v21; // rdx
  __int64 v22; // rcx
  void (__fastcall *v23)(_QWORD, _QWORD); // rax
  DC *v24; // rcx
  void (__fastcall *v25)(__int64, _QWORD, _QWORD); // rax
  int v27; // [rsp+28h] [rbp-91h]
  __int64 v28; // [rsp+58h] [rbp-61h] BYREF
  int v29; // [rsp+60h] [rbp-59h] BYREF
  int v30; // [rsp+64h] [rbp-55h] BYREF
  __int64 v31; // [rsp+68h] [rbp-51h] BYREF
  DC *v32[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v33[32]; // [rsp+80h] [rbp-39h] BYREF
  DC *v34[2]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v35[88]; // [rsp+B0h] [rbp-9h] BYREF

  v5 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v34, a1);
  v11 = v34[0];
  if ( !v34[0] )
  {
LABEL_6:
    EngSetLastError(6u);
    goto LABEL_24;
  }
  if ( *((_WORD *)v34[0] + 6) > 1u )
  {
    if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v29 = 0;
      v30 = v13;
      v31 = 0x1000000LL;
      LODWORD(v28) = 67261;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C03263F8,
        (unsigned int)&unk_1C02F2504,
        v12,
        v13,
        (__int64)&v28,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29);
    }
    goto LABEL_6;
  }
  v8 = *((_DWORD *)v34[0] + 9) & 0x800;
  if ( v8 )
  {
    DC::bMakeInfoDC(v34[0], 0);
    v11 = v34[0];
  }
  v14 = *((_QWORD *)v11 + 6);
  v15 = *(_QWORD *)(v14 + 1680);
  *(_QWORD *)(v14 + 1680) = 0LL;
  v31 = v15;
  if ( (*((_DWORD *)v34[0] + 9) & 0x100) == 0 && *((_DWORD *)v34[0] + 8) != 1 && (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
  {
    v16 = *((_QWORD *)v34[0] + 62) == 0LL;
    LODWORD(v28) = *((_DWORD *)v34[0] + 27);
    v17 = !v16;
    v7 = v17;
    if ( XDCOBJ::bCleanDC((XDCOBJ *)v34, 0) )
    {
      if ( *(_DWORD *)(v14 + 8) == 1 )
      {
        v18 = (HDC)hdcOpenDCW(&word_1C02E3794, a2, 0LL, 0LL, *(_QWORD *)(v14 + 2536), v31, a4, a5, 0);
        v9 = v18;
        if ( v18 )
        {
          *(_QWORD *)(v14 + 2536) = 0LL;
          DCOBJ::DCOBJ((DCOBJ *)v32, v18);
          v21 = v32[0];
          if ( v32[0] )
          {
            if ( (int)v28 > 0 )
            {
              *((_DWORD *)v32[0] + 27) = *((_DWORD *)v32[0] + 26);
              v21 = v32[0];
            }
            *((_QWORD *)v21 + 259) = *((_QWORD *)v34[0] + 259);
            *((_QWORD *)v34[0] + 259) = 0LL;
            v22 = *((_QWORD *)v34[0] + 260);
            *((_QWORD *)v32[0] + 260) = v22;
            *((_QWORD *)v34[0] + 260) = 0LL;
            v23 = *(void (__fastcall **)(_QWORD, _QWORD))(v14 + 2720);
            if ( v23 )
              v23(*(_QWORD *)(v14 + 1768), *(_QWORD *)(*((_QWORD *)v32[0] + 6) + 1768LL));
            GreAcquireHmgrSemaphore(v22, v21, v19, v20);
            LOBYTE(v27) = 1;
            HmgSwapLockedHandleContents(a1, 0LL, v9, 0LL, v27);
            GreReleaseHmgrSemaphore();
            v10 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          MDCOBJ::~MDCOBJ((MDCOBJ *)v32);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v33);
          v7 = v17;
        }
      }
    }
    v5 = a1;
  }
LABEL_24:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v34);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v35);
  if ( v10 )
  {
    bDeleteDCInternal(v9, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v32, v5);
    v24 = v32[0];
    if ( !v32[0] )
    {
      EngSetLastError(6u);
LABEL_27:
      v10 = 0;
LABEL_44:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v32);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v33);
      return v10;
    }
    v28 = *((_QWORD *)v32[0] + 6);
    if ( !v7 )
    {
      *a3 = 0;
LABEL_42:
      if ( v8 )
        DC::bMakeInfoDC(v24, 1);
      goto LABEL_44;
    }
    if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v28, 0LL) )
      goto LABEL_27;
    DC::pSurface(v32[0], *(struct SURFACE **)(v28 + 2528));
    *a3 = *(_DWORD *)(*(_QWORD *)(v28 + 2528) + 112LL) & 0x2000000;
    if ( (unsigned int)Feature_2990973245__private_IsEnabled() )
    {
      if ( !*a3 )
      {
LABEL_35:
        DC::bSetDefaultRegion(v32[0]);
        goto LABEL_36;
      }
    }
    else if ( !*a3 )
    {
LABEL_36:
      v25 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v28 + 2944);
      if ( v25 )
        v25((*(_QWORD *)(v28 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v28 + 2528) != 0LL), 0LL, 0LL);
      else
        v10 = 0;
      if ( !v10 )
        goto LABEL_44;
      v24 = v32[0];
      goto LABEL_42;
    }
    *((_QWORD *)v32[0] + 64) = *(_QWORD *)(*(_QWORD *)(v28 + 2528) + 56LL);
    goto LABEL_35;
  }
  return v10;
}
