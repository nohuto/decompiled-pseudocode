/*
 * XREFs of ?QueryInterface@EdgyInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017BE10
 * Callers:
 *     ?QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D9D0 (-QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D9E0 (-QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyInputTarget::QueryInterface(EdgyInputTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(EdgyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v7 = 8LL;
LABEL_11:
    *a3 = (char *)this + v7;
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
  {
    (*(void (__fastcall **)(EdgyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v7 = 16LL;
    goto LABEL_11;
  }
  return 2147500034LL;
}
