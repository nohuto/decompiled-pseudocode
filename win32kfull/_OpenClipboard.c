/*
 * XREFs of _OpenClipboard @ 0x1C001062C
 * Callers:
 *     NtUserOpenClipboard @ 0x1C0010250 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CCD80 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  struct tagWINDOWSTATION *v5; // rax
  struct tagWINDOWSTATION *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v5 = CheckClipboardAccess();
    v6 = v5;
    if ( v5 )
    {
      v7 = (_QWORD *)((char *)v5 + 96);
      v8 = *((_QWORD *)v5 + 10);
      if ( a1 == *v7 )
      {
        if ( gptiCurrent == v8 )
          return 1LL;
LABEL_8:
        v12[0] = v7;
        v12[1] = a1;
        HMAssignmentLock(v12, 0LL);
        *((_QWORD *)v6 + 10) = gptiCurrent;
        if ( a2 )
        {
          v9 = *((_QWORD *)v6 + 14);
          v10 = gptiCurrent + 424LL;
          if ( !v9 || *(_QWORD *)v10 != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) )
            v2 = 1;
          *a2 = v2;
          *(_DWORD *)(*(_QWORD *)v10 + 704LL) = *((_DWORD *)v6 + 35);
        }
        return 1LL;
      }
      if ( !v8 )
        goto LABEL_8;
      UserSetLastError(5LL);
      if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          *(_QWORD *)(*((_QWORD *)v6 + 10) + 424LL),
          &unk_1C031D9CF);
    }
  }
  return 0LL;
}
