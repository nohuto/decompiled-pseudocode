/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800E62AC
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800E61A0 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E6644 (--$_Emplace_reallocate@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResource.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443444444@Z @ 0x1800E672C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800E9B88 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??$?4U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801CF3E8 (--$-4U-$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionRep.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        CProcessResourceAttributionReporter *this,
        struct CProcessResourceAttributionReporter::HighResourceUsageReport *a2)
{
  int *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // edi
  int v11; // r12d
  int v12; // r13d
  _DWORD *v13; // rax
  __int64 v14; // r15
  _DWORD *v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  _QWORD *v21; // rax
  _DWORD *v22; // r8
  int v23; // edx
  _QWORD *v24; // rcx
  void *v25; // rcx
  _QWORD *v26; // rdi
  void *v27; // rcx
  int v28; // ecx
  int v29; // r8d
  _QWORD *v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rcx
  int v33; // [rsp+80h] [rbp-39h] BYREF
  int v34; // [rsp+84h] [rbp-35h] BYREF
  int v35; // [rsp+88h] [rbp-31h] BYREF
  int v36; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v37; // [rsp+90h] [rbp-29h] BYREF
  int v38; // [rsp+94h] [rbp-25h] BYREF
  int v39; // [rsp+98h] [rbp-21h] BYREF
  int v40; // [rsp+9Ch] [rbp-1Dh] BYREF
  void *v41; // [rsp+A0h] [rbp-19h] BYREF
  int v42; // [rsp+A8h] [rbp-11h]
  __int64 v43; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-1h] BYREF
  int *v45; // [rsp+C0h] [rbp+7h]
  char *v46; // [rsp+C8h] [rbp+Fh]
  void *v47; // [rsp+D0h] [rbp+17h] BYREF
  char v48; // [rsp+128h] [rbp+6Fh]
  int v49; // [rsp+130h] [rbp+77h]
  int v50; // [rsp+138h] [rbp+7Fh]

  v3 = (int *)*((_QWORD *)a2 + 2);
  v45 = (int *)*((_QWORD *)a2 + 3);
  if ( v3 != v45 )
  {
    v4 = (_QWORD *)((char *)this + 32);
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      v48 = 0;
      v6 = (__int64)(*((_QWORD *)this + 5) - *v4) >> 3;
      while ( (__int64)v6 > 0 )
      {
        if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                                &v5[v6 >> 1],
                                *((_QWORD *)v3 + 1)) )
        {
          v5 += (v6 >> 1) + 1;
          v6 += -1LL - (v6 >> 1);
        }
        else
        {
          v6 >>= 1;
        }
      }
      v7 = v3[23];
      v8 = v3[19];
      v9 = v3[22];
      v10 = v3[21];
      v11 = v3[24];
      v12 = v3[20];
      v49 = v7;
      v50 = v8;
      v42 = v9;
      if ( v5 != *((_QWORD **)this + 5) )
      {
        v13 = (_DWORD *)*v5;
        v14 = *((_QWORD *)v3 + 1);
        if ( *(_QWORD *)*v5 == v14 )
        {
          v48 = 1;
          if ( v10 > v13[2] || v11 > v13[3] || v12 > v13[4] || v7 > v13[5] || v8 > v13[6] || v9 > v13[7] )
          {
            if ( (unsigned int)dword_1803E0B40 > 5 && tlgKeywordOn((__int64)&dword_1803E0B40, 0x400000000000LL) )
            {
              v39 = *v3;
              v40 = v39;
              LODWORD(v41) = v39;
              v33 = v9;
              v34 = v8;
              v35 = v7;
              v36 = v12;
              v37 = v11;
              v38 = v10;
              v43 = v14;
              v44 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v28,
                (unsigned int)&unk_18037C0E1,
                v29,
                v7,
                (__int64)&v44,
                (__int64)&v41,
                (__int64)&v40,
                (__int64)&v39,
                (__int64)&v43,
                (__int64)&v38,
                (__int64)&v37,
                (__int64)&v36,
                (__int64)&v35,
                (__int64)&v34,
                (__int64)&v33);
              v7 = v49;
              v8 = v50;
              v9 = v42;
            }
            *(_DWORD *)(*v5 + 8LL) = 5000
                                   * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 11)
                                    + 1
                                    + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
            *(_DWORD *)(*v5 + 12LL) = 1000
                                    * (((int)((unsigned __int64)(274877907LL * v11) >> 32) >> 6)
                                     + 1
                                     + ((unsigned int)((unsigned __int64)(274877907LL * v11) >> 32) >> 31));
            *(_DWORD *)(*v5 + 16LL) = 10000
                                    * (((int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 12)
                                     + 1
                                     + ((unsigned int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 31));
            *(_DWORD *)(*v5 + 20LL) = 200
                                    * (((int)((unsigned __int64)(1374389535LL * v7) >> 32) >> 6)
                                     + 1
                                     + ((unsigned int)((unsigned __int64)(1374389535LL * v7) >> 32) >> 31));
            *(_DWORD *)(*v5 + 24LL) = 500
                                    * (((int)((unsigned __int64)(274877907LL * v8) >> 32) >> 5)
                                     + 1
                                     + ((unsigned int)((unsigned __int64)(274877907LL * v8) >> 32) >> 31));
            *(_DWORD *)(*v5 + 28LL) = 1000
                                    * (((int)((unsigned __int64)(274877907LL * v9) >> 32) >> 6)
                                     + ((unsigned int)((unsigned __int64)(274877907LL * v9) >> 32) >> 31)
                                     + 1);
          }
          v15 = v3 + 25;
          goto LABEL_14;
        }
      }
      v15 = v3 + 25;
      if ( !v3[25] )
        break;
LABEL_14:
      if ( *v15 && v48 )
      {
        v26 = (_QWORD *)*((_QWORD *)this + 5);
        while ( ++v5 != v26 )
          std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
            v5 - 1,
            v5);
        v27 = *(void **)(*((_QWORD *)this + 5) - 8LL);
        if ( v27 )
          operator delete(v27, 0x20uLL);
        *((_QWORD *)this + 5) -= 8LL;
      }
      v3 += 26;
      v4 = (_QWORD *)((char *)this + 32);
      if ( v3 == v45 )
        return;
    }
    if ( (unsigned int)dword_1803E0B40 > 5 && tlgKeywordOn((__int64)&dword_1803E0B40, 0x400000000000LL) )
    {
      v44 = *((_QWORD *)v3 + 1);
      v35 = *v3;
      v34 = v35;
      v33 = v35;
      LODWORD(v41) = v20;
      v40 = v19;
      v39 = v18;
      v38 = v12;
      v37 = v11;
      v36 = v10;
      v43 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v16,
        (unsigned int)&unk_18037C0E1,
        v17,
        v18,
        (__int64)&v43,
        (__int64)&v33,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v44,
        (__int64)&v36,
        (__int64)&v37,
        (__int64)&v38,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v41);
    }
    v21 = operator new(0x20uLL);
    v22 = v21;
    if ( v21 )
    {
      *v21 = 0LL;
      *((_DWORD *)v21 + 2) = 5000;
      *((_DWORD *)v21 + 3) = 1000;
      *((_DWORD *)v21 + 7) = 1000;
      *((_DWORD *)v21 + 4) = 10000;
      *((_DWORD *)v21 + 5) = 200;
      *((_DWORD *)v21 + 6) = 500;
    }
    else
    {
      v22 = 0LL;
    }
    *(_QWORD *)v22 = *((_QWORD *)v3 + 1);
    v41 = v22;
    v22[2] = 5000
           * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 11)
            + 1
            + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
    v22[3] = 1000
           * (((int)((unsigned __int64)(274877907LL * v11) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v11) >> 32) >> 31));
    v22[4] = 10000
           * (((int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 12)
            + 1
            + ((unsigned int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 31));
    v22[5] = 200
           * (((int)((unsigned __int64)(1374389535LL * v49) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(1374389535LL * v49) >> 32) >> 31));
    v23 = (unsigned __int64)(274877907LL * v42) >> 32;
    v22[6] = 500
           * (((int)((unsigned __int64)(274877907LL * v50) >> 32) >> 5)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v50) >> 32) >> 31));
    v22[7] = 1000 * ((v23 >> 6) + ((unsigned int)v23 >> 31) + 1);
    v24 = (_QWORD *)*((_QWORD *)this + 5);
    if ( v24 == *((_QWORD **)this + 6) )
    {
      std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Emplace_reallocate<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
        (char *)this + 32,
        v5,
        &v41);
      v25 = v41;
      v15 = v3 + 25;
      if ( !v41 )
        goto LABEL_14;
    }
    else
    {
      if ( v5 == v24 )
      {
        *v24 = v22;
        *((_QWORD *)this + 5) += 8LL;
LABEL_47:
        v15 = v3 + 25;
        goto LABEL_14;
      }
      v47 = v22;
      v30 = v24 - 1;
      v46 = (char *)this + 32;
      v31 = *(v24 - 1);
      *(v24 - 1) = 0LL;
      *v24 = v31;
      *((_QWORD *)this + 5) += 8LL;
      while ( v30 != v5 )
      {
        v32 = v30--;
        std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
          v32,
          v30);
      }
      std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
        v5,
        &v47);
      v25 = v47;
      if ( !v47 )
        goto LABEL_47;
    }
    operator delete(v25, 0x20uLL);
    goto LABEL_47;
  }
}
