/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1C00082F0
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C0006104 (RIMFreeSpecificDev.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00AC470 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0008348 (rimFindHoldingFrame.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     rimReclaimHoldingFrame @ 0x1C0172980 (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v4 = 1;
  do
  {
    result = rimFindHoldingFrame(a1, a2);
    v8 = (_QWORD *)result;
    if ( result )
    {
      rimReclaimHoldingFrame(v7, v6, result);
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      result = Win32FreePool(v8);
    }
    else
    {
      v4 = 0;
    }
  }
  while ( v4 );
  return result;
}
