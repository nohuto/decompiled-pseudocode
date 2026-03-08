/*
 * XREFs of ?AllocateStub@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataProviderRegistrarStub@@@Z @ 0x180102B70
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AllocateStub(
        BamoDataProviderRegistrarPrincipal *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        struct BamoDataProviderRegistrarStub **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x50uLL);
    *v5 = &BamoDataProviderRegistrarStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
    v5[1] = &BamoDataProviderRegistrarStub::`vftable'{for `IDataProviderRegistrarStub'};
    v5[6] = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    v5[5] = 0LL;
    v5[7] = 0LL;
    v5[8] = 0LL;
    *((_WORD *)v5 + 38) = 0;
    v5[2] = &BamoImpl::BamoDataProviderRegistrarStubImpl::`vftable';
    result = 0LL;
    *((_DWORD *)v5 + 6) = 1;
    *((_DWORD *)v5 + 18) = 256;
    *a3 = (struct BamoDataProviderRegistrarStub *)v5;
  }
  else
  {
    *a3 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FEA,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
