__int64 __fastcall PiSwQueuedCreateInfoCreate(PVOID *a1, __int64 a2)
{
  PVOID *Pool2; // rax
  int PWSTR; // ebx
  __int64 v6; // r8
  void *v7; // rcx

  Pool2 = (PVOID *)ExAllocatePool2(256LL, 88LL, 1466986064LL);
  *a1 = Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 8), 0xC8uLL, 0x57706E50u, Pool2);
  if ( PWSTR >= 0 )
  {
    PWSTR = PiSwPnPInfoInit((__int64)*a1 + 8, a2);
    if ( PWSTR >= 0 )
    {
      *((_DWORD *)*a1 + 17) = PsGetCurrentThreadProcessId();
      if ( *(_QWORD *)(a2 + 96) )
      {
        *((_DWORD *)*a1 + 16) = *(_DWORD *)(a2 + 88);
        *((_QWORD *)*a1 + 7) = ExAllocatePool2(256LL, *(unsigned int *)(a2 + 88), 1466986064LL);
        v7 = (void *)*((_QWORD *)*a1 + 7);
        if ( !v7 )
        {
LABEL_2:
          PWSTR = -1073741670;
          goto LABEL_9;
        }
        memmove(v7, *(const void **)(a2 + 96), *(unsigned int *)(a2 + 88));
      }
      PWSTR = PnpCopyDevPropertyArray(
                *(unsigned int *)(a2 + 104),
                *(_QWORD *)(a2 + 112),
                v6,
                (_DWORD *)*a1 + 20,
                (PVOID *)*a1 + 9);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
LABEL_9:
  if ( *a1 )
  {
    PiSwQueuedCreateInfoFree(*a1);
    *a1 = 0LL;
  }
  return (unsigned int)PWSTR;
}
