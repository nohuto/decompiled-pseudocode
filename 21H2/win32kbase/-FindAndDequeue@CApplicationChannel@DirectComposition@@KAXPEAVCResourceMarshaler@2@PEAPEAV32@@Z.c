/*
 * XREFs of ?FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z @ 0x1C005FCD4
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C005FA08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::FindAndDequeue(
        struct DirectComposition::CResourceMarshaler **a1,
        struct DirectComposition::CResourceMarshaler ***a2)
{
  struct DirectComposition::CResourceMarshaler **v2; // rax

  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      if ( v2 == a1 )
        break;
      a2 = (struct DirectComposition::CResourceMarshaler ***)(v2 + 1);
      v2 = (struct DirectComposition::CResourceMarshaler **)v2[1];
    }
    while ( v2 );
    if ( v2 )
    {
      *a2 = (struct DirectComposition::CResourceMarshaler **)a1[1];
      a1[1] = 0LL;
    }
  }
}
