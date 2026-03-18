/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     NtUserSendInput @ 0x1C007EAF0 (NtUserSendInput.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     NtUserSetCursorPos @ 0x1C009BCC0 (NtUserSetCursorPos.c)
 *     EditionLLMouseButtonHook @ 0x1C00EA420 (EditionLLMouseButtonHook.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00FDC20 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ProcessHidRawInput @ 0x1C01D11E0 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01D41E0 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01F8300 (NtUserInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0064908 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D08A8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( InputTraceLogging::Enabled(1) )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      v8 = (__int64 *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside, v7);
      *this = v8;
      if ( v8 )
      {
        *v8 = (__int64)a2;
        (*this)[5] = 0LL;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (__int64)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_1C032BE20 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 1LL) )
        {
          v10 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (int)&dword_1C032BE20,
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
