/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C
 * Callers:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     SetManipulationInputTargetTransform @ 0x1C016C950 (SetManipulationInputTargetTransform.c)
 *     InputTransformOnInput @ 0x1C01F00A0 (InputTransformOnInput.c)
 * Callees:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C00029E0 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0004A24 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0064908 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00AD920 (-GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C00FF758 (MagpRemoveTransformOutputMagFac.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4444444444444444@Z @ 0x1C01EFA74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

__int64 __fastcall InputTransform::OnInput(struct _EX_PUSH_LOCK **this, struct tagWND *a2)
{
  struct tagINPUT_TRANSFORM *v4; // r8
  unsigned int v5; // edi
  struct _EX_PUSH_LOCK *v6; // rbx
  unsigned __int64 *v8; // r9
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // r11
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C4h] [rbp-7Ch] BYREF
  int v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  int v23; // [rsp+D4h] [rbp-6Ch] BYREF
  int v24; // [rsp+D8h] [rbp-68h] BYREF
  int v25; // [rsp+DCh] [rbp-64h] BYREF
  int v26; // [rsp+E0h] [rbp-60h] BYREF
  int v27; // [rsp+E4h] [rbp-5Ch] BYREF
  int v28; // [rsp+E8h] [rbp-58h] BYREF
  int v29; // [rsp+ECh] [rbp-54h] BYREF
  int v30; // [rsp+F0h] [rbp-50h] BYREF
  int v31; // [rsp+F4h] [rbp-4Ch] BYREF
  __int64 v32; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+100h] [rbp-40h] BYREF
  struct tagWND *v34; // [rsp+108h] [rbp-38h] BYREF
  __int64 v35; // [rsp+110h] [rbp-30h] BYREF
  _BYTE v36[96]; // [rsp+120h] [rbp-20h] BYREF
  int v37; // [rsp+190h] [rbp+50h] BYREF
  struct tagWND *v38; // [rsp+198h] [rbp+58h] BYREF
  int v39; // [rsp+1A0h] [rbp+60h] BYREF
  int v40; // [rsp+1A8h] [rbp+68h] BYREF

  v38 = a2;
  memset(v36, 0, 0x40uLL);
  v5 = 0;
  if ( (unsigned int)InputTransform::GetTransform((InputTransform *)this, (const struct tagWND *)v36, v4) )
  {
    MagpRemoveTransformOutputMagFac(v36);
    InputTransform::StoreTransform(
      (InputTransform *)this,
      (struct tagWND *)v36,
      (const struct tagINPUT_TRANSFORM *)&v38,
      v8);
  }
  v6 = this[34];
  if ( !v6 )
  {
    EtwTraceOnInputXformUpdate(*this, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v35, this[34]);
  ClearStaleEntries(v6, (__int64)a2, v9, v10);
  if ( (*((_DWORD *)v6 + 22) & 1) == 0 )
    goto LABEL_6;
  v11 = Win32AllocPoolZInit(88LL, 2020176725LL);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 16) = a2;
    v12 = (__int64 *)((char *)v6 + 8);
    *(_OWORD *)(v11 + 24) = *(_OWORD *)((char *)v6 + 24);
    *(_OWORD *)(v11 + 40) = *(_OWORD *)((char *)v6 + 40);
    *(_OWORD *)(v11 + 56) = *(_OWORD *)((char *)v6 + 56);
    *(_OWORD *)(v11 + 72) = *(_OWORD *)((char *)v6 + 72);
    v13 = *((_QWORD *)v6 + 1);
    if ( *(struct _EX_PUSH_LOCK **)(v13 + 8) != (struct _EX_PUSH_LOCK *)((char *)v6 + 8) )
      __fastfail(3u);
    *(_QWORD *)v11 = v13;
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)(v13 + 8) = v11;
    *v12 = v11;
    *((_DWORD *)v6 + 22) &= ~1u;
LABEL_6:
    EtwTraceOnInputXformUpdate(*this, a2, 1LL);
    if ( InputTraceLogging::Enabled(0) && (unsigned int)dword_1C032BE20 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 4LL) )
      {
        v37 = *((_DWORD *)v6 + 21);
        v39 = *((_DWORD *)v6 + 20);
        v40 = *((_DWORD *)v6 + 19);
        v18 = *((_DWORD *)v6 + 18);
        v19 = *((_DWORD *)v6 + 17);
        v20 = *((_DWORD *)v6 + 16);
        v21 = *((_DWORD *)v6 + 15);
        v22 = *((_DWORD *)v6 + 14);
        v23 = *((_DWORD *)v6 + 13);
        v24 = *((_DWORD *)v6 + 12);
        v25 = *((_DWORD *)v6 + 11);
        v26 = *((_DWORD *)v6 + 10);
        v27 = *((_DWORD *)v6 + 9);
        v28 = *((_DWORD *)v6 + 8);
        v29 = *((_DWORD *)v6 + 7);
        v30 = *((_DWORD *)v6 + 6);
        v31 = 0;
        v32 = v16;
        v33 = v17;
        v34 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C032BE20,
          (unsigned int)&unk_1C02EF949,
          v14,
          v15,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
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
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v37);
      }
    }
    v5 = 1;
    goto LABEL_8;
  }
  EtwTraceOnInputXformUpdate(*this, a2, 0LL);
LABEL_8:
  ExReleasePushLockExclusiveEx(v35, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
