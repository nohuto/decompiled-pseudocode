/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180490598
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180485FF0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x18048630C (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1804906C4 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _Init_thread_footer @ 0x1800910C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091130 (_Init_thread_header.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  __int64 v2; // rdx
  WCHAR *lfFaceName; // rcx
  WCHAR v4; // ax
  WCHAR *v5; // rax
  __int32 v6; // ecx
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_18065337C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18065337C);
    if ( dword_18065337C == -1 )
    {
      dword_180653380 = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_18065337C);
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
  v6 = a1 * dword_180653380;
  *v5 = 0;
  lf.lfWeight = 350;
  lf.lfHeight = v6 / -100;
  return CreateFontIndirectW(&lf);
}
