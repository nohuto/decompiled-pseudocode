/*
 * XREFs of ?OnMessage@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18011D210
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::OnMessage(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 72LL),
             &IControllerNavigationManagerPrincipal_Receive<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_0dp_Li0nIHu1AXew2xcevx57rSo_BamoGroup$5a0d6d6f,
             289LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      25857LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
