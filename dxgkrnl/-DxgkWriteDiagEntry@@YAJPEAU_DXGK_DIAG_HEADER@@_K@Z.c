__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  _DWORD *v2; // rsi
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rsi
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rbx
  DXGDIAGNOSTICS *v14; // rcx

  v2 = (_DWORD *)((char *)a1 + 4);
  if ( !a1 || !*v2 )
  {
    WdLogSingleEntry1(1LL, 8084LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(io_pHeader != NULL) && (io_pHeader->Size > 0)",
      8084LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1 && *v2 >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( Global )
    {
      CurrentProcess = PsGetCurrentProcess(v5);
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      if ( a2 == 0x200000000LL )
      {
        v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        a2 = *(unsigned int *)(v9 + 144);
        if ( a2 == 0xFFFFFFFFLL )
          a2 = 0x100000000LL;
      }
      if ( a2 == 0x100000000LL )
      {
        *((_DWORD *)a1 + 9) |= 0x80000000;
        v12 = *((_DWORD *)a1 + 9) ^ (*((_DWORD *)a1 + 9) ^ PsGetCurrentProcessSessionId(v9, v8, v10, v11)) & 0x7FFFFFFF;
      }
      else
      {
        v12 = a2 & 0x7FFFFFFF;
      }
      *((_DWORD *)a1 + 9) = v12;
      *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
      v13 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v13 * KeQueryTimeIncrement();
      v14 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 116);
      if ( v14 )
        return DXGDIAGNOSTICS::WriteDiagnosticEntry(v14, a1);
      WdLogSingleEntry2(2LL, a1, Global);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; i_pHeader = 0x%I64x, DXGGLOBAL::m_pDxgGlobal = 0x%I64x",
        (__int64)a1,
        (__int64)Global,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to obtain DXGGLOBAL singleton; io_pHeader = 0x%I64x",
        (__int64)a1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225860LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid header; io_pHeader = 0x%I64x",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
