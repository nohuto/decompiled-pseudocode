/*
 * XREFs of ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C0118548
 * Callers:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BC9E4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0114FF4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01188EC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v4 = 0LL;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * ((v2 >> 1) + v4)) >= *a2 )
    {
      v2 >>= 1;
    }
    else
    {
      v4 += (v2 >> 1) + 1;
      v2 += -1LL - (v2 >> 1);
    }
  }
  while ( v2 );
  return v4;
}
