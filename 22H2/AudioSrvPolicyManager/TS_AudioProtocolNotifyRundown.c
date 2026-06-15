/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x18002AE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180025BB0 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800286E8 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18002B478 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TS_AudioProtocolNotifyRundown(struct AUDIOPROTOCOLNOTIFY *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  struct TSSession *v7; // rbp
  __int64 v8; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&CriticalSection);
  v4 = qword_18004FF98;
  while ( 1 )
  {
    v5 = v4;
    v6 = v4;
    if ( !v4 )
      break;
    v3 = v4[2];
    v4 = (_QWORD *)*v4;
    v7 = (struct TSSession *)v6[2];
    if ( !(unsigned int)TsSessionDeleteNotify(v7, a1) )
      goto LABEL_6;
    v3 = 0LL;
  }
  v7 = 0LL;
LABEL_6:
  LeaveCriticalSection(&CriticalSection);
  if ( v7 && *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 4) == 0xFFFF && !*(_DWORD *)(v3 + 32) && !*(_QWORD *)(v3 + 72) )
  {
    EnterCriticalSection(&CriticalSection);
    TList<TSSession>::RemoveAt(v8, v5);
    TSSession::~TSSession((TSSession *)v3);
    operator delete((void *)v3, (const struct std::nothrow_t *)0x160);
    LeaveCriticalSection(&CriticalSection);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
