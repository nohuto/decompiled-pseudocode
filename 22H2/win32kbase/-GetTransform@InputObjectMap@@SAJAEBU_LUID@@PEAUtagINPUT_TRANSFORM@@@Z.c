/*
 * XREFs of ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01FB6FC
 * Callers:
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0116FA4 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00481FC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C005DC90 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C01FB580 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::GetTransform(const struct _LUID *a1, struct tagINPUT_TRANSFORM *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct _EX_PUSH_LOCK *v7; // rdx
  struct InputObjectMapEntry *Entry; // rax
  unsigned int Transform; // ebx
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = v11[1];
  *(_OWORD *)a2 = v11[0];
  v5 = v11[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v11[3];
  *((_OWORD *)a2 + 2) = v5;
  *((_OWORD *)a2 + 3) = v6;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, v7);
  Entry = InputObjectMap::FindEntry(a1);
  if ( Entry )
    Transform = CompositionInputObject::QueryTransform(*((CompositionInputObject **)Entry + 3), a2);
  else
    Transform = -1073741275;
  ExReleasePushLockExclusiveEx(v12, 0LL);
  KeLeaveCriticalRegion();
  return Transform;
}
