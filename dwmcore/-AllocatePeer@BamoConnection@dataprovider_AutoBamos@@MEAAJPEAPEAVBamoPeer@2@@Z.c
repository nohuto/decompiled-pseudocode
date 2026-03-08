/*
 * XREFs of ?AllocatePeer@BamoConnection@dataprovider_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x180102290
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall dataprovider_AutoBamos::BamoConnection::AllocatePeer(
        dataprovider_AutoBamos::BamoConnection *this,
        struct dataprovider_AutoBamos::BamoPeer **a2)
{
  _DWORD *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = operator new(0x68uLL);
  if ( !v3 )
  {
    *a2 = 0LL;
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x264F,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v4);
  }
  *(_QWORD *)v3 = &dataprovider_AutoBamos::BamoPeer::`vftable';
  v3[4] = 1;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 3) = v3;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_WORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 8) = 0LL;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = 0LL;
  *((_QWORD *)v3 + 1) = &BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vftable';
  *a2 = (struct dataprovider_AutoBamos::BamoPeer *)v3;
  return 0LL;
}
