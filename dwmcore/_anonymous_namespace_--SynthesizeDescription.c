/*
 * XREFs of _anonymous_namespace_::SynthesizeDescription @ 0x18004274C
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800427F8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _anonymous_namespace_::GetExpressionTypeString @ 0x180042980 (_anonymous_namespace_--GetExpressionTypeString.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     swprintf_s @ 0x18010F628 (swprintf_s.c)
 */

__int64 __fastcall anonymous_namespace_::SynthesizeDescription(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ExpressionTypeString; // rax
  int v5; // r9d
  __int64 v6; // rdx
  int v7; // eax
  wchar_t *v8; // rdx
  int v10; // [rsp+28h] [rbp-F0h]
  wchar_t Buffer[104]; // [rsp+30h] [rbp-E8h] BYREF

  ExpressionTypeString = anonymous_namespace_::GetExpressionTypeString(
                           *(unsigned int *)(a2 + 152),
                           a2,
                           a3,
                           *(unsigned int *)(a2 + 192));
  v10 = v5;
  v7 = swprintf_s(Buffer, 0x64uLL, L"%s::%s::%d", off_1802CA970[*(unsigned int *)(v6 + 212)], ExpressionTypeString, v10);
  if ( v7 < 0 || (v8 = Buffer, (unsigned __int64)v7 > 0x64) )
    v8 = L"::ERROR::";
  std::wstring::wstring(a1, v8);
  return a1;
}
