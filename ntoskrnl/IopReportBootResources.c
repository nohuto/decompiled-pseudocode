/*
 * XREFs of IopReportBootResources @ 0x140B35AB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x1406F69E8 (PnpDetermineResourceListSize.c)
 *     IopAllocateBootResources @ 0x140804670 (IopAllocateBootResources.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopReportBootResources(unsigned int a1, __int64 a2, _DWORD *a3)
{
  const void *v4; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbx
  size_t v9; // rbp
  void *v10; // rax
  _QWORD *Pool2; // rax
  void *v12; // rcx

  v4 = a3;
  v6 = PnpDetermineResourceListSize(a3);
  if ( !v6 )
    return 0LL;
  if ( !a2 )
  {
    v7 = 0LL;
LABEL_10:
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x20207050u);
    if ( !Pool2 )
    {
      if ( v7 )
      {
        v12 = *(void **)(v7 + 544);
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          *(_QWORD *)(v7 + 544) = 0LL;
        }
      }
      return 3221225626LL;
    }
    if ( v7 )
      v4 = *(const void **)(v7 + 544);
    Pool2[2] = v4;
    Pool2[1] = a2;
    *Pool2 = IopInitReservedResourceList;
    IopInitReservedResourceList = Pool2;
    return 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( (*(_DWORD *)(v7 + 396) & 1) == 0 )
    return IopAllocateBootResources(a1, a2);
  if ( *(_QWORD *)(v7 + 544) )
    goto LABEL_10;
  v9 = v6;
  v10 = (void *)ExAllocatePool2(256LL, v6, 0x20207050u);
  *(_QWORD *)(v7 + 544) = v10;
  if ( v10 )
  {
    memmove(v10, v4, v9);
    goto LABEL_10;
  }
  return 3221225626LL;
}
