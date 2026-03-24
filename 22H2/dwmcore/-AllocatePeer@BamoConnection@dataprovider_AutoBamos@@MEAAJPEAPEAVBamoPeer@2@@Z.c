/*
 * XREFs of ?AllocatePeer@BamoConnection@dataprovider_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x1800DF480
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014CF54 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall dataprovider_AutoBamos::BamoConnection::AllocatePeer(
        dataprovider_AutoBamos::BamoConnection *this,
        struct dataprovider_AutoBamos::BamoPeer **a2)
{
  _DWORD *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = operator new(0x48uLL);
  if ( v3 )
  {
    *(_QWORD *)v3 = &dataprovider_AutoBamos::BamoPeer::`vftable';
    v3[4] = 1;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 1) = &BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vftable';
    *((_QWORD *)v3 + 3) = v3;
    *((_QWORD *)v3 + 5) = 0LL;
    v3[12] = 0;
    *((_WORD *)v3 + 26) = 0;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a2 = (struct dataprovider_AutoBamos::BamoPeer *)v3;
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C76,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v4);
    JUMPOUT(0x18014B328LL);
  }
  return 0LL;
}
