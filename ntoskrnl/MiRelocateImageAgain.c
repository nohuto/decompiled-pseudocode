/*
 * XREFs of MiRelocateImageAgain @ 0x1406A160C
 * Callers:
 *     MiValidateExistingImage @ 0x1406A1230 (MiValidateExistingImage.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14020AFAC (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14020B028 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiImageUnused @ 0x1402E9DE8 (MiImageUnused.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiGetControlAreaLoadConfig @ 0x14034C364 (MiGetControlAreaLoadConfig.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiSwitchBaseAddress @ 0x14069F7C4 (MiSwitchBaseAddress.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x1406A190C (MiUpdateImageSystemWideBitmaps.c)
 *     MiSelectImageBase @ 0x1406A1934 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x1407C8860 (MiReturnImageBase.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 *v7; // rbp
  int updated; // edi
  __int64 v10; // r13
  __int64 ControlAreaLoadConfig; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int SessionId; // eax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 96);
  v17 = 0LL;
  v5 = *(_QWORD *)(v2 + 32);
  if ( !v5 )
    return 0LL;
  v15 = -1LL;
  v6 = *(_QWORD *)a1;
  v16 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  updated = 0;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v10 = *(_QWORD *)(v6 + 32);
    v7 = (__int64 *)MiReservePtes((__int64)&qword_140C695C0, 1u);
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      goto LABEL_3;
    }
    updated = MiSelectImageBase(v6, v5, a2, 0, (__int64)&v17);
    if ( updated >= 0 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
      v12 = v17;
      updated = MiUpdateImageSystemWideBitmaps(v13, v17, ControlAreaLoadConfig);
      if ( updated >= 0 )
      {
        if ( v12 == v10 )
        {
LABEL_10:
          updated = 0;
          goto LABEL_3;
        }
        if ( (MiFlags & 0x2000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 )
        {
LABEL_13:
          if ( a2 )
          {
            SessionId = -1;
          }
          else
          {
            SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v12 = v17;
          }
          MiSwitchBaseAddress((_QWORD *)a1, v12, (ULONG_PTR)v7, SessionId);
          goto LABEL_10;
        }
        if ( qword_140C37640 )
        {
          updated = qword_140C37640(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v12);
          if ( updated >= 0 )
            goto LABEL_13;
        }
        else
        {
          updated = -1073741637;
        }
      }
      MiImageUnused(a1, 0, (__int64)&v15);
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v7 )
    MiReleasePtes((__int64)&qword_140C695C0, v7, 1u);
  MiReturnImageBase(&v15);
  return (unsigned int)updated;
}
