/*
 * XREFs of ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180171850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180049E7C (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18007FCF4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@TestCursorTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18014057C (-Provider@TestCursorTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180171778 (-GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA-AW4SuppressionPolicy@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorSuppressionProcessor::OnHitTest(
        CursorSuppressionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int64 *); // rbx
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64 *); // rdi
  void (__fastcall *v16)(__int64, _QWORD, _QWORD); // rbx
  _QWORD *v17; // rax
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct tagPOINT Point; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  volatile signed __int32 *v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    GetCursorPos(&Point);
    if ( *((_DWORD *)this + 20) != 1 )
    {
LABEL_16:
      *(struct tagPOINT *)((char *)this + 84) = Point;
      return 0LL;
    }
    if ( *((_DWORD *)this + 21) != Point.x || *((_DWORD *)this + 22) != Point.y )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 184LL) + 8LL;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
      v10 = *(volatile signed __int32 **)(v8 + 104);
      if ( v10 )
      {
        _InterlockedIncrement(v10 + 2);
        v10 = *(volatile signed __int32 **)(v8 + 104);
      }
      v11 = *(_QWORD *)(v8 + 96);
      v25 = v11;
      v26 = v10;
      if ( v11 )
      {
        v28 = 0LL;
        v27 = 0LL;
        v12 = *((_QWORD *)this + 8);
        v13 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL);
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v28);
        if ( v13(v12, &v28) >= 0 )
        {
          v14 = v28;
          v15 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 40LL);
          Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v27);
          if ( v15(v14, &v27) >= 0 )
          {
            v16 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL);
            v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 40LL))(v27, v24);
            v16(v11, *v17, 0LL);
          }
        }
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v28);
      }
      *((_DWORD *)this + 20) = 2;
      v18 = TestCursorTraceLogging::Provider(v9);
      if ( *(_DWORD *)v18 > 4u )
      {
        v23 = (__int64)L"NotSuppressed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (__int64)v18,
          (unsigned __int8 *)dword_1801D23C1,
          v19,
          v20,
          (const wchar_t **)&v23);
      }
      InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((_DWORD *)this + 20));
      if ( v10 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
      goto LABEL_16;
    }
  }
  else if ( (*(_BYTE *)a2 & 0x18) != 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 6) != 0 )
    {
      if ( !(unsigned int)CursorSuppressionProcessor::GetCursorSuppressionPolicyFromInputSites(
                            (__int64)this,
                            (__int64 **)(*((_QWORD *)a3 + 22) + 8LL)) )
        *(_DWORD *)a4 = 3;
    }
    else
    {
      *(_DWORD *)a4 = 3;
    }
  }
  return 0LL;
}
