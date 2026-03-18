/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C008E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025980 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008E64C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C008E678 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 ObjectAttr; // rdi
  struct _SLIST_ENTRY *v5; // rsi
  struct HOBJ__ *inserted; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // r14
  __int64 ProcessWow64Process; // rax
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // r14
  struct _RECTL v19; // [rsp+30h] [rbp-50h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+48h] [rbp-38h]
  _BYTE v22[32]; // [rsp+50h] [rbp-30h] BYREF
  struct _SLIST_ENTRY *v23; // [rsp+70h] [rbp-10h]

  v19.left = a1;
  v19.top = a2;
  v19.right = a3;
  v19.bottom = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr();
    if ( ObjectAttr )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&ListEntry, 0LL, 1);
      v5 = ListEntry;
      if ( ListEntry )
      {
        ERECTL::vOrder((ERECTL *)&v19);
        RGNOBJ::vSet((struct _RECTL **)&ListEntry, &v19);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
        inserted = 0LL;
        if ( v23 || (inserted = HmgInsertObjectInternal((struct OBJECT *)v5, 1u, 4)) == 0LL )
        {
          REGION::vDeleteREGION(v5);
          v5 = 0LL;
          HmgFreeObjectAttr(ObjectAttr);
        }
        else
        {
          v23 = v5;
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8, v7, v9, v10);
          v12 = CurrentProcessWin32Process;
          if ( !CurrentProcessWin32Process )
            KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v14 = *((unsigned int *)v12 + 73);
          v15 = ProcessWow64Process == 0;
          v16 = *((_DWORD *)v12 + 73);
          if ( v15 )
            v17 = __ROR8__(ObjectAttr ^ v14, v16 & 0x3F);
          else
            v17 = (unsigned int)__ROR4__(v14 ^ ObjectAttr, v16 & 0x1F);
          *((_QWORD *)GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)gpHandleManager,
                        (struct OBJECT *)v5)
          + 2) = v17;
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      }
      else
      {
        inserted = 0LL;
        EngSetLastError(8u);
      }
      if ( v21 == 1 )
        REGION::vDeleteREGION(v5);
    }
    else
    {
      inserted = 0LL;
      EngSetLastError(8u);
    }
  }
  return inserted;
}
