void __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 v3; // esi
  unsigned int v4; // r12d
  __int64 **Address; // rbp
  unsigned int v8; // edi
  unsigned __int64 v9; // rbx
  int v10; // edx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned __int64 v17; // rbp
  unsigned int i; // r12d
  unsigned __int64 v19; // rbp
  __int64 v20; // r15
  unsigned __int64 v21; // rbx
  int v22; // ebp
  __int64 v23; // rdx
  int v24; // r9d
  unsigned __int64 v25; // r10
  unsigned int FreePageFileSpace; // eax
  unsigned __int64 v27; // rsi
  unsigned int v28; // edi
  unsigned __int64 j; // r14
  int v30; // eax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  unsigned int v38; // ebp
  int v39; // ebp
  __int128 v40; // [rsp+30h] [rbp-68h] BYREF
  __int128 v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+50h] [rbp-48h]
  int v43; // [rsp+A0h] [rbp+8h]
  __int64 v44; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v45; // [rsp+B8h] [rbp+20h] BYREF

  v44 = a3;
  v3 = *(_DWORD *)(a1 + 912);
  v4 = v3 & 0x3FF;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( v4 >= 0x10 )
  {
    Address = 0LL;
    v43 = 0;
    if ( !a3 )
    {
      v8 = 1;
      if ( !(unsigned int)MiGetPageFileSectionForReservation(a2, &v40, 1LL) )
        return;
      v15 = *((_QWORD *)&v41 + 1);
      v13 = v41;
      v43 = 1;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      v8 = 1;
      v13 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v15 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
LABEL_14:
      v45 = v15;
      v16 = ((__int64)(v15 - v13) >> 3) + 1;
      if ( v16 > v4 )
      {
        v33 = (__int64)(v15 - a2) >> 3;
        v34 = (__int64)(a2 - v13) >> 3;
        v35 = v16 - v4;
        if ( (unsigned int)v33 < v35 )
        {
          v37 = v35 - v33;
          v36 = 0LL;
          LODWORD(v34) = v34 - v37;
        }
        else
        {
          v36 = (unsigned int)v33 - v35;
        }
        v13 = a2 - 8LL * (unsigned int)v34;
        v45 = a2 + 8 * v36;
      }
      if ( a3 )
        v8 = 129;
      if ( Address && *((int *)Address + 13) < 0 )
        v8 |= ((_DWORD)Address[6] & 0xF80 | 0x40u) >> 5;
      v17 = a2 - 8;
      for ( i = 0; v17 >= v13; v17 -= 8LL )
      {
        if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v17, v8) )
          break;
        ++i;
      }
      v19 = a2 + 8;
      v20 = 0LL;
      if ( a2 + 8 <= v45 )
      {
        v21 = v45;
        do
        {
          if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v19, v8) )
            break;
          v20 = (unsigned int)(v20 + 1);
          v19 += 8LL;
        }
        while ( v19 <= v21 );
      }
      v22 = v20 + i + 1;
      v45 = 0LL;
      if ( (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(a1, &v45) )
      {
        v45 = 0LL;
        v24 = 16;
      }
      if ( v22 == 1 )
      {
        if ( v24 )
          goto LABEL_42;
        v24 = 64;
      }
      FreePageFileSpace = MiFindFreePageFileSpace(a1, &v45, v25, v24 | 1u);
      v23 = FreePageFileSpace;
      if ( FreePageFileSpace == v22 )
        goto LABEL_31;
      _InterlockedCompareExchange(
        (volatile signed __int32 *)(a1 + 912),
        v3 ^ ((unsigned __int16)FreePageFileSpace ^ (unsigned __int16)v3) & 0x3FF,
        v3);
      if ( FreePageFileSpace )
      {
        v38 = v22 - FreePageFileSpace;
        if ( (unsigned int)v20 < v38 )
        {
          v39 = v38 - v20;
          v20 = 0LL;
          i -= v39;
        }
        else
        {
          v20 = (unsigned int)v20 - v38;
        }
LABEL_31:
        v27 = a2 + 8 * v20;
        v28 = v8 & 0xFFFFFFFE;
        for ( j = a2 - 8LL * i;
              j <= v27;
              v45 = MiSwizzleInvalidPte((v31 + 0x100000000LL) ^ (unsigned int)v31 ^ (unsigned int)v32) )
        {
          v30 = MiReservePageFileSpaceForPage(a1, j, v28);
          v31 = v45;
          if ( !v30 )
            MiReleasePageFileInfo(a1, v45, v44 != 0);
          v32 = v31;
          if ( qword_140C657C0 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C657C0;
          if ( v32 && qword_140C657C0 )
          {
            if ( (v32 & 0x10) != 0 )
              LODWORD(v32) = v32 & 0xFFFFFFEF;
            else
              LODWORD(v32) = ~(_DWORD)qword_140C657C0 & v32;
          }
          j += 8LL;
        }
      }
LABEL_42:
      if ( v43 )
        MiReleasePageFileSectionInfo(&v40, v23);
      return;
    }
    v8 = 1;
    v9 = a2 << 25 >> 16;
    MiLockVadTree(1LL);
    Address = MiLocateAddress(v9);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                      + 284));
    if ( Address )
    {
      v10 = *((_DWORD *)Address + 12);
      if ( (v10 & 0x70) == 0
        && (v10 & 0x200004) == 0x200000
        && ((v10 & 0x200000) == 0 || (v10 & 0x800000) == 0 && (v10 & 0x180000u) < 0x100000) )
      {
        v11 = v9 & 0xFFFFFFFFFFE00000uLL;
        if ( v11 < (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) << 12 )
          v12 = 8
              * ((*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) & 0xFFFFFFFFFLL);
        else
          v12 = (v11 >> 9) & 0x7FFFFFFFF8LL;
        v13 = v12 - 0x98000000000LL;
        v14 = v11 + 2093056;
        if ( v14 > (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) << 12 )
          v15 = 8
              * ((*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) & 0xFFFFFFFFFLL)
              - 0x98000000000LL;
        else
          v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_13:
        a3 = v44;
        goto LABEL_14;
      }
    }
  }
}
