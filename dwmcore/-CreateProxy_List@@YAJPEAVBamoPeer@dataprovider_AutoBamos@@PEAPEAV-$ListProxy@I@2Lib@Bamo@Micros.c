/*
 * XREFs of ?CreateProxy_List@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAV?$ListProxy@I@2Lib@Bamo@Microsoft@@@Z @ 0x1801F4844
 * Callers:
 *     ?CreateList_uint_Proxy@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x1801DD158 (-CreateList_uint_Proxy@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnec.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CreateProxy_List(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = operator new(0x48uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x48uLL);
    v4[6] = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    v4[10] = 0;
    v4[11] = 0;
    *((_QWORD *)v4 + 2) = &Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *(_QWORD *)v4 = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListProxy<unsigned int>::`vftable'{for `Microsoft::Bamo::BamoProxy'};
    *((_QWORD *)v4 + 1) = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListProxy<unsigned int>::`vftable'{for `Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Proxy'};
    result = 0LL;
    *a2 = v4;
  }
  else
  {
    *a2 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
