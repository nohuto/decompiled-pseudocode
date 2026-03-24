/*
 * XREFs of GreResetDCInternal @ 0x1C015ABEC
 * Callers:
 *     NtGdiResetDC @ 0x1C015AAA0 (NtGdiResetDC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C00305A8 (_tlgKeywordOn.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0125320 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r13
  BOOL v7; // esi
  int v8; // r12d
  HDC v9; // r15
  unsigned int v10; // edi
  DC *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r13d
  BOOL v18; // r14d
  HDC v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  DC *v22; // rdx
  __int64 v23; // rcx
  void (__fastcall *v24)(_QWORD, _QWORD); // rax
  DC *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  bool v28; // zf
  void (__fastcall *v29)(__int64, _QWORD, _QWORD); // rax
  int v31; // [rsp+28h] [rbp-A1h]
  __int64 v32; // [rsp+58h] [rbp-71h] BYREF
  int v33; // [rsp+60h] [rbp-69h] BYREF
  int v34; // [rsp+64h] [rbp-65h] BYREF
  __int64 v35; // [rsp+68h] [rbp-61h] BYREF
  DC *v36[2]; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v37[32]; // [rsp+80h] [rbp-49h] BYREF
  DC *v38[2]; // [rsp+A0h] [rbp-29h] BYREF
  char v39[104]; // [rsp+B0h] [rbp-19h] BYREF

  v5 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v11 = v38[0];
  if ( !v38[0] )
  {
LABEL_6:
    EngSetLastError(6u);
    goto LABEL_24;
  }
  if ( *((_WORD *)v38[0] + 6) > 1u )
  {
    if ( (unsigned int)dword_1C032A3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3D8, 0x400000000000LL) )
    {
      v33 = 0;
      v34 = v14;
      v35 = 0x1000000LL;
      LODWORD(v32) = 67261;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (int)&unk_1C02F401A,
        v13,
        v14,
        (__int64)&v32,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
    goto LABEL_6;
  }
  v8 = *((_DWORD *)v38[0] + 9) & 0x800;
  if ( v8 )
  {
    DC::bMakeInfoDC(v38[0], 0);
    v11 = v38[0];
  }
  v15 = *((_QWORD *)v11 + 6);
  v16 = *(_QWORD *)(v15 + 1712);
  *(_QWORD *)(v15 + 1712) = 0LL;
  v35 = v16;
  if ( (*((_DWORD *)v38[0] + 9) & 0x100) == 0 && *((_DWORD *)v38[0] + 8) != 1 && (*(_DWORD *)(v15 + 40) & 0x80u) != 0 )
  {
    v17 = *((_DWORD *)v38[0] + 27);
    v18 = *((_QWORD *)v38[0] + 62) != 0LL;
    v7 = v18;
    if ( XDCOBJ::bCleanDC((XDCOBJ *)v38, 0) )
    {
      if ( *(_DWORD *)(v15 + 8) == 1 )
      {
        v19 = (HDC)hdcOpenDCW(&word_1C02E497C, a2, 0LL, 0LL, *(_QWORD *)(v15 + 2560), v35, a4, a5, 0);
        v9 = v19;
        if ( v19 )
        {
          *(_QWORD *)(v15 + 2560) = 0LL;
          DCOBJ::DCOBJ((DCOBJ *)v36, v19);
          v22 = v36[0];
          if ( v36[0] )
          {
            if ( v17 > 0 )
            {
              *((_DWORD *)v36[0] + 27) = *((_DWORD *)v36[0] + 26);
              v22 = v36[0];
            }
            *((_QWORD *)v22 + 260) = *((_QWORD *)v38[0] + 260);
            *((_QWORD *)v38[0] + 260) = 0LL;
            v23 = *((_QWORD *)v38[0] + 261);
            *((_QWORD *)v36[0] + 261) = v23;
            *((_QWORD *)v38[0] + 261) = 0LL;
            v24 = *(void (__fastcall **)(_QWORD, _QWORD))(v15 + 2744);
            if ( v24 )
              v24(*(_QWORD *)(v15 + 1800), *(_QWORD *)(*((_QWORD *)v36[0] + 6) + 1800LL));
            GreAcquireHmgrSemaphore(v23, v22, v20, v21);
            LOBYTE(v31) = 1;
            HmgSwapLockedHandleContents(a1, 0LL, v9, 0LL, v31);
            GreReleaseHmgrSemaphore();
            v10 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          MDCOBJ::~MDCOBJ((MDCOBJ *)v36);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
          v7 = v18;
        }
      }
    }
    v6 = a3;
    v5 = a1;
  }
LABEL_24:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
  if ( v10 )
  {
    bDeleteDCInternal(v9, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v36, v5);
    v25 = v36[0];
    if ( !v36[0] )
    {
      EngSetLastError(6u);
LABEL_27:
      v10 = 0;
LABEL_40:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v36);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
      return v10;
    }
    v32 = *((_QWORD *)v36[0] + 6);
    if ( v7 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v32, 0LL) )
        goto LABEL_27;
      DC::pSurface(v36[0], *(struct SURFACE **)(v32 + 2552));
      v26 = v32;
      v27 = *(_QWORD *)(v32 + 2552);
      v28 = (*(_DWORD *)(v27 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v27 + 112) & 0x2000000;
      if ( !v28 )
        *((_QWORD *)v36[0] + 64) = *(_QWORD *)(*(_QWORD *)(v26 + 2552) + 56LL);
      DC::bSetDefaultRegion(v36[0]);
      v29 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v32 + 2968);
      if ( v29 )
        v29((*(_QWORD *)(v32 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v32 + 2552) != 0LL), 0LL, 0LL);
      else
        v10 = 0;
      v25 = v36[0];
    }
    else
    {
      *v6 = 0;
    }
    if ( v10 && v8 )
      DC::bMakeInfoDC(v25, 1);
    goto LABEL_40;
  }
  return v10;
}
