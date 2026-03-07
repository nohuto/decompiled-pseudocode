__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( dword_1C02CA7E0 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C02CA7E0, 1LL) )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      {
        v8 = (__int64 *)NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
                          v7,
                          WPP_MAIN_CB.Dpc.SystemArgument2);
        *this = v8;
        if ( v8 )
        {
          *v8 = (__int64)a2;
          (*this)[5] = 0LL;
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9, v11, v12, v14);
          if ( CurrentThreadWin32Thread )
            _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
          if ( a3 && *(_QWORD *)a3 )
          {
            *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
            (*this)[5] = (__int64)(*this + 3);
          }
          EtwActivityIdControl(3u, (LPGUID)(*this + 1));
          if ( (unsigned int)dword_1C02CA7E0 > 6 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 1LL) )
          {
            v15 = **this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (int)&dword_1C02CA7E0,
              (__int64)&v15);
          }
          if ( qword_1C02D65C8 )
            qword_1C02D65C8(this, *this + 6, _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
        }
      }
    }
  }
  return this;
}
