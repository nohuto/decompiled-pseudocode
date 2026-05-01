/*
 * XREFs of ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1801264D0
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180126F50 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180126524 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

const unsigned __int16 *__fastcall std::filesystem::_Find_filename(
        std::filesystem *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *root_name_end; // rax
  const unsigned __int16 *v4; // r11
  const unsigned __int16 *v5; // rcx

  root_name_end = std::filesystem::_Find_root_name_end(this, a2, a3);
  if ( root_name_end != v4 )
  {
    do
    {
      if ( *root_name_end != 92 && *root_name_end != 47 )
        break;
      ++root_name_end;
    }
    while ( root_name_end != v4 );
    if ( root_name_end != v4 )
    {
      do
      {
        v5 = v4 - 1;
        if ( *(v4 - 1) == 92 )
          break;
        if ( *v5 == 47 )
          break;
        --v4;
      }
      while ( root_name_end != v5 );
    }
  }
  return v4;
}
