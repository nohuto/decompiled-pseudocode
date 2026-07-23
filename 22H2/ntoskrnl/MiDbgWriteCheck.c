/*
 * XREFs of MiDbgWriteCheck @ 0x1405465FC
 * Callers:
 *     MiDbgCopyMemory @ 0x1405457E4 (MiDbgCopyMemory.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiRealVaToFlushType @ 0x140378C18 (MiRealVaToFlushType.c)
 *     KeFlushSingleCurrentTb @ 0x1403897D8 (KeFlushSingleCurrentTb.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 *     MiDbgMarkPfnModified @ 0x140545C2C (MiDbgMarkPfnModified.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r15d
  unsigned __int64 *v5; // r12
  unsigned __int64 v6; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  struct _LIST_ENTRY *v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // r15d
  unsigned __int64 v17; // rdi
  __int64 v18; // r8
  bool v19; // zf
  unsigned __int64 LeafVa; // rax
  unsigned int v21; // eax
  unsigned __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int128 v24; // [rsp+28h] [rbp-18h] BYREF
  int v26; // [rsp+80h] [rbp+40h]

  *a2 = 0LL;
  if ( !MmIsAddressValidEx(a1) )
    return 0LL;
  v3 = MI_IS_PHYSICAL_ADDRESS(a1);
  v26 = v3;
  v4 = v3;
  if ( v3 )
  {
    if ( v3 != 1
      || PsNtosImageBase
      && PsHalImageBase
      && (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
      && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd) )
    {
      return a1;
    }
    v5 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    v6 = v23;
    if ( MiPteInShadowRange((unsigned __int64)&v23)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF)) & 0x20) != 0 )
          v6 |= 0x20uLL;
      }
    }
    v8 = ((v6 >> 12) & 0xFFFFFFFFFLL) + ((a1 >> 12) & 0x1FF);
  }
  else
  {
    v5 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    v9 = v23;
    if ( MiPteInShadowRange((unsigned __int64)&v23)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v10 )
      {
        if ( ((__int64)*(&v10->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF)) & 0x20) != 0 )
          v9 |= 0x20uLL;
      }
    }
    v8 = (v9 >> 12) & 0xFFFFFFFFFLL;
  }
  if ( (MiFlags & 0x10000) == 0 )
    goto LABEL_44;
  v11 = 0LL;
  v12 = 0LL;
  v24 = 0LL;
  if ( (MiFlags & 0x1000) == 0 )
  {
    *(_QWORD *)&v24 = a1;
LABEL_39:
    v13 = KeSetPagePrivilege(v8, &v24, 12);
    goto LABEL_40;
  }
  if ( v8 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v12 = 48 * v8 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      return 0LL;
    v11 = 0x8000000000000000uLL;
    if ( (MiFlags & 0x10000) == 0 || (unsigned int)MiGetPagePrivilege(48 * v8 - 0x58000000000LL, 1, &v24) )
      goto LABEL_39;
  }
  v13 = 0;
LABEL_40:
  if ( v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), ~v11);
  if ( v13 < 0 )
    return 0LL;
  v4 = v26;
LABEL_44:
  if ( (v23 & 0x800) != 0 && (v23 & 0x42) != 0 )
  {
LABEL_59:
    if ( (MiFlags & 0x100) == 0 )
    {
      LeafVa = MiGetLeafVa(a1);
      v21 = MiRealVaToFlushType(LeafVa);
      KeFlushSingleCurrentTb(a1, v21);
    }
    return a1;
  }
  if ( v4 || (unsigned int)MiDbgMarkPfnModified(a1, v23) )
  {
    v14 = v23;
    *a2 = v23;
    v15 = v14 | 0x862;
    v23 = v15;
    _InterlockedIncrement(&dword_140C4E894);
    v16 = 0;
    v17 = v15;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v19 = (v15 & 1) == 0;
          goto LABEL_54;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (v15 & 1) == 0;
LABEL_54:
        if ( !v19 )
          v17 = v15 | 0x8000000000000000uLL;
      }
    }
    *v5 = v17;
    if ( v16 )
      MiWritePteShadow((__int64)v5, v17, v18);
    _InterlockedDecrement(&dword_140C4E894);
    goto LABEL_59;
  }
  return 0LL;
}
