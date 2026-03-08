/*
 * XREFs of MiUpdateCacheAttributeListsForPage @ 0x1402B4948
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x1402B49B4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnBestZeroAttribute @ 0x1402CEAFC (MiPfnBestZeroAttribute.c)
 */

_QWORD *__fastcall MiUpdateCacheAttributeListsForPage(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v9; // edi
  _QWORD *result; // rax
  __int64 v12; // r8
  __int64 v14; // rcx
  int v15; // eax

  v9 = a2;
  if ( (_DWORD)a2 == 3 && a3 )
  {
    result = (_QWORD *)MiPageAttributeBatchChangeNeeded(a1, 1LL);
    if ( (_DWORD)result )
    {
      v14 = *a4;
      *a4 = a1;
    }
    else
    {
      result = a5;
      v14 = *a5;
      *a5 = a1;
    }
    *(_QWORD *)(a1 + 16) = v14;
  }
  else
  {
    result = (_QWORD *)MiPageAttributeBatchChangeNeeded(a1, a2);
    if ( (_DWORD)result )
    {
      if ( a3 )
      {
        v15 = MiPfnBestZeroAttribute(a1, v9, v12);
        a6 = a7;
      }
      result = (_QWORD *)*a6;
      *(_QWORD *)(a1 + 16) = *a6;
      *a6 = a1;
    }
  }
  return result;
}
