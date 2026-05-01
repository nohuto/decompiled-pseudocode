/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180039AA0
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800399C0 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800752A4 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180127520 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_reader.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1801DF760 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18022BC54 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1804DDD4C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( (v4 & 0x80000000) != 0 )
  {
    if ( !a2 )
      return v4;
LABEL_16:
    *(_WORD *)a1 = 0;
    return v4;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    v4 = -2147024809;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v5 = a4 - a2;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + a2) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --a2;
    }
    while ( a2 );
  }
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( a2 )
    v8 = (unsigned __int16 *)a1;
  v4 = a2 == 0 ? 0x8007007A : 0;
  *v8 = 0;
  return v4;
}
