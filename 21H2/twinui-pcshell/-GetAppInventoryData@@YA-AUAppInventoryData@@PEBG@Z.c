/*
 * XREFs of ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1804CE768
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CE5B0 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CE8AC (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     IsPicRetrieveFileInfoPresent @ 0x180093A94 (IsPicRetrieveFileInfoPresent.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAppInventoryData(__int64 a1, __int64 a2)
{
  _WORD *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  _WORD *v7; // rdx
  unsigned __int64 v8; // r8
  _WORD *v9; // rdx
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  if ( IsPicRetrieveFileInfoPresent() )
  {
    v11 = 0LL;
    if ( (int)PicRetrieveFileInfo(a2, 16LL, &v11) >= 0 )
    {
      v4 = (_WORD *)v11[6];
      v5 = -1LL;
      v6 = -1LL;
      do
        ++v6;
      while ( v4[v6] );
      std::wstring::assign((char *)a1, v4, v6);
      v7 = (_WORD *)v11[7];
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      std::wstring::assign((char *)(a1 + 32), v7, v8);
      v9 = (_WORD *)v11[2];
      do
        ++v5;
      while ( v9[v5] );
      std::wstring::assign((char *)(a1 + 64), v9, v5);
    }
    if ( v11 )
      PicFreeFileInfo(v11);
  }
  return a1;
}
