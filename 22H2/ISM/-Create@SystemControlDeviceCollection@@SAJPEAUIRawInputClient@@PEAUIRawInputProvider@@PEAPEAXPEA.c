/*
 * XREFs of ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180022870
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020508 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022BC8 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x18002476C (--0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F47C (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct SystemControlDeviceCollection **a4)
{
  SystemControlDeviceCollection *v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r9d
  HIDDeviceCollection *v11; // rsi
  HIDDeviceCollection *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SystemControlDeviceCollection *v20; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80070057LL,
      v18);
    return 2147942487LL;
  }
  v8 = (SystemControlDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
  v20 = v8;
  if ( v8 )
    v11 = SystemControlDeviceCollection::SystemControlDeviceCollection(v8, a1, a2);
  else
    v11 = 0LL;
  v12 = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    v17 = 27LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)v15,
      v18);
    goto LABEL_11;
  }
  LODWORD(v20) = 65664;
  v13 = HIDDeviceCollection::Initialize(v11, v9, (struct _RIM_USAGE_ANDPAGE *const)&v20, v10, 0x28u, a3);
  v15 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)v13,
      v18);
  else
    v15 = 0;
  if ( v15 < 0 )
  {
    v17 = 29LL;
    goto LABEL_18;
  }
  v12 = 0LL;
  *a4 = v11;
  v15 = 0;
  v11 = 0LL;
LABEL_11:
  if ( v11 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v12);
  return (unsigned int)v15;
}
