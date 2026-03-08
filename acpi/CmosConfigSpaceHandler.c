/*
 * XREFs of CmosConfigSpaceHandler @ 0x1C0019B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C0019CC4 (CmosConfigSpaceHandlerWorker.c)
 *     CmosGetOpRegionType @ 0x1C0019D58 (CmosGetOpRegionType.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 */

__int64 __fastcall CmosConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 Pool2; // rax
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rdx
  int OpRegionType; // esi

  Pool2 = ExAllocatePool2(64LL, 72LL, 1181770561LL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a1;
  *(_QWORD *)(Pool2 + 8) = a2;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_DWORD *)(Pool2 + 32) = a6;
  *(_QWORD *)(Pool2 + 40) = a7;
  *(_QWORD *)(Pool2 + 48) = a8;
  *(_DWORD *)(Pool2 + 16) = a3;
  *(_DWORD *)(Pool2 + 20) = a4;
  *(_QWORD *)(Pool2 + 56) = AMLIGetParent(a2);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 104LL) )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  OpRegionType = CmosGetOpRegionType(a2, v15, v13);
  result = 259LL;
  if ( OpRegionType == 259 )
    return result;
  if ( OpRegionType >= 0 )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  (*(void (__fastcall **)(_QWORD))(v13 + 40))(*(_QWORD *)(v13 + 48));
  AMLIDereferenceHandleEx(*(_QWORD *)(v13 + 8));
  AMLIDereferenceHandleEx(*(_QWORD *)(v13 + 56));
  ExFreePoolWithTag((PVOID)v13, 0);
  return (unsigned int)OpRegionType;
}
