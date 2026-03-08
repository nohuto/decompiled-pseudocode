/*
 * XREFs of MiCombineCandidate @ 0x14032C640
 * Callers:
 *     MiCrcStillIntact @ 0x140210E18 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 *     MiMapArbitraryPage @ 0x14029EE40 (MiMapArbitraryPage.c)
 *     MiRecheckCombineVm @ 0x14029F408 (MiRecheckCombineVm.c)
 *     MiComputeCombineHash @ 0x14032C2E0 (MiComputeCombineHash.c)
 *     MiCombinePte @ 0x140650CA0 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402E9820 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MI_IS_RESET_PTE @ 0x14032F190 (MI_IS_RESET_PTE.c)
 */

__int64 __fastcall MiCombineCandidate(_QWORD *a1, char a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  ULONG_PTR v5; // rdi
  unsigned int v6; // esi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  int v10; // ecx
  unsigned __int64 v11; // rax
  bool v12; // zf
  struct _LIST_ENTRY *Flink; // rax
  __int64 v15; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h]
  unsigned __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v3 = a3[1];
  *(_OWORD *)BugCheckParameter2 = *a3;
  v4 = a3[2];
  v17 = v3;
  v18 = v4;
  if ( (BYTE2(v4) & 7u) <= 1 )
    return 0LL;
  v5 = BugCheckParameter2[1];
  if ( *(_QWORD *)(qword_140C67048 + 8 * ((*((_QWORD *)&v18 + 1) >> 43) & 0x3FFLL)) != *a1 && (a2 & 1) == 0 )
    return 0LL;
  if ( v18 < 0
    || (*((_QWORD *)&v18 + 1) & 0x10000000000LL) != 0
    || (BYTE3(v18) & 8) != 0
    || BugCheckParameter2[1] < 0xFFFFF68000000000uLL
    || BugCheckParameter2[1] > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v17 + 1) & 0x4000000000000000LL) != 0
    || ((*((_QWORD *)&v18 + 1) >> 60) & 7) == 4
    || (BugCheckParameter2[1] | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (BugCheckParameter2[1] | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (BYTE3(v18) & 0x20) != 0 )
  {
    return 0LL;
  }
  v6 = 1;
  if ( (unsigned int)MiCheckSlabPfnBitmap((__int64)a3, 1LL, 0) )
    return 0LL;
  v7 = v17;
  if ( (unsigned __int64)&v17 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    v7 = v17;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = v17 | 0x20;
      v15 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
      if ( (v15 & 0x20) == 0 )
        v7 = v17;
      if ( (v15 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v19 = v7;
  if ( (v7 & 1) != 0 || v7 && qword_140C657C0 && (qword_140C657C0 & v7) == 0 )
    return 0LL;
  v8 = (v7 >> 5) & 0x1F;
  if ( (_DWORD)v8 == 31
    || (_DWORD)v8 == 24
    || ((v7 >> 5) & 0x18) == 0x10
    || (unsigned int)v8 >= 0x1E
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)BugCheckParameter2) )
  {
    return 0LL;
  }
  v9 = (__int64)(v5 << 25) >> 16;
  if ( v9 >= 0xFFFF800000000000uLL )
    v10 = byte_140C6A058[((v9 >> 39) & 0x1FF) - 256];
  else
    v10 = 0;
  if ( v5 > 0xFFFFF6BFFFFFFF78uLL || v5 < 0xFFFFF68000000000uLL )
  {
    if ( v10 == 6 )
    {
      v6 = 2;
    }
    else
    {
      if ( v10 != 1 )
        return 0LL;
      v6 = 3;
    }
  }
  if ( (unsigned __int8)((BYTE2(v18) & 7) - 2) > 1u || (_WORD)v18 )
  {
    if ( (BYTE2(v18) & 7) != 6
      || (BugCheckParameter2[0] & 1) == 0
      || (_WORD)v18 != 1
      || (*((_QWORD *)&v18 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
      || (*((_QWORD *)&v17 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    {
      return 0LL;
    }
    if ( v6 != 1 || (v7 & 0x400) != 0 )
      return v6;
    if ( (v7 & 0x800) == 0
      && (((unsigned __int8)v7 >> 2) & (unsigned __int8)v18) == 0
      && (((unsigned __int8)v7 >> 1) & (unsigned __int8)v18) == 0 )
    {
      v11 = v7;
      if ( qword_140C657C0 )
      {
        if ( (v7 & 0x10) == 0 )
          v11 = v7 & ~qword_140C657C0;
      }
      if ( HIDWORD(v11) == 1 )
        return 0LL;
    }
    v12 = (v7 & 0x4000000) == 0;
    goto LABEL_44;
  }
  if ( v6 != 1 )
    return v6;
  if ( !(unsigned int)MI_IS_RESET_PTE(v7) )
  {
    v12 = (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v19) == 0;
LABEL_44:
    if ( v12 )
      return v6;
  }
  return 0LL;
}
