unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  int v4; // eax
  int v5; // r13d
  unsigned __int64 *v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 LeafVa; // rax
  unsigned int v10; // eax
  __int64 v12; // rbx
  int v13; // r15d
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  int v18; // eax
  bool v19; // zf
  __int64 v20; // [rsp+20h] [rbp-20h]
  __int128 v21; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  *a2 = 0LL;
  v2 = a2;
  if ( !MmIsAddressValidEx(a1) )
    return 0LL;
  v4 = MI_IS_PHYSICAL_ADDRESS(a1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 != 1
      || PsNtosImageBase
      && PsHalImageBase
      && (a1 < PsNtosImageBase || a1 >= PsNtosImageEnd)
      && (a1 < PsHalImageBase || a1 >= PsHalImageEnd) )
    {
      return a1;
    }
    v6 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v7 = v23;
    v8 = ((a1 >> 12) & 0x1FF)
       + (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL);
  }
  else
  {
    v6 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v7 = v23;
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
  }
  v20 = v7 & 0x800;
  if ( (MiFlags & 0xC000) == 0 )
    goto LABEL_10;
  v16 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  if ( (MiFlags & 0x800) == 0 )
    goto LABEL_35;
  if ( v8 > qword_140C65820 || ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
  {
LABEL_43:
    v18 = 0;
    goto LABEL_37;
  }
  v17 = 48 * v8 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    return 0LL;
  v16 = 0x8000000000000000uLL;
  if ( !(unsigned int)MiGetPagePrivilege(48 * v8 - 0x220000000000LL, 1, (unsigned __int64 *)&v21) )
  {
    v7 = v23;
    goto LABEL_43;
  }
  if ( (MiFlags & 0x4000) == 0
    || *(__int64 *)(v17 + 40) >= 0
    || (*(_DWORD *)(v17 + 16) & 0x400LL) != 0
    || a1 < 0xFFFF800000000000uLL )
  {
    v7 = v23;
    goto LABEL_36;
  }
  v7 = v23;
LABEL_35:
  *(_QWORD *)&v21 = a1;
LABEL_36:
  v18 = KeSetPagePrivilege(v8, &v21, 12LL);
LABEL_37:
  if ( v16 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), ~v16);
    v7 = v23;
  }
  if ( v18 < 0 )
    return 0LL;
  v2 = a2;
LABEL_10:
  if ( v20 && (v7 & 0x42) != 0 )
  {
LABEL_12:
    if ( (MiFlags & 0x100) == 0 )
    {
      LeafVa = MiGetLeafVa(a1);
      v10 = MiRealVaToFlushType(LeafVa);
      KeFlushSingleCurrentTb(a1, v10);
    }
    return a1;
  }
  if ( v5 || (unsigned int)MiDbgMarkPfnModified(a1, v7) )
  {
    *v2 = v7;
    v12 = v7 | 0x862;
    v23 = v12;
    _InterlockedIncrement(&dword_140C67CD4);
    v13 = 0;
    v14 = v12;
    if ( !MiPteInShadowRange((unsigned __int64)v6) )
    {
LABEL_17:
      *v6 = v14;
      if ( v13 )
        MiWritePteShadow((__int64)v6, v14, v15);
      _InterlockedDecrement(&dword_140C67CD4);
      goto LABEL_12;
    }
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_17;
      v19 = (v12 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v19 = (v12 & 1) == 0;
    }
    if ( !v19 )
      v14 = v12 | 0x8000000000000000uLL;
    goto LABEL_17;
  }
  return 0LL;
}
