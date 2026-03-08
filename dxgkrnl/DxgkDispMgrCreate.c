/*
 * XREFs of DxgkDispMgrCreate @ 0x1C0181D80
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C001632C (-reset@-$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C0181F7C (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1)
{
  ULONG64 v2; // rcx
  DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  DXGDISPLAYMANAGEROBJECT *v6; // rbx
  int v7; // eax
  __int64 v8; // r14
  PVOID v9; // r14
  NTSTATUS inserted; // eax
  _QWORD *v11; // rdx
  const wchar_t *v13; // r9
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-38h]
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  ReferenceCounted *v17; // [rsp+A0h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = a1 + 24;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v3 = (DXGDISPLAYMANAGEROBJECT *)operator new[](0xC0uLL, 0x4B677844u, 256LL);
  if ( v3 )
    v6 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v3, DesiredAccess[3] & 1);
  else
    v6 = 0LL;
  v17 = v6;
  if ( !v6 || !*((_BYTE *)v6 + 64) )
  {
    WdLogSingleEntry1(6LL, 776LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for DXGDISPLAYMANAGEROBJECT",
      776LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v8) = -1073741801;
    goto LABEL_15;
  }
  Object = 0LL;
  LOBYTE(v5) = 1;
  LOBYTE(v4) = 1;
  v7 = ObCreateObject(v4, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v5, 0LL, 16, 208, 0, &Object);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    v13 = L"Failed to create NT object for display manager (0x%I64x)";
LABEL_19:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  *(_OWORD *)Object = 0LL;
  v9 = Object;
  if ( *((_QWORD *)v6 + 9) )
  {
    WdLogSingleEntry1(1LL, 562LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 562LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)v6 + 9) = v9;
  v17 = 0LL;
  *(_QWORD *)Object = v6;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
  v8 = inserted;
  if ( inserted < 0 )
  {
    WdLogSingleEntry1(2LL, inserted);
    v13 = L"Failed to create NT handle for display manager object (0x%I64x)";
    goto LABEL_19;
  }
  v11 = (_QWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v11 = (_QWORD *)MmUserProbeAddress;
  *v11 = Handle;
LABEL_15:
  auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v17, 0LL);
  return (unsigned int)v8;
}
