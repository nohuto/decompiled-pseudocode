__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v17[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v18[18]; // [rsp+50h] [rbp-B8h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v18, 0, 0x88uLL);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
  {
    MiFillPteHierarchy(a2, v17);
    v9 = 4LL;
    while ( 1 )
    {
      v10 = *(&v16 + v9--);
      v11 = MI_READ_PTE_LOCK_FREE(v10);
      if ( (v11 & 1) == 0 )
        return v10;
      if ( v11 < 0 )
        return 0LL;
      if ( v9 == 1 )
      {
        v5 = *(_QWORD *)&v17[0];
        goto LABEL_4;
      }
    }
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result != ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    return result;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
  v6 = *(_QWORD *)v5;
  if ( !(unsigned int)MiPteInShadowRange(v5)
    || (MiFlags & 0x600000) == 0
    || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
  {
    goto LABEL_5;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v14 = v6 | 0x20;
        if ( (v13 & 0x20) == 0 )
          v14 = v6;
        v6 = v14;
        if ( (v13 & 0x42) != 0 )
          v6 = v14 | 0x42;
      }
    }
LABEL_5:
    if ( (v6 & 1) != 0 )
      return 0LL;
  }
  if ( (v6 & 0x400) == 0 )
    return v5;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v6) )
  {
    v16 = 0LL;
    v15 = 0;
    v7 = MiCheckVirtualAddress(a2, &v15, &v16);
    if ( v16 )
    {
      LOBYTE(v8) = 17;
      MiUnlockVadTree(1LL, v8);
    }
    if ( !v7 )
      return 0LL;
  }
  else
  {
    if ( qword_140C657C0 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C657C0;
    v7 = v6 >> 16;
  }
  BYTE5(v18[8]) &= ~1u;
  v18[0] = v7;
  BYTE4(v18[8]) = 17;
  WORD1(v18[8]) = 0;
  v18[9] = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = MiFindActualFaultingPte(v18, v7);
  if ( !result )
    return v5;
  return result;
}
