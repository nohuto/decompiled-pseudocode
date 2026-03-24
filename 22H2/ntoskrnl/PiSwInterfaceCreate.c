/*
 * XREFs of PiSwInterfaceCreate @ 0x14076E730
 * Callers:
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x14076E344 (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     PiSwInterfaceFree @ 0x140734E74 (PiSwInterfaceFree.c)
 *     PnpCopyDevPropertyArray @ 0x14074D2EC (PnpCopyDevPropertyArray.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, unsigned int a3, PVOID *a4)
{
  _OWORD *PoolWithTag; // rax
  int PWSTR; // ebx
  __int64 v10; // r8

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    PWSTR = PnpAllocatePWSTR(pszSrc, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)*a4 + 2);
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, (_DWORD *)*a4 + 8, (void **)*a4 + 3);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
