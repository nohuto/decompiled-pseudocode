/*
 * XREFs of ?AllocatePeer@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x18000ED40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ISMBamos_AutoBamos::BamoConnection::AllocatePeer(
        ISMBamos_AutoBamos::BamoConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer **a2)
{
  _QWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x48uLL);
  *v4 = &ISMBamos_AutoBamos::BamoPeer::`vftable';
  v4[4] = 0LL;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 12) = 0;
  *((_WORD *)v4 + 26) = 0;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[1] = &BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::`vftable';
  *((_DWORD *)v4 + 4) = 1;
  v4[3] = v4;
  *a2 = (struct ISMBamos_AutoBamos::BamoPeer *)v4;
  return 0LL;
}
