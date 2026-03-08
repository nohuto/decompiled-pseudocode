/*
 * XREFs of MiStoreCheckCandidatePage @ 0x1404650E0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140229574 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 *a3,
        _OWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v13; // r14
  char PfnPriority; // al
  char v15; // cl
  int v16; // r9d
  _QWORD *v17; // r8
  __int128 v19; // [rsp+20h] [rbp-10h]
  __int64 v20; // [rsp+60h] [rbp+30h]

  v5 = 0;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140C67048
                                                           + 8
                                                           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
                                               + 1188LL) << 60);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v19 + 1) = 3LL;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( (unsigned int)MiGetSystemRegionType(v10) == 5 )
  {
    *(_QWORD *)&v19 = v10 - 1432;
    *((_QWORD *)&v19 + 1) = 0xFFFFF6FB7DBED000uLL;
LABEL_19:
    v20 = *a5;
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v15 = (*(_BYTE *)(BugCheckParameter2 + 34) & 0xC0) - 64;
    *a3 = v9;
    LODWORD(v20) = v16 | v20 & 0xFFF90C00 | (v15 != 0 ? 0x20000 : 0) | ((PfnPriority & 7) << 13) | 0xC00;
    *v17 = v20;
    *a4 = v19;
    return v5;
  }
  v11 = (__int64)(v10 << 25) >> 16;
  HIDWORD(v19) = HIDWORD(v11);
  if ( (unsigned int)MiGetSystemRegionType(v11) != 1
    && v11 > 0x7FFFFFFEFFFFLL
    && (v11 < qword_140C6A1D8 || v11 > qword_140C66CF0)
    && (v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    *(_QWORD *)&v19 = 0LL;
    DWORD2(v19) = v11 & 0xFFFFFFFC | 2;
    goto LABEL_19;
  }
  TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
  if ( TopLevelPfn == BugCheckParameter2 )
  {
    return (unsigned int)-1073741253;
  }
  else
  {
    v13 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    *(_QWORD *)&v19 = v13;
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    {
      DWORD2(v19) = v11 & 0xFFFFFFFC | 1;
      goto LABEL_19;
    }
    if ( !(unsigned int)MiIsStoreProcess(v13) )
    {
      DWORD2(v19) = v11 & 0xFFFFFFFC;
      goto LABEL_19;
    }
    return (unsigned int)-1073741401;
  }
}
