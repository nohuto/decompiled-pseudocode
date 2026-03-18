/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C005F920
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C005FAE4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C00A9778 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r15
  void *v4; // rbx
  int v5; // edi
  int v6; // r14d
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  const struct tagTHREADINFO *i; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = (void *)(int)a1;
  v5 = 0;
  v6 = 0;
  Object = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&Object) < 0 )
    goto LABEL_22;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v9 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v8 = -*(_QWORD *)ProcessWin32Process;
    v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v9 )
  {
    for ( i = *(const struct tagTHREADINFO **)(v9 + 320); i; i = (const struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    {
      v6 = InForegroundQueue(i, 1);
      if ( v6 )
        break;
    }
    if ( !v6 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( !*(_DWORD *)(CurrentProcessWin32Process + 892) )
      {
        v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v13 = *(_DWORD *)(v9 + 1092);
        if ( v13 <= (unsigned int)v12 )
          v6 = (unsigned int)v12 - v13 <= 0x1F4;
        if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
        {
          v24 = v9 + 1000;
          v22 = v6;
          v21 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v14,
            (unsigned int)&unk_1C031BC1B,
            v15,
            (unsigned int)&v21,
            (__int64)&v22,
            (__int64)&v24);
        }
      }
    }
    v5 = 1;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = v6;
    ObfDereferenceObject(Object);
  }
  else
  {
LABEL_22:
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v5;
}
