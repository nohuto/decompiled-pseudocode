/*
 * XREFs of ??0CInternalMilCmdConnection@@AEAA@XZ @ 0x1800DDDA0
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800DDBC0 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::CInternalMilCmdConnection(
        CInternalMilCmdConnection *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CConnection::`vftable';
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  *(_QWORD *)this = &CInternalMilCmdConnection::`vftable';
  *((_DWORD *)this + 19) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 8) = &CChannelTable::`vftable';
  *((_DWORD *)this + 20) = 1;
  *((_DWORD *)this + 18) = 24;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  *((_DWORD *)this + 24) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  *((_BYTE *)this + 212) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 12);
  return this;
}
