/*
 * XREFs of ?QueryInterface@PrivateMessageSession@RawButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180182820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::PrivateMessageSession::QueryInterface(
        RawButtonProcessor::PrivateMessageSession *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f0f77e2a_b6ed_480b_8c7f_0def1d1889a3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f0f77e2a_b6ed_480b_8c7f_0def1d1889a3.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f0f77e2a_b6ed_480b_8c7f_0def1d1889a3.Data4;
    if ( !v6 )
      goto LABEL_9;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v7 )
    {
      return 2147500034LL;
    }
    else
    {
LABEL_9:
      (*(void (__fastcall **)(RawButtonProcessor::PrivateMessageSession *))(*(_QWORD *)this + 8LL))(this);
      result = 0LL;
      *a3 = this;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
