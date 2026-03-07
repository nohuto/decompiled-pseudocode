__int64 __fastcall RtlCheckXfgFailureInformation(char *BaseAddress)
{
  unsigned __int16 *v2; // rsi
  _WORD *Pool2; // r14
  int InformationProcess; // edi
  char *v5; // r12
  wchar_t *v6; // rcx
  unsigned __int16 v7; // ax
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
  v2 = 0LL;
  Pool2 = 0LL;
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(BaseAddress + 1) > 0x7FFFFFFF0000LL || BaseAddress + 1 < BaseAddress )
    MEMORY[0x7FFFFFFF0000] = 0;
  InformationProcess = ZwQueryInformationProcess(-1LL, 43LL);
  if ( InformationProcess == -1073741820 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(257LL, (unsigned int)ReturnLength, 1195853400LL);
    if ( !Pool2 )
    {
LABEL_8:
      InformationProcess = -1073741801;
      goto LABEL_30;
    }
    InformationProcess = ZwQueryInformationProcess(-1LL, 43LL);
    if ( InformationProcess >= 0 )
    {
      InformationProcess = RtlQueryImageXfgFilter(Pool2, 0LL, 0LL, 0LL, &v12);
      if ( InformationProcess >= 0 )
      {
        if ( v12 )
        {
LABEL_29:
          RtlDisableXfgOnTarget(BaseAddress);
          InformationProcess = 0;
          goto LABEL_30;
        }
        InformationProcess = ZwQueryVirtualMemory(
                               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                               BaseAddress,
                               (MEMORY_INFORMATION_CLASS)6,
                               &MemoryInformation,
                               0x18uLL,
                               0LL);
        if ( InformationProcess < 0 )
          goto LABEL_30;
        if ( !(_QWORD)MemoryInformation || (v11 & 2) != 0 || (v11 & 1) != 0 )
        {
          InformationProcess = -1073741811;
          goto LABEL_30;
        }
        v5 = &BaseAddress[-MemoryInformation];
        InformationProcess = ZwQueryVirtualMemory(
                               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                               (PVOID)MemoryInformation,
                               (MEMORY_INFORMATION_CLASS)2,
                               0LL,
                               0LL,
                               &ReturnLength);
        if ( InformationProcess == -1073741820 )
        {
          v2 = (unsigned __int16 *)ExAllocatePool2(257LL, ReturnLength, 1195853400LL);
          if ( !v2 )
            goto LABEL_8;
          InformationProcess = ZwQueryVirtualMemory(
                                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                 (PVOID)MemoryInformation,
                                 (MEMORY_INFORMATION_CLASS)2,
                                 v2,
                                 ReturnLength,
                                 0LL);
          if ( InformationProcess >= 0 )
          {
            v6 = (wchar_t *)(*((_QWORD *)v2 + 1) + *v2);
            v9.Buffer = v6;
            v7 = 0;
            v9.Length = 0;
            if ( *v2 )
            {
              do
              {
                v9.Buffer = --v6;
                v7 += 2;
                v9.Length = v7;
              }
              while ( *v6 != 92 && v7 < *v2 );
            }
            if ( !v7 || *v6 != 92 )
            {
              InformationProcess = -1073741767;
              goto LABEL_30;
            }
            v9.Buffer = v6 + 1;
            v9.Length = v7 - 2;
            v9.MaximumLength = v7 - 2;
            InformationProcess = RtlQueryImageXfgFilter(Pool2, &v9, MemoryInformation, (__int64)v5, &v12);
            if ( InformationProcess < 0 )
              goto LABEL_30;
            if ( !v12 )
            {
              InformationProcess = -1073741275;
              goto LABEL_30;
            }
            goto LABEL_29;
          }
        }
      }
    }
  }
LABEL_30:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)InformationProcess;
}
