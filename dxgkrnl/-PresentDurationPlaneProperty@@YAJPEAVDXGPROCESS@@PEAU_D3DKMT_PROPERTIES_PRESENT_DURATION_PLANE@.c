/*
 * XREFs of ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1C030F800
 * Callers:
 *     NtDxgkGetProperties @ 0x1C01A8E80 (NtDxgkGetProperties.c)
 *     NtDxgkSetProperties @ 0x1C01D32D0 (NtDxgkSetProperties.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PresentDurationPlaneProperty(struct DXGPROCESS *a1, const struct _LUID *a2, char a3)
{
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  DXGADAPTER *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64); // rax
  DXGADAPTER *v14[2]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v15[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGADAPTER *v16; // [rsp+68h] [rbp-20h]
  char v17; // [rsp+70h] [rbp-18h]

  v4 = (__int64)a2;
  if ( !a1 )
  {
    v4 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v5 = L"Invalid process context, returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v4;
  }
  if ( (*((_DWORD *)a1 + 106) & 0x1004) == 0 )
  {
    v4 = -1073741790LL;
    WdLogSingleEntry1(2LL, -1073741790LL);
    v5 = L"Only DWM or DRT test process is allowed to set and query present duration plane index. returning 0x%I64x";
    goto LABEL_3;
  }
  v14[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v14, a2) )
  {
    v6 = v14[0];
    if ( *((_QWORD *)v14[0] + 366) )
    {
      v16 = v14[0];
      v17 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      if ( *((_DWORD *)v6 + 50) == 1 )
      {
        v9 = *((_QWORD *)v14[0] + 366);
        v10 = *(_QWORD *)(v9 + 744);
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 736) + 8LL);
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v11 + 1040);
        LOBYTE(v11) = a3;
        LODWORD(v4) = v12(v10, *(unsigned int *)(v4 + 8), v11, v4 + 12);
      }
      else
      {
        WdLogSingleEntry3(2LL, *(int *)(v4 + 4), *(unsigned int *)v4, -1073741130LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
          *(int *)(v4 + 4),
          *(unsigned int *)v4,
          -1073741130LL,
          0LL,
          0LL);
        LODWORD(v4) = -1073741130;
      }
      if ( v17 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    }
    else
    {
      v7 = *(unsigned int *)v4;
      v8 = *(int *)(v4 + 4);
      LODWORD(v4) = -1073741637;
      WdLogSingleEntry3(3LL, v8, v7, -1073741637LL);
    }
  }
  else
  {
    LODWORD(v4) = -1073741811;
  }
  DXGADAPTER_REFERENCE::Assign(v14, 0LL);
  return (unsigned int)v4;
}
