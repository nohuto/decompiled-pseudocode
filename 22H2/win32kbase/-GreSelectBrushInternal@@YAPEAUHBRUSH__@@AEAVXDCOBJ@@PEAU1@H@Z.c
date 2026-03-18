/*
 * XREFs of ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00893C0
 * Callers:
 *     GreSelectBrush @ 0x1C0089360 (GreSelectBrush.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreDCSelectBrush @ 0x1C0089420 (GreDCSelectBrush.c)
 */

__int64 __fastcall GreSelectBrushInternal(struct OBJECT **a1, HBRUSH a2, int a3)
{
  __int64 v3; // rdi
  struct OBJECT *v7; // rbx
  __int64 v8; // rax

  v3 = 0LL;
  if ( a3 )
    return GreDCSelectBrush(*a1, a2);
  v7 = *a1;
  v8 = SGDGetSessionState(a1);
  if ( (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v8 + 24) + 8008LL),
                      v7)
        + 2) & 0xFFFFFFFE) != 0 )
    return GreDCSelectBrush(*a1, a2);
  return v3;
}
