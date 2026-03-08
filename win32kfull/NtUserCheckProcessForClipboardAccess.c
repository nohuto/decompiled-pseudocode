/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C0023DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0023F94 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C00E07C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v4; // edi
  int v5; // r14d
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  const struct tagTHREADINFO *i; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  Object = 0LL;
  EnterSharedCrit();
  if ( (int)LockProcessByClientId(v3, &Object, v6, v7) < 0 )
    goto LABEL_22;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v10 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v9 = -*(_QWORD *)ProcessWin32Process;
    v10 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v10 )
  {
    for ( i = *(const struct tagTHREADINFO **)(v10 + 320); i; i = (const struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    {
      v5 = InForegroundQueue(i, 1);
      if ( v5 )
        break;
    }
    if ( !v5 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( !*(_DWORD *)(CurrentProcessWin32Process + 868) )
      {
        v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v14 = *(_DWORD *)(v10 + 1068);
        if ( v14 <= (unsigned int)v13 )
          v5 = (unsigned int)v13 - v14 <= 0x1F4;
        if ( (unsigned int)dword_1C0357060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357060, 0x400000000000LL) )
        {
          v22 = v10 + 976;
          v20 = v5;
          v19 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v15,
            (unsigned int)&unk_1C031D49B,
            v16,
            (unsigned int)&v19,
            (__int64)&v20,
            (__int64)&v22);
        }
      }
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v5;
    ObfDereferenceObject(Object);
  }
  else
  {
LABEL_22:
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v17);
  return v4;
}
