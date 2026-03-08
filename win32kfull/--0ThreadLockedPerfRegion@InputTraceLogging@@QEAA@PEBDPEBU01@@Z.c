/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80
 * Callers:
 *     NtUserSendInput @ 0x1C0016F20 (NtUserSendInput.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00D69D0 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ProcessHidRawInput @ 0x1C0141BD0 (ProcessHidRawInput.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01AD480 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AD660 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01D65E0 (NtUserInjectTouchInput.c)
 *     NtUserSetCursorPos @ 0x1C01DC530 (NtUserSetCursorPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D6CC4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01AA558 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(1LL) )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      v7 = (__int64 *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      *this = v7;
      if ( v7 )
      {
        *v7 = (__int64)a2;
        (*this)[5] = 0LL;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8);
        if ( CurrentThreadWin32Thread )
          _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (__int64)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_1C035C080 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 1LL) )
        {
          v10 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (int)&dword_1C035C080,
            (__int64)&v10);
        }
        PushW32ThreadLock(
          (__int64)this,
          *this + 6,
          (__int64)_lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
      }
    }
  }
  return this;
}
