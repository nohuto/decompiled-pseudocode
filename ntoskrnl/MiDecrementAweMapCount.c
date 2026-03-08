/*
 * XREFs of MiDecrementAweMapCount @ 0x14064709C
 * Callers:
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiUnmapLegacyAwePage @ 0x14064992C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A3F148 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateAndLockAweMapCountPage @ 0x140649BE0 (MiValidateAndLockAweMapCountPage.c)
 */

__int64 __fastcall MiDecrementAweMapCount(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rdi
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r9
  volatile signed __int64 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rcx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r11
  _DWORD *v28; // r9
  int v29; // edx
  unsigned __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+68h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 16);
  v30 = 0LL;
  v6 = a2 / v4;
  v31 = *(_QWORD *)(a1 + 32);
  v9 = 0LL;
  v10 = MiValidateAndLockAweMapCountPage(a1, a2, &v30);
  v11 = v10;
  if ( v10 == 17 )
    return -1LL;
  v13 = (_QWORD *)v30;
  if ( v30 < 0xFFFFDE0000000000uLL || v30 >= 48 * qword_140C65820 - 0x21FFFFFFFFD0LL )
  {
    v14 = 0LL;
  }
  else
  {
    v9 = v30;
    v14 = v30;
    v13 = 0LL;
    if ( v30 )
    {
      v15 = (volatile signed __int64 *)(v30 + 24);
      v16 = *(_QWORD *)(v30 + 24);
      v17 = (v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v30 + 24) = v16 ^ (v17 ^ v16) & 0x3FFFFFFFFFFFFFFFLL;
      v13 = 0LL;
      goto LABEL_9;
    }
  }
  v18 = *v13 ^ (*v13 ^ (((*v13 >> 17) - 1LL) << 17)) & 0x7FFFFE0000LL;
  *v13 = v18;
  v17 = (v18 >> 17) & 0x3FFFFF;
  v15 = (volatile signed __int64 *)(v14 + 24);
LABEL_9:
  if ( (a4 & 1) != 0 )
  {
    if ( v9 )
      *v15 |= 0x4000000000000000uLL;
    else
      *v13 |= 0x8000uLL;
  }
  if ( !v17 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v31 + 4 * (v6 >> 5)), ~(1 << (v6 & 0x1F)));
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      v19 = *a3;
      if ( *a3 )
        v19 = (v19 - qword_140C67A70) >> 3;
      *v13 ^= (*v13 ^ (v19 << 17)) & 0x7FFFFE0000LL;
      *a3 = (__int64)v13;
    }
    else
    {
      if ( v4 == 1 )
      {
        *(_QWORD *)(v9 + 16) = *a3;
      }
      else
      {
        *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 5;
        *(_QWORD *)v9 ^= (*(_QWORD *)v9 ^ ((unsigned __int64)*a3 >> 3)) & 0xFFFFFFFFFFELL;
      }
      *a3 = v9;
    }
  }
  if ( v9 )
  {
    _InterlockedAnd64(v15, 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_38;
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    if ( CurrentIrql > 0xFu )
      goto LABEL_38;
    if ( (unsigned __int8)v11 > 0xFu )
      goto LABEL_38;
    if ( CurrentIrql < 2u )
      goto LABEL_38;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
    v24 = (v23 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v23;
    if ( !v24 )
      goto LABEL_38;
    v25 = (__int64)CurrentPrcb;
  }
  else
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v13 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v13 - qword_140C67A70) >> 3) & 0x1F)));
    if ( !KiIrqlFlags )
      goto LABEL_38;
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    if ( v26 > 0xFu )
      goto LABEL_38;
    if ( (unsigned __int8)v11 > 0xFu )
      goto LABEL_38;
    if ( v26 < 2u )
      goto LABEL_38;
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
    v24 = (v29 & v28[5]) == 0;
    v28[5] &= v29;
    if ( !v24 )
      goto LABEL_38;
    v25 = (__int64)v27;
  }
  KiRemoveSystemWorkPriorityKick(v25);
LABEL_38:
  __writecr8(v11);
  return v17;
}
