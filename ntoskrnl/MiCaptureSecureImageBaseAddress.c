/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140A45314
 * Callers:
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14020AFAC (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14020B028 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebx

  v1 = a1[12];
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4);
  if ( qword_140C37640 )
    v6 = qword_140C37640(v5, *(_QWORD *)(*a1 + 32LL));
  else
    v6 = -1073741637;
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4);
  return v6;
}
