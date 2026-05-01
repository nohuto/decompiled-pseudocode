/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180490928
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180486380 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x18048669C (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180490A54 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _Init_thread_footer @ 0x1800910E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091150 (_Init_thread_header.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  __int64 v2; // rdx
  WCHAR *lfFaceName; // rcx
  WCHAR v4; // ax
  WCHAR *v5; // rax
  __int32 v6; // ecx
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_1806533BC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1806533BC);
    if ( dword_1806533BC == -1 )
    {
      dword_1806533C0 = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_1806533BC);
    }
  }
  memset_0(&lf, 0, sizeof(lf));
  v2 = 32LL;
  lfFaceName = lf.lfFaceName;
  do
  {
    if ( v2 == -2147483614 )
      break;
    v4 = *(WCHAR *)((char *)lfFaceName + (char *)L"Segoe MDL2 Assets" - (char *)lf.lfFaceName);
    if ( !v4 )
      break;
    *lfFaceName++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = lfFaceName - 1;
  if ( v2 )
    v5 = lfFaceName;
  v6 = a1 * dword_1806533C0;
  *v5 = 0;
  lf.lfWeight = 350;
  lf.lfHeight = v6 / -100;
  return CreateFontIndirectW(&lf);
}
