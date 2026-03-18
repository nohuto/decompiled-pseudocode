/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C0003FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00A8DE0 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0424 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v4; // edi
  int v5; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // r14
  __int64 i; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // r8d
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  Object = 0LL;
  EnterSharedCrit();
  if ( (int)LockProcessByClientId(v3, &Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object), (v7 = ProcessWin32Process) != 0) )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
    {
      v5 = InForegroundQueue((const struct tagTHREADINFO *)i, 1);
      if ( v5 )
        break;
    }
    if ( !v5 && !*(_DWORD *)(PsGetCurrentProcessWin32Process() + 884) )
    {
      v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v10 = *(_DWORD *)(v7 + 1084);
      if ( v10 <= (unsigned int)v9 )
        v5 = (unsigned int)v9 - v10 <= 0x1F4;
      if ( (unsigned int)dword_1C03263C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263C0, 0x400000000000LL) )
      {
        v17 = v7 + 992;
        v15 = v5;
        v14 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v11,
          (unsigned int)&unk_1C02EFA08,
          v12,
          (unsigned int)&v14,
          (__int64)&v15,
          (__int64)&v17);
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
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
