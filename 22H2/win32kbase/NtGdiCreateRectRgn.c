/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C008A780
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C008A91C (HmgAllocateObjectAttr.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008AA5C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A68 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  struct HOBJ__ *v7; // rdi
  __int64 ObjectAttr; // rsi
  struct OBJECT *v9; // rbx
  struct HOBJ__ *inserted; // r15
  __int64 v11; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // r14
  __int64 ProcessWow64Process; // rax
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // eax
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rdi
  PVOID Entry; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v24; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v25[32]; // [rsp+48h] [rbp-28h] BYREF
  struct OBJECT *v26; // [rsp+68h] [rbp-8h]

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
    v7 = 0LL;
    ObjectAttr = HmgAllocateObjectAttr();
    if ( ObjectAttr
      && (Entry = 0LL, RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u), (v9 = (struct OBJECT *)Entry) != 0LL) )
    {
      ERECTL::vOrder((ERECTL *)&v24);
      RGNOBJ::vSet((RGNOBJ *)&Entry, &v24);
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
      inserted = 0LL;
      if ( v26 || (inserted = HmgInsertObjectInternal(v9, 1u, 4)) == 0LL )
      {
        v7 = inserted;
        REGION::vDeleteREGION((unsigned __int64)v9);
        HmgFreeObjectAttr(ObjectAttr);
      }
      else
      {
        v26 = v9;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
        v13 = CurrentProcessWin32Process;
        if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
          KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v15 = *((unsigned int *)v13 + 73);
        v16 = ProcessWow64Process == 0;
        v17 = *((_DWORD *)v13 + 73);
        if ( v16 )
        {
          v22 = ObjectAttr ^ v15;
          LOBYTE(v15) = v17 & 0x3F;
          v19 = __ROR8__(v22, v17 & 0x3F);
        }
        else
        {
          v18 = v15 ^ ObjectAttr;
          LOBYTE(v15) = v17 & 0x1F;
          v19 = (unsigned int)__ROR4__(v18, v17 & 0x1F);
        }
        v20 = SGDGetSessionState(v15);
        *((_QWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v20 + 24) + 8008LL),
                      v9)
        + 2) = v19;
        v7 = inserted;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v7;
}
