__int64 __fastcall QueryWin32DpiValues(unsigned int *a1, struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  int v4; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(int *); // rax
  __int64 (__fastcall *v8)(int *); // rax
  __int64 v10; // rdi
  int v11; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+54h] [rbp-14h]
  unsigned int *v13; // [rsp+58h] [rbp-10h]

  v4 = -1073741275;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v6 = *((_QWORD *)Current + 11);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(int *))(v6 + 352);
      if ( v7 )
      {
        if ( a1 && (v11 = 0, v12 = 4, v13 = a1, v4 = v7(&v11), v4 < 0) )
        {
          v10 = 1429LL;
          WdLogSingleEntry1(1LL, 1429LL);
        }
        else
        {
          if ( !a2 )
            return (unsigned int)v4;
          v8 = *(__int64 (__fastcall **)(int *))(v6 + 352);
          v11 = 1;
          v12 = 32;
          v13 = (unsigned int *)a2;
          v4 = v8(&v11);
          if ( v4 >= 0 )
            return (unsigned int)v4;
          v10 = 1442LL;
          WdLogSingleEntry1(1LL, 1442LL);
        }
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", v10, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return (unsigned int)v4;
}
