/*
 * XREFs of ?GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z @ 0x18012CBF0
 * Callers:
 *     ?RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelInfo@@@Z @ 0x18012A9D0 (-RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::GetGripStatus(
        ISMHeatFrameworkHost *this,
        const struct HeatPanelInfo *a2,
        struct HeatGripStatus *a3,
        const char *a4)
{
  char v4; // al
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // xmm0_4
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v14 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      410LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      a4);
    __debugbreak();
  }
  *(_QWORD *)v11 = *(_QWORD *)a2;
  v12 = *((_DWORD *)a2 + 2);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v6 + 72LL))(v6, v11, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    v4 = v14;
  }
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      422LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      a4);
    __debugbreak();
  }
  v10 = HIDWORD(v14);
  *(_BYTE *)a3 = v4;
  result = 0LL;
  *((_DWORD *)a3 + 1) = v10;
  return result;
}
