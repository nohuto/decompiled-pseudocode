/*
 * XREFs of RtlCheckXfgFailureInformation @ 0x1405EE7E0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x14041BA80 (ZwQueryInformationProcess.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     RtlQueryImageXfgFilter @ 0x1405E3B04 (RtlQueryImageXfgFilter.c)
 *     RtlDisableXfgOnTarget @ 0x1405EEA98 (RtlDisableXfgOnTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCheckXfgFailureInformation(char *BaseAddress)
{
  unsigned __int16 *Pool2; // rsi
  _WORD *v3; // r14
  int VirtualMemory; // edi
  char *v5; // r12
  wchar_t *v6; // rax
  unsigned __int16 v7; // cx
  UNICODE_STRING v9; // [rsp+38h] [rbp-60h] BYREF
  __int128 MemoryInformation; // [rsp+48h] [rbp-50h] BYREF
  __int64 v11; // [rsp+58h] [rbp-40h]
  char v12; // [rsp+A8h] [rbp+10h] BYREF
  ULONG_PTR ReturnLength; // [rsp+B0h] [rbp+18h] BYREF

  MemoryInformation = 0LL;
  v11 = 0LL;
  ReturnLength = 0LL;
  v9 = 0LL;
  v12 = 0;
  Pool2 = 0LL;
  v3 = 0LL;
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(BaseAddress + 1) > 0x7FFFFFFF0000LL || BaseAddress + 1 < BaseAddress )
    MEMORY[0x7FFFFFFF0000] = 0;
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    (MEMORY_INFORMATION_CLASS)6,
                    &MemoryInformation,
                    0x18uLL,
                    0LL);
  if ( VirtualMemory >= 0 )
  {
    if ( !(_QWORD)MemoryInformation || (v11 & 2) != 0 || (v11 & 1) != 0 )
    {
      VirtualMemory = -1073741811;
    }
    else
    {
      v5 = &BaseAddress[-MemoryInformation];
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID)MemoryInformation,
                        (MEMORY_INFORMATION_CLASS)2,
                        0LL,
                        0LL,
                        &ReturnLength);
      if ( VirtualMemory != -1073741820 )
        goto LABEL_28;
      Pool2 = (unsigned __int16 *)ExAllocatePool2(257LL, ReturnLength, 1195853400LL);
      if ( !Pool2 )
        goto LABEL_12;
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID)MemoryInformation,
                        (MEMORY_INFORMATION_CLASS)2,
                        Pool2,
                        ReturnLength,
                        0LL);
      if ( VirtualMemory >= 0 )
      {
        v6 = (wchar_t *)(*((_QWORD *)Pool2 + 1) + *Pool2);
        v9.Buffer = v6;
        v7 = 0;
        v9.Length = 0;
        if ( *Pool2 )
        {
          do
          {
            v9.Buffer = --v6;
            v7 += 2;
            v9.Length = v7;
          }
          while ( *v6 != 92 && v7 < *Pool2 );
        }
        if ( v7 && *v6 == 92 )
        {
          v9.Buffer = v6 + 1;
          v9.Length = v7 - 2;
          v9.MaximumLength = v7 - 2;
          VirtualMemory = ZwQueryInformationProcess(-1LL, 43LL);
          if ( VirtualMemory == -1073741820 )
          {
            v3 = (_WORD *)ExAllocatePool2(257LL, (unsigned int)ReturnLength, 1195853400LL);
            if ( !v3 )
            {
LABEL_12:
              VirtualMemory = -1073741801;
              goto LABEL_28;
            }
            VirtualMemory = ZwQueryInformationProcess(-1LL, 43LL);
            if ( VirtualMemory >= 0 )
            {
              VirtualMemory = RtlQueryImageXfgFilter(v3, &v9, MemoryInformation, (__int64)v5, &v12);
              if ( VirtualMemory >= 0 )
              {
                if ( v12 )
                {
                  RtlDisableXfgOnTarget(BaseAddress);
                  VirtualMemory = 0;
                }
                else
                {
                  VirtualMemory = -1073741275;
                }
              }
            }
          }
        }
        else
        {
          VirtualMemory = -1073741767;
        }
      }
    }
  }
LABEL_28:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)VirtualMemory;
}
