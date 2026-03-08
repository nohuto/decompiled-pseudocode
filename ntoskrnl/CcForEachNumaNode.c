/*
 * XREFs of CcForEachNumaNode @ 0x1403BDC9C
 * Callers:
 *     CcInitializePartition @ 0x14039B5F0 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403BAB18 (CcInitializePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403CE3C4 (CcGetActiveWorkerCountInPartition.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcForEachNumaNode(
        __int64 (__fastcall *a1)(__int64, __int64, _QWORD *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  result = a2 + 16;
  v5 = (_QWORD **)(a3 + 48);
  if ( !a3 )
    v5 = (_QWORD **)(a2 + 16);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    result = a1(a2, a3, i - 4, a4);
    if ( !(_BYTE)result )
      break;
  }
  return result;
}
