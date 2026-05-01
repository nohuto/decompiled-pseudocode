/*
 * XREFs of ??$make_shared@V?$optional@_N@std@@$$V@std@@YA?AV?$shared_ptr@V?$optional@_N@std@@@0@XZ @ 0x180147674
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::make_shared<std::optional<bool>,>(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x18uLL);
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<std::optional<bool>>::`vftable';
  *((_WORD *)v3 + 8) = 0;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  result = a1;
  *(_QWORD *)a1 = v3 + 4;
  return result;
}
