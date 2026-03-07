__int64 __fastcall ProcessSysMemAttributes(PVOID BaseAddress, unsigned int a2, struct _DXGK_ALLOCATIONINFO *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // esi
  unsigned __int64 v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rsi
  NTSTATUS v11; // eax
  UINT v12; // edx
  UINT Alignment; // eax
  ULONG_PTR ReturnLength; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  ReturnLength = 0LL;
  v4 = a2 >> 12;
  v7 = 48LL * (a2 >> 12);
  if ( !is_mul_ok(a2 >> 12, 0x30uLL) )
    v7 = -1LL;
  v8 = (_DWORD *)operator new[](v7, 0x4B677844u, 256LL);
  v9 = v8;
  if ( v8 )
  {
    v11 = ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            BaseAddress,
            MemoryBasicInformation,
            v8,
            48 * v4,
            &ReturnLength);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( *((_QWORD *)v9 + 3) >= v3 )
      {
        if ( (v9[10] & 0x800000) != 0 )
        {
          LODWORD(v10) = -1073741811;
          WdLogSingleEntry2(2LL, -1073741811LL, 3904LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"ExistingSysMem pointer points to a MEM_ROTATE allocation, returning 0x%I64x",
            -1073741811LL,
            3904LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v12 = a3->Flags.Value | 4;
          if ( (v9[9] & 0x600) != 0 )
            v12 = a3->Flags.Value & 0xFFFFFFFB;
          a3->Flags.Value = v12;
          if ( (v9[10] & 0x20400000) != 0 )
          {
            Alignment = a3->Alignment;
            if ( !Alignment || (_WORD)Alignment )
              a3->Alignment = 0x10000;
          }
        }
      }
      else
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry2(2LL, -1073741811LL, 3892LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ExistingSysMem with different page attributes not supported. Returning 0x%I64x",
          -1073741811LL,
          3892LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v11, 3885LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QueryVirtualMemory failed. Returning 0x%I64x",
        v10,
        3885LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 3869LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate MEMORY_BASIC_INFORMATION.",
      3869LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v10) = -1073741801;
  }
  operator delete(v9);
  return (unsigned int)v10;
}
