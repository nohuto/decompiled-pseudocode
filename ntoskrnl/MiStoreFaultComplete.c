/*
 * XREFs of MiStoreFaultComplete @ 0x140659C34
 * Callers:
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiStoreFaultComplete(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  __int64 v3; // rcx
  ULONG_PTR v4; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(BugCheckParameter2 + 88);
  v4 = *(int *)(BugCheckParameter2 + 80);
  if ( (v4 & 0x80000000) != 0LL )
  {
    result = 65537LL;
    if ( (_DWORD)v4 == -1073741275 )
    {
      if ( (*(_QWORD *)(48LL * *(_QWORD *)(BugCheckParameter2 + 320) - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x6000uLL, BugCheckParameter2, v4, 0LL);
    }
    else if ( (_DWORD)v4 != -1073741791 )
    {
      result = 65539LL;
      goto LABEL_9;
    }
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741801;
  }
  else
  {
    result = ((_DWORD)v3 << 16) | 1u;
    *(_QWORD *)(BugCheckParameter2 + 88) = (unsigned __int64)(unsigned __int16)v3 << 12;
  }
LABEL_9:
  *a2 = result;
  return result;
}
