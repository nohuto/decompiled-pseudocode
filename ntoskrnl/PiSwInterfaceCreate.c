/*
 * XREFs of PiSwInterfaceCreate @ 0x140808CA8
 * Callers:
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x140807540 (PnpCopyDevPropertyArray.c)
 *     PiSwInterfaceFree @ 0x140964570 (PiSwInterfaceFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, unsigned int a3, PVOID *a4)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  __int64 v10; // r8

  Pool2 = ExAllocatePool2(256LL, 40LL, 1466986064LL);
  *a4 = (PVOID)Pool2;
  if ( Pool2 )
  {
    PWSTR = PnpAllocatePWSTR(pszSrc, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(Pool2 + 16));
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, (_DWORD *)*a4 + 8, (PVOID *)*a4 + 3);
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
