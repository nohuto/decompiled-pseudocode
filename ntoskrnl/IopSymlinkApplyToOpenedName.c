/*
 * XREFs of IopSymlinkApplyToOpenedName @ 0x140945D10
 * Callers:
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 *     IopReplaceSymlinkPath @ 0x1409459F8 (IopReplaceSymlinkPath.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkApplyToOpenedName(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        IRP *a4,
        PVOID P,
        __int16 a6)
{
  void *v6; // r13
  void *Pool2; // r14
  UNICODE_STRING *v13; // rdi
  unsigned int v14; // edx
  unsigned __int16 v15; // dx
  NTSTATUS v16; // esi

  v6 = *(void **)(a1 + 96);
  Pool2 = (void *)ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 16), 1665560393LL);
  if ( !Pool2 )
    return 3221225626LL;
  v13 = (UNICODE_STRING *)(a1 + 88);
  v14 = *(unsigned __int16 *)(a1 + 88);
  if ( v14 > 2
    && *(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * ((unsigned __int64)*(unsigned __int16 *)(a1 + 88) >> 1) - 2) == 92 )
  {
    if ( a3[3] < 2u )
    {
      ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    v13->Length = v14 - 2;
    a3[3] -= 2;
  }
  memmove(P, *(const void **)(a2 + 24), *(unsigned __int16 *)(a2 + 4));
  memmove(
    Pool2,
    (const void *)(*(_QWORD *)(a2 + 24) + *(unsigned __int16 *)(a2 + 4)),
    *(unsigned __int16 *)(a2 + 16) - (unsigned __int64)*(unsigned __int16 *)(a2 + 4));
  *(_QWORD *)(a1 + 96) = Pool2;
  v15 = *(_WORD *)(a2 + 16) - *(_WORD *)(a2 + 4);
  *(_WORD *)(a1 + 90) = v15;
  v13->Length = v15;
  ExFreePoolWithTag(v6, 0);
  v16 = IopReplaceSymlinkPath(
          (const wchar_t *)P,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          a1,
          a3,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          *(_WORD *)(a2 + 4),
          a6);
  if ( v16 < 0 )
    ExFreePoolWithTag(P, 0);
  else
    return (unsigned int)IopSymlinkUpdateECP(a4, (PVOID)a2, 0, v13, *(_WORD *)(a2 + 4), *(_WORD *)(a2 + 2) & 0xFFFE);
  return (unsigned int)v16;
}
