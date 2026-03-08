/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00BAEC0
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00BD1C4 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00BB0E8 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Create@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00BD294 (-Create@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C011D930 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C0125708 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C0125930 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(HANDLE Handle)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  PVOID *v7; // rsi
  NTSTATUS v8; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v12);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v11);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  if ( Handle )
  {
    v6 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Create();
    *(_QWORD *)(v4 + 23472) = v6;
    v7 = (PVOID *)(v4 + 23496);
    if ( v6
      && (Object = 0LL,
          v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL),
          *v7 = Object,
          v8 >= 0) )
    {
      ++*(_QWORD *)(v4 + 23488);
      v2 = 1;
      *(_WORD *)(v4 + 23536) = 257;
    }
    else
    {
      UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
      *v7 = 0LL;
    }
  }
  else if ( !*(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v5) + 32) + 23560LL) )
  {
    KeSetEvent(*(PRKEVENT *)(v4 + 23552), 0, 0);
    if ( gpidLogon )
      PostWinlogonMessage(3LL, 4LL);
  }
  KeSetEvent(*(PRKEVENT *)(v4 + 23528), 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
  return v2;
}
