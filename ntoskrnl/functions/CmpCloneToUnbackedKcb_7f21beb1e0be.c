__int64 __fastcall CmpCloneToUnbackedKcb(__int64 a1, ULONG_PTR *a2)
{
  __int64 KeyControlBlock; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  _DWORD *v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  KeyControlBlock = CmpAllocateKeyControlBlock();
  v5 = KeyControlBlock;
  if ( KeyControlBlock )
  {
    v7 = (_QWORD *)(KeyControlBlock + 120);
    v7[1] = v7;
    *v7 = v7;
    *(_OWORD *)(v5 + 136) = 0LL;
    *(_OWORD *)(v5 + 152) = 0LL;
    *(_QWORD *)v5 = 1LL;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 40) = -1;
    LODWORD(v7) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 240) = 0LL;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
    *(_DWORD *)(v5 + 16) = (_DWORD)v7;
    *(_DWORD *)(v5 + 248) = 0;
    *(_QWORD *)(v5 + 256) = 0LL;
    *(_DWORD *)(v5 + 264) = 0;
    *(_QWORD *)(v5 + 272) = 0LL;
    *(_QWORD *)(v5 + 216) = v5 + 208;
    *(_QWORD *)(v5 + 208) = v5 + 208;
    *(_QWORD *)(v5 + 232) = v5 + 224;
    *(_QWORD *)(v5 + 224) = v5 + 224;
    *(_DWORD *)(v5 + 284) = -1;
    v8 = *(_DWORD **)(a1 + 80);
    if ( (*v8 & 0xFFFFFFFE) == 0xFFFFFFFE )
    {
      v6 = -1073741670;
      v9 = *(_WORD **)(v5 + 80);
      if ( v9 )
      {
        CmpDereferenceNameControlBlockWithLock(v9);
        *(_QWORD *)(v5 + 80) = 0LL;
      }
      *(_DWORD *)(v5 + 8) |= 0x80000u;
      CmpFreeKeyControlBlock(v5);
    }
    else
    {
      *(_QWORD *)(v5 + 80) = v8;
      *v8 += 2;
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
      {
        *(_BYTE *)(v5 + 65) = ((*(_BYTE *)(v10 + 65) - 1) & 0xFD) == 0;
        CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(a1 + 72));
        *(_QWORD *)(v5 + 72) = *(_QWORD *)(a1 + 72);
      }
      v11 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 8) ^= (*(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 8)) & 0x7FE00000;
      if ( *(_BYTE *)(v11 + 2944) == 1 )
        *(_WORD *)(v5 + 8) |= 0x20u;
      *a2 = v5;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
