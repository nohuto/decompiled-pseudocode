/*
 * XREFs of ??$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z @ 0x18009A8DC
 * Callers:
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x18009AEE8 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall RegistryDataHelper::ReadData<unsigned long,24>(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  const WCHAR *v4; // rbx
  const WCHAR *v8; // rdx
  unsigned int ValueW; // eax
  HKEY v10; // rcx
  bool v11; // cf
  unsigned int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int pvData; // [rsp+60h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+6Ch] [rbp+14h]

  v17 = HIDWORD(a2);
  v4 = (const WCHAR *)(a1 + 8);
  pcbData = 4;
  v8 = (const WCHAR *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 32) >= 8uLL )
    v8 = *(const WCHAR **)v4;
  ValueW = RegGetValueW(*(HKEY *)a1, v8, L"DisableStackedPriorityToasts", 0x18u, 0LL, &pvData, &pcbData);
  if ( ValueW != 2 )
    goto LABEL_9;
  v10 = *(HKEY *)(a1 + 40);
  if ( !v10 )
    goto LABEL_8;
  v11 = *((_QWORD *)v4 + 3) < 8uLL;
  pcbData = 4;
  if ( !v11 )
    v4 = *(const WCHAR **)v4;
  ValueW = RegGetValueW(v10, v4, L"DisableStackedPriorityToasts", 0x18u, 0LL, &pvData, &pcbData);
  if ( ValueW == 2 )
  {
LABEL_8:
    *a4 = a3;
  }
  else
  {
LABEL_9:
    if ( ValueW )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x1A7,
               (unsigned int)"internal\\shellcommonshell\\inc\\RegistryDataHelper.h",
               (const char *)ValueW,
               v13);
    *a4 = pvData;
  }
  return 0LL;
}
