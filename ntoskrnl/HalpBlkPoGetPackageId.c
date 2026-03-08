/*
 * XREFs of HalpBlkPoGetPackageId @ 0x140528350
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpBlkPoGetPackageId(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (unsigned int)BugCheckParameter2 >= (unsigned int)HalpBlkNumberProcessors
    || (_mm_lfence(),
        result = *(unsigned int *)(*(_QWORD *)(HalpBlkPcr + 8LL * (unsigned int)BugCheckParameter2) + 24LL),
        (_DWORD)result == -1) )
  {
    KeBugCheckEx(0x1DAu, 3uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
