/*
 * XREFs of ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0271060
 * Callers:
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0158A04 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C006AEA4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C0270F00 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::GetTransform(const struct _LUID *a1, struct tagINPUT_TRANSFORM *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct InputObjectMapEntry *Entry; // rax
  unsigned int Transform; // ebx
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = v10[1];
  *(_OWORD *)a2 = v10[0];
  v5 = v10[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v10[3];
  *((_OWORD *)a2 + 2) = v5;
  *((_OWORD *)a2 + 3) = v6;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  Entry = InputObjectMap::FindEntry(a1);
  if ( Entry )
    Transform = CompositionInputObject::QueryTransform(*((CompositionInputObject **)Entry + 3), a2);
  else
    Transform = -1073741275;
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  return Transform;
}
