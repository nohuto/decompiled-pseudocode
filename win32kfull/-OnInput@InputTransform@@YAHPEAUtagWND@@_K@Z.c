/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0007904
 * Callers:
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0048A50 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     InputTransformOnInput @ 0x1C0146E00 (InputTransformOnInput.c)
 *     SetManipulationInputTargetTransform @ 0x1C0146E30 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0007A70 (-GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0007CC8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0007E84 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0022210 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D6CC4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C00DE518 (MagpRemoveTransformOutputMagFac.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012DCC4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4444444444444444@Z @ 0x1C01CC804 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

__int64 __fastcall InputTransform::OnInput(struct _EX_PUSH_LOCK **this, struct tagWND *a2)
{
  struct tagINPUT_TRANSFORM *v4; // r8
  struct _EX_PUSH_LOCK *v5; // rbx
  unsigned __int64 *v7; // r9
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // eax
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  int v21; // [rsp+D4h] [rbp-6Ch] BYREF
  int v22; // [rsp+D8h] [rbp-68h] BYREF
  int v23; // [rsp+DCh] [rbp-64h] BYREF
  int v24; // [rsp+E0h] [rbp-60h] BYREF
  int v25; // [rsp+E4h] [rbp-5Ch] BYREF
  int v26; // [rsp+E8h] [rbp-58h] BYREF
  int v27; // [rsp+ECh] [rbp-54h] BYREF
  int v28; // [rsp+F0h] [rbp-50h] BYREF
  int v29; // [rsp+F4h] [rbp-4Ch] BYREF
  __int64 v30; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+100h] [rbp-40h] BYREF
  __int64 v32; // [rsp+108h] [rbp-38h] BYREF
  struct tagWND *v33; // [rsp+110h] [rbp-30h] BYREF
  _BYTE v34[96]; // [rsp+120h] [rbp-20h] BYREF
  int v35; // [rsp+190h] [rbp+50h] BYREF
  struct tagWND *v36; // [rsp+198h] [rbp+58h] BYREF
  int v37; // [rsp+1A0h] [rbp+60h] BYREF
  int v38; // [rsp+1A8h] [rbp+68h] BYREF

  v36 = a2;
  memset_0(v34, 0, 0x40uLL);
  if ( (unsigned int)InputTransform::GetTransform((InputTransform *)this, (const struct tagWND *)v34, v4) )
  {
    MagpRemoveTransformOutputMagFac(v34);
    InputTransform::StoreTransform(
      (InputTransform *)this,
      (struct tagWND *)v34,
      (const struct tagINPUT_TRANSFORM *)&v36,
      v7);
  }
  v5 = this[34];
  if ( !v5 )
  {
    EtwTraceOnInputXformUpdate(*this, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v30, this[34]);
  ClearStaleEntries(v5, (unsigned __int64)a2);
  if ( (*((_DWORD *)v5 + 22) & 1) != 0 )
  {
    v8 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( !v8 )
    {
      EtwTraceOnInputXformUpdate(*this, a2, 0LL);
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v30);
      return 0LL;
    }
    *(_QWORD *)(v8 + 16) = a2;
    v9 = (__int64 *)((char *)v5 + 8);
    *(_OWORD *)(v8 + 24) = *(_OWORD *)((char *)v5 + 24);
    *(_OWORD *)(v8 + 40) = *(_OWORD *)((char *)v5 + 40);
    *(_OWORD *)(v8 + 56) = *(_OWORD *)((char *)v5 + 56);
    *(_OWORD *)(v8 + 72) = *(_OWORD *)((char *)v5 + 72);
    v10 = *((_QWORD *)v5 + 1);
    if ( *(struct _EX_PUSH_LOCK **)(v10 + 8) != (struct _EX_PUSH_LOCK *)((char *)v5 + 8) )
      __fastfail(3u);
    *(_QWORD *)v8 = v10;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v10 + 8) = v8;
    *v9 = v8;
    *((_DWORD *)v5 + 22) &= ~1u;
  }
  EtwTraceOnInputXformUpdate(*this, a2, 1LL);
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) && (unsigned int)dword_1C035C080 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 4LL) )
    {
      v35 = *((_DWORD *)v5 + 21);
      v37 = *((_DWORD *)v5 + 20);
      v38 = *((_DWORD *)v5 + 19);
      v15 = *((_DWORD *)v5 + 18);
      v29 = 0;
      v16 = v15;
      v17 = *((_DWORD *)v5 + 17);
      v18 = *((_DWORD *)v5 + 16);
      v19 = *((_DWORD *)v5 + 15);
      v20 = *((_DWORD *)v5 + 14);
      v21 = *((_DWORD *)v5 + 13);
      v22 = *((_DWORD *)v5 + 12);
      v23 = *((_DWORD *)v5 + 11);
      v24 = *((_DWORD *)v5 + 10);
      v25 = *((_DWORD *)v5 + 9);
      v26 = *((_DWORD *)v5 + 8);
      v27 = *((_DWORD *)v5 + 7);
      v28 = *((_DWORD *)v5 + 6);
      v31 = v13;
      v32 = v14;
      v33 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031D3DC,
        v11,
        v12,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v35);
    }
  }
  ExReleasePushLockExclusiveEx(v30, 0LL);
  KeLeaveCriticalRegion();
  return 1LL;
}
