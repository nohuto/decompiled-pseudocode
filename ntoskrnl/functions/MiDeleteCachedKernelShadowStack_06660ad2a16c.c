PSLIST_ENTRY __fastcall MiDeleteCachedKernelShadowStack(union _SLIST_HEADER *a1, struct _SLIST_ENTRY *a2, int a3)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)MiDeleteKernelShadowStack((((unsigned __int64)a2[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
  if ( a3 )
    return RtlpInterlockedPushEntrySList(a1 + 29, a2);
  return result;
}
