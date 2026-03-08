/*
 * XREFs of MiPrepareDriverForHotPatch @ 0x140A37BA4
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1406786D8 (RtlGetHotPatchSize.c)
 *     MiLockHotPatchPages @ 0x140A358D8 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x140A35978 (MiLockHotPatchUndoPages.c)
 */

__int64 __fastcall MiPrepareDriverForHotPatch(__int64 a1)
{
  int *v1; // r14
  unsigned int HotPatchSize; // r15d
  unsigned int v4; // ebx
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 v7; // r14
  __int64 *v8; // r13
  __int64 result; // rax
  int v10; // edi
  __int64 v11; // rdx
  int v12; // eax

  v1 = *(int **)(a1 + 32);
  HotPatchSize = RtlGetHotPatchSize(*(_DWORD **)(a1 + 24));
  v4 = 0;
  while ( 1 )
  {
    v10 = *v1;
    if ( !*v1 )
      break;
    if ( v10 < 0 )
      v5 = *(__int64 **)(a1 + 8);
    else
      v5 = *(__int64 **)a1;
    v6 = (__int64 **)(a1 + 8);
    if ( v10 < 0 )
      v6 = (__int64 **)a1;
    v7 = (__int64)(v1 + 1);
    v8 = *v6;
    result = MiLockHotPatchPages(v5, v7, v10 & 0xFFF, HotPatchSize, v10, 0);
    if ( (int)result < 0 )
      return result;
    if ( (v10 & 0xFC000) == 0x5C000 )
    {
      result = MiLockHotPatchPages(v8, v7, v10 & 0xFFF, HotPatchSize, v10, 1u);
      if ( (int)result < 0 )
        return result;
    }
    v1 = (int *)(v7 + 4LL * (v10 & 0xFFF) * HotPatchSize);
  }
  v11 = *(_QWORD *)(a1 + 40);
  if ( !v11 )
    return 0LL;
  v12 = MiLockHotPatchUndoPages(*(__int64 **)a1, v11);
  if ( v12 < 0 )
    return (unsigned int)v12;
  return v4;
}
