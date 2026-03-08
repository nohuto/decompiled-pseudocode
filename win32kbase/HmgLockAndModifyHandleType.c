/*
 * XREFs of HmgLockAndModifyHandleType @ 0x1C001D290
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C001D190 (GreMakeBitmapNonStock.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C001D300 (HmgModifyHandleType.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0048AE0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall HmgLockAndModifyHandleType(struct OBJECT *a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v3 = 1;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)v6, a1, 1, 0, 0);
  v4 = v7;
  if ( v7 )
  {
    HmgModifyHandleType(a2);
    HANDLELOCK::vUnlock((HANDLELOCK *)v6);
    v4 = v7;
  }
  else
  {
    v3 = 0;
  }
  if ( v4 )
    HANDLELOCK::vUnlock((HANDLELOCK *)v6);
  return v3;
}
