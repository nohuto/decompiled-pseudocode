/*
 * XREFs of IopIncrementVpbRefCount @ 0x14023FD50
 * Callers:
 *     IopMountInitializeVpb @ 0x1402B17F0 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x14055373C (IopReferenceVerifyVpb.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     IopInterlockedIncrementUlong @ 0x14023FD94 (IopInterlockedIncrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  _DWORD *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (_DWORD *)(BugCheckParameter2 + 28);
  if ( a2 )
  {
    result = IopInterlockedIncrementUlong(9uLL);
  }
  else
  {
    result = (unsigned int)(*v2 + 1);
    *v2 = result;
  }
  if ( (int)result <= 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)0x150);
      v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(v6, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, (unsigned int)*v2);
  }
  return result;
}
