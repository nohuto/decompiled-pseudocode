__int64 __fastcall SmmMapSection(
        void *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PVOID *a6,
        __int64 *a7,
        ULONG_PTR *a8)
{
  __int64 v8; // rsi
  __int64 v9; // r15
  NTSTATUS v13; // r14d
  int v14; // edi
  __int64 CurrentProcess; // rax
  PVOID MappedBase; // [rsp+50h] [rbp-48h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-40h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = a2;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v13 = -1073741823;
  if ( a2 != 1 )
  {
    if ( !a2 )
    {
      v13 = MmMapViewInSystemSpace(a1, &MappedBase, &ViewSize);
      if ( v13 >= 0 )
      {
        v8 = a3;
        goto LABEL_14;
      }
    }
LABEL_13:
    _InterlockedIncrement(&dword_1C013BD44);
    WdLogSingleEntry4(6LL, a3, a4, v9, a5);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to map section object. Offset=0x%.16I64x, Size=%I64u, AccessMode=%u, CacheType=%u",
      a3,
      a4,
      v9,
      a5,
      0LL);
    goto LABEL_14;
  }
  v14 = 4;
  if ( a5 != 1 )
  {
    if ( a5 )
    {
      if ( a5 == 2 )
      {
        v14 = 1028;
      }
      else
      {
        WdLogSingleEntry1(1LL, 98LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0", 98LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v14 = 516;
    }
  }
  v19 = a3;
  CurrentProcess = PsGetCurrentProcess(a1);
  v13 = ((__int64 (__fastcall *)(void *, __int64, PVOID *, _QWORD, __int64, __int64 *, ULONG_PTR *, int, _DWORD, int))MmMapViewOfSection)(
          a1,
          CurrentProcess,
          &MappedBase,
          0LL,
          a4,
          &v19,
          &ViewSize,
          2,
          0,
          v14);
  if ( v13 < 0 )
    goto LABEL_13;
  v8 = a3 - v19;
LABEL_14:
  *a6 = MappedBase;
  *a7 = v8;
  *a8 = ViewSize;
  return (unsigned int)v13;
}
