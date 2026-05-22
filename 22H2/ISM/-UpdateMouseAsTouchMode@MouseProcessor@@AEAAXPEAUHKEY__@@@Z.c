/*
 * XREFs of ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180136198
 * Callers:
 *     _lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_ @ 0x180135A90 (_lambda_f2fdab03bc5b02d353eab8edcf2c7195_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180068450 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180120370 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121CC4 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall MouseProcessor::UpdateMouseAsTouchMode(MouseProcessor *this, HKEY a2)
{
  LSTATUS v3; // eax
  bool v4; // sf
  char v5; // al
  int v6; // eax
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  DWORD v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 4;
  v3 = RegQueryValueExW(a2, L"EnableMouseAsTouch", 0LL, &v11, (LPBYTE)&v12, &v13);
  v4 = v3 < 0;
  if ( v3 > 0 )
    v4 = 1;
  v5 = !v4 && v11 == 4 && v12 == 1;
  if ( v5 != *((_BYTE *)this + 128) )
  {
    *((_BYTE *)this + 128) = v5;
    if ( v5 )
    {
      v6 = InjectionDevice::Attach((MouseProcessor *)((char *)this + 136));
      if ( v6 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          443LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x1BC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v7);
        __debugbreak();
      }
    }
    else
    {
      if ( !(unsigned int)NtMITDisableMouseIntercept() )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x1C0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v8);
        __debugbreak();
      }
      v9 = InjectionDevice::Remove((MouseProcessor *)((char *)this + 136));
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          449LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
    }
  }
}
