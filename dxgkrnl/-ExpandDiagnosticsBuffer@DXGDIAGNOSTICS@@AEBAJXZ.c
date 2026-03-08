/*
 * XREFs of ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1C004FDA8
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A3BC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(DXGDIAGNOSTICS *this)
{
  unsigned int v1; // eax
  __int64 result; // rax
  __int64 v4; // r8
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rcx

  v1 = *((_DWORD *)this + 5);
  if ( v1 == 1 )
    return 128LL;
  v4 = *((_QWORD *)this + 6);
  v5 = 2 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v1 >> 1;
  v6 = operator new[](v5, 0x4B677844u, v4);
  v7 = v6;
  if ( v6 )
  {
    memmove(
      (void *)(v6 + *((unsigned int *)this + 8)),
      (const void *)(*((unsigned int *)this + 8) + *((_QWORD *)this + 7)),
      (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8)));
    v11 = *((_DWORD *)this + 9);
    if ( v11 < *((_DWORD *)this + 8) )
    {
      memmove((void *)(v7 + *((unsigned int *)this + 4)), *((const void **)this + 7), v11);
      *((_DWORD *)this + 9) += *((_DWORD *)this + 4);
    }
    v12 = *((_QWORD *)this + 1);
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 7);
      if ( v12 < v13 + (unsigned __int64)*((unsigned int *)this + 8) )
        *((_QWORD *)this + 1) = v7 + v12 + *((unsigned int *)this + 4) - v13;
      else
        *((_QWORD *)this + 1) = v7 + v12 - v13;
    }
    v14 = (void *)*((_QWORD *)this + 7);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    *((_QWORD *)this + 7) = v7;
    result = 0LL;
    *((_DWORD *)this + 4) = v5;
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0LL,
          1,
          -1,
          L"Unable to allocate diagnosability buffer for new size 0x%I64x",
          v5,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225626LL;
  }
  return result;
}
