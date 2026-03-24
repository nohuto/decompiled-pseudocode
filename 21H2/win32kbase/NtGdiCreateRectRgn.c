/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C007FA80
 * Callers:
 *     <none>
 * Callees:
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002AF30 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002E990 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0034A90 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0034C38 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C007FCD4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C007FD00 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C009AF04 (HmgFreeObjectAttr.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C013B974 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 ObjectAttr; // rsi
  struct OBJECT *v7; // rdi
  struct HOBJ__ *inserted; // rbx
  struct OBJECT *v9; // rax
  struct _RECTL v11; // [rsp+20h] [rbp-50h] BYREF
  struct OBJECT *v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-38h]
  _BYTE v14[32]; // [rsp+40h] [rbp-30h] BYREF
  struct OBJECT *v15; // [rsp+60h] [rbp-10h]

  v11.left = a1;
  v11.top = a2;
  v11.right = a3;
  v4 = (a1 & 0xF8000000) + 0x8000000;
  v11.bottom = a4;
  if ( (v4 & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (v5 = (a2 & 0xF8000000) + 0x8000000, (v5 & 0xF7FFFFFF) != 0) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr(v4, v5);
    if ( ObjectAttr )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0LL, 1LL);
      v7 = v12;
      if ( v12 )
      {
        ERECTL::vOrder((ERECTL *)&v11);
        RGNOBJ::vSet((struct _RECTL **)&v12, &v11);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
        inserted = 0LL;
        if ( !v15 )
        {
          inserted = HmgInsertObjectInternal(v7, 1u, 4);
          v9 = v15;
          if ( inserted )
            v9 = v7;
          v15 = v9;
        }
        if ( inserted )
        {
          *((_QWORD *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v7) + 2) = ObjectAttr;
        }
        else
        {
          REGION::vDeleteREGION(v7);
          v7 = 0LL;
          HmgFreeObjectAttr(ObjectAttr);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
      }
      else
      {
        inserted = 0LL;
        EngSetLastError(8u);
      }
      if ( v13 == 1 )
        REGION::vDeleteREGION(v7);
    }
    else
    {
      inserted = 0LL;
      EngSetLastError(8u);
    }
  }
  return inserted;
}
