/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C001C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001C690 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C001CC34 (HmgAllocateObjectAttr.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001CD74 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 ObjectAttr; // rsi
  PVOID v8; // rbx
  __int64 v9; // rcx
  struct HOBJ__ *inserted; // rbp
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // r14
  __int64 ProcessWow64Process; // rax
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  int v17; // esi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v22; // r14
  PVOID Entry; // [rsp+30h] [rbp-28h] BYREF
  struct _RECTL v24; // [rsp+38h] [rbp-20h] BYREF

  v24.left = a1;
  v24.top = a2;
  v24.right = a3;
  v24.bottom = a4;
  v4 = a1 & 0xF8000000;
  if ( v4 && v4 != -134217728
    || (v5 = a4 & 0xF8000000) != 0 && v5 != -134217728
    || (v6 = a3 & 0xF8000000) != 0 && v6 != -134217728
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr();
    if ( ObjectAttr && (RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u), (v8 = Entry) != 0LL) )
    {
      ERECTL::vOrder((ERECTL *)&v24);
      RGNOBJ::vSet((RGNOBJ *)&Entry, &v24);
      inserted = HmgInsertObjectInternal((struct OBJECT *)v8, 1u, 4u);
      if ( inserted )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v9);
        v12 = CurrentProcessWin32Process;
        if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
          KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v14 = *((unsigned int *)v12 + 73);
        v15 = ProcessWow64Process == 0;
        v16 = *((_DWORD *)v12 + 73);
        if ( v15 )
        {
          v22 = ObjectAttr ^ v14;
          LOBYTE(v14) = v16 & 0x3F;
          v18 = __ROR8__(v22, v16 & 0x3F);
        }
        else
        {
          v17 = v14 ^ ObjectAttr;
          LOBYTE(v14) = v16 & 0x1F;
          v18 = (unsigned int)__ROR4__(v17, v16 & 0x1F);
        }
        v19 = SGDGetSessionState(v14);
        *((_QWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleManager **)(*(_QWORD *)(v19 + 24) + 8008LL),
                      (struct OBJECT *)v8)
        + 2) = v18;
        if ( v8 )
          _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
      }
      else
      {
        REGION::vDeleteREGION(v8);
        HmgFreeObjectAttr(ObjectAttr);
      }
    }
    else
    {
      inserted = 0LL;
      EngSetLastError(8u);
    }
    return inserted;
  }
}
