/*
 * XREFs of ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C017E210
 * Callers:
 *     GreSelectPen @ 0x1C017E5A0 (GreSelectPen.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall GreSelectPenInternal(DC **a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct OBJECT *v6; // rbx
  __int64 v7; // rax

  v3 = 0LL;
  if ( a3 )
    return GreDCSelectPen(*a1, a2);
  v6 = *a1;
  v7 = SGDGetSessionState(a1);
  if ( (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v7 + 24) + 8008LL),
                      v6)
        + 2) & 0xFFFFFFFE) != 0 )
    return GreDCSelectPen(*a1, a2);
  return v3;
}
