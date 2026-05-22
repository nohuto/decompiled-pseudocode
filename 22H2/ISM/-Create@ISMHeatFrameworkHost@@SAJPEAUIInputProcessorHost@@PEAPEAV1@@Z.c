/*
 * XREFs of ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x18012CAD8
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180189754 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x18012C2E4 (--0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x18012CD04 (-PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::Create(struct IInputProcessorHost *a1, struct ISMHeatFrameworkHost **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  ISMHeatFrameworkHost *v7; // rax
  ISMHeatFrameworkHost *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  int v11; // edi
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 76LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (ISMHeatFrameworkHost *)RefCountedObject::operator new(0x128uLL);
  if ( v7 )
    v8 = ISMHeatFrameworkHost::ISMHeatFrameworkHost(v7, a1);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 82LL;
    goto LABEL_3;
  }
  v9 = ISMHeatFrameworkHost::PopulateHeatGripServiceHost(v8);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)v8 + 36);
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 56) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          55LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
          v10);
        __debugbreak();
      }
      *(_QWORD *)(v12 + 56) = v8;
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( v11 >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
}
