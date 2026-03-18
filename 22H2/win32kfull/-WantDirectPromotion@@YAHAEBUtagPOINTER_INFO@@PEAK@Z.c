/*
 * XREFs of ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C01562DE
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F8A18 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall WantDirectPromotion(const struct tagPOINTER_INFO *a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rax

  v2 = *((_DWORD *)a1 + 3);
  if ( (v2 & 0x10000) != 0 )
  {
    v4 = 0x10000000;
  }
  else
  {
    if ( (v2 & 0x40004) != 0 )
      return 0LL;
    v4 = 0;
  }
  v5 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v5 )
  {
    v10 = *(struct tagTHREADINFO **)(v5 + 16);
    if ( !v10 )
      v10 = PtiCurrentShared(v7, v6, v8, v9);
    if ( _bittest64((const signed __int64 *)v10 + 81, 0x2Au) )
    {
      *a2 = v4;
      return 1LL;
    }
  }
  return 0LL;
}
