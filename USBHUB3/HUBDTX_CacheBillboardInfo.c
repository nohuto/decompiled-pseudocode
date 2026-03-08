/*
 * XREFs of HUBDTX_CacheBillboardInfo @ 0x1C002D304
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002AE70 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

void __fastcall HUBDTX_CacheBillboardInfo(__int64 a1, unsigned __int8 *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  void *v6; // rax

  Pool2 = ExAllocatePool2(64LL, 16LL, 1748191317LL);
  v5 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 8) = -1;
    v6 = (void *)ExAllocatePool2(64LL, *a2, 1748191317LL);
    *v5 = v6;
    if ( v6 )
    {
      memmove(v6, a2, *a2);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x5Du,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
      ExFreePoolWithTag(v5, 0x68334855u);
      v5 = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x5Cu,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
  }
  *(_QWORD *)(a1 + 2648) = v5;
}
