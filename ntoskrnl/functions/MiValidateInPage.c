__int64 __fastcall MiValidateInPage(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r10
  PVOID v4; // r15
  ULONG_PTR v6; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 *v9; // r14
  int v10; // edx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  int v13; // edx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdi
  int v16; // ebp
  int v17; // ebx
  int v18; // ebp
  int v19; // r12d
  int v20; // edi
  __int64 v21; // rbp
  ULONG_PTR v22; // rcx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r12
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 Flink; // rdx
  _KPROCESS *v28; // rcx
  __int64 v29; // r8
  __int64 result; // rax
  __int16 v31; // ax
  PVOID v32; // rax
  int v33; // edi
  int v34; // r8d
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rax
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+50h] [rbp-58h]
  char v43; // [rsp+58h] [rbp-50h]
  char v44; // [rsp+B0h] [rbp+8h]
  unsigned int v45; // [rsp+B8h] [rbp+10h]
  _KPROCESS *Process; // [rsp+C0h] [rbp+18h]
  PVOID v47; // [rsp+C8h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2 + 272;
  v4 = 0LL;
  v45 = 0;
  v44 = 0;
  v6 = **(_QWORD **)(a2 + 208);
  BugCheckParameter2 = v6;
  v7 = *(_QWORD *)(v6 + 96);
  if ( *(_QWORD *)(a2 + 256) )
    v3 = *(_QWORD *)(a2 + 256);
  v41 = *(_QWORD *)(v6 + 96);
  v42 = v3;
  v8 = *(unsigned int *)(v3 + 40);
  v9 = (__int64 *)(v3 + 48);
  v10 = *(_DWORD *)(v3 + 44);
  v11 = ((unsigned __int64)(((_WORD)v10 + (unsigned __int16)*(_DWORD *)(v3 + 32)) & 0xFFF) + v8 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = v3 + 8 * ((unsigned int)v11 + 6LL);
  *(_QWORD *)(a2 + 96) += (unsigned int)(v2 - v8 - v10);
  v13 = 2;
  v14 = v2 - *(_DWORD *)(v3 + 40) - *(_DWORD *)(v3 + 44);
  *(_DWORD *)(a2 + 188) += ((v14 & 0xFFF) != 0) + (v14 >> 12);
  v15 = *(_QWORD *)(v7 + 40);
  if ( v15 >> 3 <= 1 )
    v13 = 0;
  v16 = (*(_DWORD *)(48 * *v9 - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
  v43 = v16;
  if ( (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 && v15 >> 3 > 1 )
  {
    v17 = v13 | 1;
  }
  else
  {
    v17 = v13;
    if ( (MiFlags & 0x20000) != 0 && (v16 & 2) != 0 )
      v44 = 3;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x10000) != 0 )
  {
    v17 |= 4u;
    if ( (_bittest((const signed __int32 *)&MiFlags, 0xDu) & ((v17 & 1) != 0)) != 0 )
      v17 &= ~4u;
  }
  v18 = v16 & 2;
  if ( v18 && (MiFlags & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
    MiFlushEntireTbDueToAttributeChange();
    v7 = v41;
    v3 = v42;
  }
  v47 = 0LL;
  if ( (v17 & 2) != 0
    && (unsigned int)v11 > 1
    && (v31 = *(_WORD *)(v3 + 10), (v31 & 0x4000) != 0)
    && ((v31 & 5) != 0
      ? (v4 = *(PVOID *)(v3 + 24), v47 = v4)
      : (v32 = MmMapLockedPagesSpecifyCache((PMDL)v3, 0, MmCached, 0LL, 0, 0xC0000010), v7 = v41, v4 = v32, v47 = v32),
        v4) )
  {
    v33 = v15 & 0xFFFFFFF8;
    if ( (v17 & 1) != 0 && !*(_QWORD *)(v7 + 56) )
    {
      result = MiGetSectionStrongImageReference(v7);
      if ( (int)result < 0 )
        return result;
    }
    v34 = (_DWORD)v11 << 12;
    v19 = (int)Process;
    if ( (int)SeValidateImageData(v33, (_DWORD)v4, v34, *(_QWORD *)(a2 + 96), v18 != 0 ? 2 : 0, (__int64)Process) < 0 )
    {
      v4 = 0LL;
      v47 = 0LL;
    }
  }
  else
  {
    v19 = (int)Process;
  }
  if ( (unsigned __int64)v9 >= v12 )
    return v45;
  v20 = BugCheckParameter2;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = 48 * *v9 - 0x220000000000LL;
    v17 ^= ((unsigned __int8)v17 ^ (unsigned __int8)(2 * v17)) & 8;
    if ( v22 == qword_140C69380 || (*(_BYTE *)(v22 + 34) & 7) == 7 && *(_QWORD *)(v22 + 8) == -3LL )
      goto LABEL_25;
    if ( v4 )
    {
      MiMarkPfnVerified(v22, v44);
      goto LABEL_19;
    }
    if ( (v17 & 2) != 0 )
    {
      v35 = MiValidateImagePfn(v20, *(_QWORD *)(a2 + 96), v19, -1, BugCheckOnFailure, v43, *v9, 0);
      if ( v35 < 0 )
        break;
    }
LABEL_19:
    if ( (v17 & 8) == 0 )
      goto LABEL_25;
    if ( (*(_BYTE *)(v42 + 10) & 1) != 0 )
    {
      v23 = *(_QWORD *)(v42 + 24) + (v21 >> 3 << 12);
      v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v25 = *(_QWORD *)v24;
      v26 = MiPteInShadowRange(v24);
      v29 = v26;
      if ( v26 )
      {
        if ( (MiFlags & 0x600000) != 0 )
        {
          v28 = KeGetCurrentThread()->ApcState.Process;
          if ( v28->AddressPolicy != 1 && (v25 & 1) != 0 )
          {
            if ( (v25 & 0x20) != 0 && (v25 & 0x42) != 0 )
              goto LABEL_23;
            v28 = KeGetCurrentThread()->ApcState.Process;
            Flink = (__int64)v28[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v37 = *(_QWORD *)(Flink + 8 * ((v24 >> 3) & 0x1FF));
              Flink = v25 | 0x20;
              if ( (v37 & 0x20) == 0 )
                Flink = v25;
              v25 = Flink;
              if ( (v37 & 0x42) != 0 )
                v25 = Flink | 0x42;
            }
          }
        }
      }
      if ( (v25 & 0x42) == 0 )
      {
        v36 = v25 | 0x842;
        if ( !(_DWORD)v29 )
          goto LABEL_46;
        if ( (unsigned int)MiPteHasShadow(v28, Flink, v29) )
        {
          if ( !HIBYTE(word_140C6697C) && (v36 & 1) != 0 )
            v36 |= 0x8000000000000000uLL;
          *(_QWORD *)v24 = v36;
          MiWritePteShadow(v24, v36);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v36 & 1) != 0 )
          {
            v36 |= 0x8000000000000000uLL;
          }
LABEL_46:
          *(_QWORD *)v24 = v36;
        }
        if ( (MiFlags & 0x300) == 0 )
          KeFlushSingleTb(v23, 0, 1u);
      }
    }
    else
    {
      v23 = 0LL;
    }
LABEL_23:
    if ( (int)MiRelocateImagePfn(BugCheckParameter2, v23, 0LL, Priority, 33) < 0 )
      goto LABEL_83;
    v20 = BugCheckParameter2;
LABEL_25:
    *(_QWORD *)(a2 + 96) += 4096LL;
    ++v9;
    ++*(_DWORD *)(a2 + 188);
    v21 += 8LL;
    if ( (unsigned __int64)v9 >= v12 )
      return v45;
    v4 = v47;
    v19 = (int)Process;
  }
  if ( v35 != -1073741670 )
  {
    v45 = -1073740748;
    if ( (v17 & 1) != 0
      && (((*(_DWORD *)(a2 + 192) & 0x10000) != 0) & _bittest((const signed __int32 *)&MiFlags, 0xDu)) != 0 )
    {
      v17 |= 8u;
    }
    goto LABEL_19;
  }
LABEL_83:
  *(_DWORD *)(a2 + 80) = -1073741670;
  return v45;
}
