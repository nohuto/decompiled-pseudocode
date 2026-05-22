/*
 * XREFs of ?OnMessage@BamoAsyncResult_string_PrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18011B150
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_string_PrincipalImpl::OnMessage(
        BamoImpl::BamoAsyncResult_string_PrincipalImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 72LL),
             &IAsyncResult_string_Principal_Receive<BamoImpl::BamoAsyncResult_string_PrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_gc15dAH_HRGm2aFEmVnIJumkvZI_BamoGroup$3abff530,
             18LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2571LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
