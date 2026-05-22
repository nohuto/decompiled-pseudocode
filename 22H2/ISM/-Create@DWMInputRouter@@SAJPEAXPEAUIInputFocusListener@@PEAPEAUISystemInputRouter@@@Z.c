/*
 * XREFs of ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180138130
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F0BC (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x1800254D8 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  DWMInputRouter *v6; // rbx
  DWMInputRouter *v7; // rax
  DWMInputRouter *v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a3 )
  {
    v9 = -2147024809;
    v10 = 584LL;
    goto LABEL_12;
  }
  v7 = (DWMInputRouter *)RefCountedObject::operator new(0x300uLL);
  if ( v7 )
    v8 = DWMInputRouter::DWMInputRouter(v7, a1, a2);
  else
    v8 = 0LL;
  v6 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 593LL;
LABEL_12:
    v12 = v9;
    goto LABEL_13;
  }
  v11 = DWMInputRouter::Initialize(v8);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v6 = 0LL;
    *a3 = v8;
    v9 = 0;
    goto LABEL_14;
  }
  v12 = (unsigned int)v11;
  v10 = 596LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)v12);
LABEL_14:
  if ( v6 )
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
