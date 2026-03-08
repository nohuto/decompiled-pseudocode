/*
 * XREFs of ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00CD950
 * Callers:
 *     GreSelectBrush @ 0x1C00CD8F0 (GreSelectBrush.c)
 * Callees:
 *     GreDCSelectBrush @ 0x1C00457E0 (GreDCSelectBrush.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall GreSelectBrushInternal(struct XDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct OBJECT *v7; // rbx
  __int64 v8; // rax

  v3 = 0LL;
  if ( a3 )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  v7 = *(struct OBJECT **)a1;
  v8 = SGDGetSessionState(a1);
  if ( (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v8 + 24) + 8008LL),
                      v7)
        + 2) & 0xFFFFFFFE) != 0 )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  return v3;
}
