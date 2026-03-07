__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  char v9; // r9
  int v10; // r12d
  unsigned int v11; // esi
  __int64 result; // rax
  __int64 *PteAddress; // rax
  unsigned __int64 v14; // rdi
  int v15; // r15d
  __int64 v16; // rdi
  unsigned int SessionId; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h] BYREF

  v22 = 0LL;
  v7 = MiSectionControlArea(a1);
  v8 = *(unsigned int *)(*(_QWORD *)v7 + 8LL);
  if ( (v9 & 1) == 0 )
  {
    v10 = 1;
    v11 = -1;
    result = MiChargeSystemImageCommitment(v6, 1LL);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    PteAddress = (__int64 *)MiGetPteAddress(a2);
    v14 = 0LL;
    v21 = PteAddress;
    if ( a3 )
    {
      v14 = a2 + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v7 + 8LL) << 12);
      v15 = MiMapPatchTable(v14, a3);
      if ( v15 < 0 )
      {
LABEL_23:
        if ( v10 == 1 )
        {
          MiChargeSystemImageCommitment(a1, 0LL);
        }
        else if ( (*(_DWORD *)(v7 + 56) & 0x8000000) != 0 )
        {
          MiDereferencePerSessionProtos((__int64 *)v7, v11);
        }
        if ( (unsigned int)MiGetSystemRegionType(a2) == 1 && a2 != *(_QWORD *)(*(_QWORD *)v7 + 32LL) )
          MiDeleteSessionDriverProtos((__int64 *)v7);
        return (unsigned int)v15;
      }
      PteAddress = v21;
    }
    v15 = MiAddMappedPtes(PteAddress, v8, v7, &v22, v11, 1);
    if ( v15 >= 0 )
    {
      if ( v10 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 3, v8);
      return 0LL;
    }
    if ( v14 )
    {
      v20 = MiGetPteAddress(v14);
      MiUnmapPatchTable(v20);
    }
    goto LABEL_23;
  }
  v16 = MiBytesToMapSystemImage(v8 << 12);
  if ( !v16 )
    return 3221225503LL;
  v10 = 0;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( (*(_DWORD *)(v7 + 56) & 0x8000000) == 0
    || (result = MiCreatePerSessionProtos((_QWORD *)v7, SessionId), (int)result >= 0) )
  {
    MiGetPteAddress(v16 + a2 - 1);
    v18 = MiGetPteAddress(a2);
    if ( (unsigned int)MiMakeZeroedPageTables(v18, v19, 1, 1) )
      goto LABEL_3;
    if ( (*(_DWORD *)(v7 + 56) & 0x8000000) != 0 )
      MiDereferencePerSessionProtos((__int64 *)v7, v11);
    return 3221225495LL;
  }
  return result;
}
