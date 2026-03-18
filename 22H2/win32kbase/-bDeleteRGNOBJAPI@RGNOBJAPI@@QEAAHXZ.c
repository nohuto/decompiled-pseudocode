/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008AFB0
 * Callers:
 *     EngDeleteRgn @ 0x1C008A130 (EngDeleteRgn.c)
 * Callees:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0049F04 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C008B090 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct HOBJ__ **this)
{
  unsigned int v1; // edi
  _DWORD *v2; // rbx
  struct HOBJ__ *v4; // rdx
  __int64 v5; // rcx
  struct OBJECT *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _ENTRY *EntryFromObject; // rbp
  __int64 v10; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // r14
  __int64 ProcessWow64Process; // rax
  int v15; // ecx
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this
    || (v4 = *(struct HOBJ__ **)*this, v17 = 0LL, v18 = 0, HANDLELOCK::bLockHobj((HANDLELOCK *)&v17, v4, 4u), !v18) )
  {
LABEL_9:
    v1 = RGNOBJAPI::bDeleteHandle(this);
    if ( v1 )
    {
      REGION::vDeleteREGION((unsigned __int64)*this);
      *this = 0LL;
      if ( v2 )
        HmgFreeObjectAttr(v2);
    }
    return v1;
  }
  v6 = *this;
  v7 = SGDGetSessionState(v5);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v7 + 24) + 8008LL),
                      v6);
  v10 = *((_QWORD *)EntryFromObject + 2);
  if ( !v10 )
    goto LABEL_4;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
  v13 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_4:
    v2 = 0LL;
LABEL_5:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
    goto LABEL_6;
  }
  ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
  v15 = *((_DWORD *)v13 + 73);
  if ( ProcessWow64Process )
    v16 = (unsigned int)__ROR4__(v10, 32 - (v15 & 0x1F));
  else
    v16 = __ROR8__(v10, 64 - (v15 & 0x3Fu));
  v2 = (_DWORD *)(*((unsigned int *)v13 + 73) ^ v16);
  if ( !v2 )
    goto LABEL_5;
  v1 = bPEBCacheHandle(2LL, v2, EntryFromObject, (__int64)&v17, (__int64)this);
  if ( !v1 )
    goto LABEL_5;
LABEL_6:
  if ( v18 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  if ( !v1 )
    goto LABEL_9;
  return v1;
}
