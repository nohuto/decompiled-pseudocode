/*
 * XREFs of McTemplateU0z_EtwEventWriteTransfer @ 0x180093770
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000D790 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0z_EtwEventWriteTransfer(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  int v4; // ecx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v8 = v4;
  v9 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v7 = a3;
  return McGenEventWrite_EtwEventWriteTransfer(
           Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (__int64)&UdwmSecondaryWindowBrushSnapshot_Info,
           (__int64)a3,
           2LL,
           (__int64)v6);
}
