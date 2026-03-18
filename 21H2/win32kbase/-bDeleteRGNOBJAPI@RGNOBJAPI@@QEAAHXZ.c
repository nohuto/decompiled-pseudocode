/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200
 * Callers:
 *     EngDeleteRgn @ 0x1C008E120 (EngDeleteRgn.c)
 *     bDeleteRegion @ 0x1C008E1A0 (bDeleteRegion.c)
 * Callees:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct OBJECT **this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _DWORD *v4; // rbx
  struct HOBJ__ *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _ENTRY *EntryFromObject; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // r14
  __int64 ProcessWow64Process; // rax
  int v16; // ecx
  unsigned __int64 v17; // rbx
  _DWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v4 = 0LL;
  if ( !*this )
    goto LABEL_8;
  v6 = *(struct HOBJ__ **)*this;
  v18 = 0LL;
  LOBYTE(a3) = 4;
  v19 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v18, v6, a3);
  if ( !v19 )
    goto LABEL_8;
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, *this);
  v4 = (_DWORD *)*((_QWORD *)EntryFromObject + 2);
  if ( !v4 )
    goto LABEL_4;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8, v7, v10, v11);
  v14 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process )
    KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
  ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
  v16 = *((_DWORD *)v14 + 73);
  v17 = ProcessWow64Process ? (unsigned int)__ROR4__((_DWORD)v4, 32 - (v16 & 0x1F)) : __ROR8__(v4, 64 - (v16 & 0x3Fu));
  v4 = (_DWORD *)(*((unsigned int *)v14 + 73) ^ v17);
  if ( !v4 || (v3 = bPEBCacheHandle(2LL, v4, EntryFromObject, &v18, (__int64)this)) == 0 )
LABEL_4:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  if ( v19 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  if ( !v3 )
  {
LABEL_8:
    v3 = RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this);
    if ( v3 )
    {
      REGION::vDeleteREGION((PSLIST_ENTRY)*this);
      *this = 0LL;
      if ( v4 )
        HmgFreeObjectAttr(v4);
    }
  }
  return v3;
}
