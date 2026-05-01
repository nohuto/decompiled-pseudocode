/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x1800660D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801C0A3C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  __int64 v6; // r14
  int v7; // ebx
  int v8; // ecx
  signed int ApartmentId; // ebx
  int v10; // edi
  bool v11; // r15
  IUnknown *v12; // rcx
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // ecx
  void *v17; // rcx
  int v19; // ecx
  int v20; // eax
  unsigned int v21[2]; // [rsp+38h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C8h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v24[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h]
  signed int v26; // [rsp+70h] [rbp-98h]
  WCHAR Filename[264]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  v21[0] = 0;
  v6 = (unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88);
  v25 = v6;
  v7 = *(_DWORD *)(v6 + 0x2C);
  if ( v7 == 2 )
    goto LABEL_36;
  v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_3;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v19 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v19;
  }
  else
  {
    v19 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v19 != 1 )
    goto LABEL_4;
  if ( v7 == 1 )
  {
    v20 = IsAppCompatModeEnabled(16LL);
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v20 )
      v8 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v8;
LABEL_3:
    if ( v8 != 1 )
    {
LABEL_4:
      ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
      goto LABEL_5;
    }
  }
LABEL_36:
  if ( *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_4;
  ApartmentId = SHCoGetApartmentId(v21);
  if ( ApartmentId >= 0 && v21[0] != *(_DWORD *)(v6 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
    goto LABEL_4;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId);
LABEL_5:
  v26 = ApartmentId;
  v10 = -1;
  if ( a2 == 1 )
  {
    v10 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v10 = 1;
  }
  ppvOut = 0LL;
  punk = 0LL;
  v21[0] = 2;
  (*(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL))(
    a1 - 14,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v11 = IUnknown_QueryService(
          punk,
          &IID_IImmersiveApplicationManager,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          &ppvOut) >= 0;
  v12 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  if ( v11 )
  {
    v13 = a1[40];
    v14 = a1[62];
    if ( v10 == -1 || !a3 )
    {
      v15 = a1[69];
      v16 = v15;
    }
    else
    {
      v15 = v10;
      v16 = a1[69];
    }
    v24[0] = v16;
    v24[1] = v15;
    v24[2] = v14;
    v24[3] = v13;
    v24[4] = a2;
    (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v24);
  }
  if ( a3 && v10 != -1 && v10 != a1[69] )
    a1[69] = v10;
  v17 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return 0LL;
}
