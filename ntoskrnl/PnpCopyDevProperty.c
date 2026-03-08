/*
 * XREFs of PnpCopyDevProperty @ 0x140807610
 * Callers:
 *     PnpCopyDevPropertyArray @ 0x140807540 (PnpCopyDevPropertyArray.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpFreeDevProperty @ 0x1406CC4E0 (PnpFreeDevProperty.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCopyDevProperty(__int64 a1, __int64 a2, __int64 a3)
{
  int PWSTR; // edi
  const wchar_t *v6; // rcx
  unsigned int v7; // eax
  __int64 Pool2; // rax

  PWSTR = 0;
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  v6 = *(const wchar_t **)(a1 + 24);
  if ( v6 )
  {
    PWSTR = PnpAllocatePWSTR(v6, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(a3 + 24));
    if ( PWSTR < 0 )
      goto LABEL_9;
  }
  v7 = *(_DWORD *)(a3 + 36);
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(256LL, v7, 1466986064LL);
    *(_QWORD *)(a3 + 40) = Pool2;
    if ( !Pool2 )
    {
      PWSTR = -1073741670;
LABEL_9:
      PnpFreeDevProperty(a3, 0x57706E50u);
      *(_OWORD *)a3 = 0LL;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)(a3 + 32) = 0LL;
      return (unsigned int)PWSTR;
    }
  }
  memmove(*(void **)(a3 + 40), *(const void **)(a1 + 40), *(unsigned int *)(a3 + 36));
  return (unsigned int)PWSTR;
}
