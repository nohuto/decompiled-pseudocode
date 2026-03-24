/*
 * XREFs of MiRelocateImageAgain @ 0x14066A858
 * Callers:
 *     MiValidateExistingImage @ 0x14066A3F8 (MiValidateExistingImage.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402F9E90 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1402FA08C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaLoadConfig @ 0x1402FA0C4 (MiGetControlAreaLoadConfig.c)
 *     MiImageUnused @ 0x140314D6C (MiImageUnused.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     MiReturnImageBase @ 0x1406382F8 (MiReturnImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14066A9FC (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 *     MiSwitchBaseAddress @ 0x14066AF78 (MiSwitchBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rbp
  int updated; // edi
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v12; // r13
  __int64 ControlAreaLoadConfig; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int SessionId; // eax
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 96);
  v19 = 0LL;
  v5 = *(_QWORD *)(v2 + 32);
  if ( !v5 )
    return 0LL;
  v17 = -1LL;
  v6 = *(_QWORD *)a1;
  v18 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  updated = 0;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v12 = *(_QWORD *)(v6 + 32);
    v7 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, 1u, v9, v10);
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      goto LABEL_3;
    }
    updated = MiSelectImageBase(v6, v5, a2, 0, (__int64)&v19);
    if ( updated >= 0 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
      v14 = v19;
      updated = MiUpdateCfgSystemWideBitmap(v15, v19, ControlAreaLoadConfig);
      if ( updated >= 0 )
      {
        if ( v14 == v12 )
        {
LABEL_10:
          updated = 0;
          goto LABEL_3;
        }
        if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 )
        {
LABEL_13:
          if ( a2 )
          {
            SessionId = -1;
          }
          else
          {
            SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v14 = v19;
          }
          MiSwitchBaseAddress(a1, v14, v7, SessionId);
          goto LABEL_10;
        }
        if ( qword_140C1DB60 )
        {
          updated = qword_140C1DB60(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v14);
          if ( updated >= 0 )
            goto LABEL_13;
        }
        else
        {
          updated = -1073741637;
        }
      }
      MiImageUnused(a1, 0, (__int64)&v17);
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v7 )
    MiReleasePtes((__int64)&qword_140C4EF40, v7, 1u);
  MiReturnImageBase((__int64)&v17);
  return (unsigned int)updated;
}
