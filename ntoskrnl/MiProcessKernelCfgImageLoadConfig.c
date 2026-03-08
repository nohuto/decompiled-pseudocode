/*
 * XREFs of MiProcessKernelCfgImageLoadConfig @ 0x1407849F8
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140784998 (MiProcessLoadConfigForDriver.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 * Callees:
 *     MiSetImageProtection @ 0x1402E3BB8 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x140655A04 (MiCheckForDiscardableLongJumpTable.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A2D7CC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelCfgImageLoadConfig(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  void (__fastcall **v7)(uintptr_t); // rsi
  _QWORD *v8; // rsi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v2 = a2;
  if ( (MiFlags & 0x40000) == 0 )
    return 0LL;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 10, (int)&v9);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  if ( *(_DWORD *)v5 < 0x78u || (v7 = *(void (__fastcall ***)(uintptr_t))(v5 + 112)) == 0LL )
  {
LABEL_14:
    if ( *(_DWORD *)v6 >= 0x80u )
    {
      v8 = *(_QWORD **)(v6 + 120);
      if ( v8 )
      {
        if ( v2 )
        {
          if ( !(unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v6 + 120), 8) )
          {
            MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
            dword_140C65490 = 104;
            return 3221225595LL;
          }
          *v8 = &guard_dispatch_icall;
          if ( *(_QWORD *)(v2 + 16) )
            MiSetImageProtection(a1, (unsigned __int64)v8, 8);
        }
        else
        {
          *v8 = &guard_dispatch_icall;
        }
      }
    }
    if ( *(_DWORD *)v6 >= 0xC0u && (*(_DWORD *)(v6 + 144) & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v6 + 184) )
        MiCheckForDiscardableLongJumpTable(a1, v6);
    }
    return 0LL;
  }
  if ( !v2 )
  {
    *v7 = guard_check_icall;
    goto LABEL_14;
  }
  if ( (unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v5 + 112), 8) )
  {
    *v7 = guard_check_icall;
    if ( *(_QWORD *)(v2 + 16) )
      MiSetImageProtection(a1, (unsigned __int64)v7, 8);
    goto LABEL_14;
  }
  MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
  dword_140C65490 = 103;
  return 3221225595LL;
}
