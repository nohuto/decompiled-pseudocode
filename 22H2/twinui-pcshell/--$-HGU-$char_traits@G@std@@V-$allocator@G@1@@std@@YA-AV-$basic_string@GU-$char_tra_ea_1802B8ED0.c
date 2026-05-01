/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@0@Z @ 0x1802B8ED0
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F1B0 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x1802C3C18 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802497F4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180267B18 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

__int64 __fastcall std::operator+<unsigned short>(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  _QWORD *v4; // r10
  char *v5; // r11
  unsigned __int64 v6; // r8
  void **v8; // rax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = a3;
  v5 = (char *)a2;
  v6 = a3[2];
  if ( v6 <= *(_QWORD *)(a2 + 24) - v3 || v4[3] - v6 < v3 )
  {
    if ( v4[3] >= 8uLL )
      v4 = (_QWORD *)*v4;
    v8 = std::wstring::append((void **)a2, v4, v6);
  }
  else
  {
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v5 = *(char **)a2;
    v8 = std::wstring::insert((void **)v4, a2, v5, v3);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v8;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v8 + 1);
  v8[2] = 0LL;
  v8[3] = (void *)7;
  *(_WORD *)v8 = 0;
  return a1;
}
