/*
 * XREFs of MiMakeDriverPageStayResident @ 0x140617F48
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiRemoveSystemImagePage @ 0x1402E3EA0 (MiRemoveSystemImagePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

char __fastcall MiMakeDriverPageStayResident(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v6; // r8
  const signed __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 272);
  v6 = (a3 - *(_QWORD *)(a1 + 48)) >> 12;
  v7 = *(const signed __int64 **)(v3 + 8);
  if ( !_bittest64(v7, (unsigned int)v6) )
  {
    *((_BYTE *)v7 + ((unsigned __int64)(unsigned int)v6 >> 3)) |= 1 << (v6 & 7);
    LOBYTE(v3) = MiGetWsleContents((__int64)v7, a3) & 0xF;
    if ( (_BYTE)v3 != 9 )
    {
      v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v12 = MI_READ_PTE_LOCK_FREE(v8);
      v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      MiRemoveSystemImagePage(a2, v8, v9);
      LOBYTE(v3) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return v3;
}
