/*
 * XREFs of CmpConstructNameFromKcbNameBlocks @ 0x140778B38
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406A4E54 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpKeyFullNameLength @ 0x1405F3480 (CmpKeyFullNameLength.c)
 *     CmpCopyCompressedName @ 0x1406E2D64 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpConstructNameFromKcbNameBlocks(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  struct _LOOKASIDE_LIST_EX *v5; // r9
  __int64 v6; // rsi
  _WORD *TransientPoolWithTag; // rax
  unsigned int v8; // ebx
  _WORD *v9; // r14
  unsigned __int16 v10; // si
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  unsigned __int8 *v13; // r10
  int v14; // edx
  unsigned __int16 v15; // si
  _WORD *v16; // rcx

  v3 = a1;
  v4 = CmpKeyFullNameLength(a1);
  v6 = v4;
  if ( v4 > 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v4 + 16LL, 0x624E4D43u, v5);
    v8 = 0;
    v9 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v6 + 16);
      *v9 = v6;
      v9[1] = v6;
      *((_QWORD *)v9 + 1) = v9 + 8;
      v10 = (unsigned __int16)v6 >> 1;
      while ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0x40000) != 0 && *(_QWORD *)(v3 + 72) )
        {
          v3 = *(_QWORD *)(v3 + 72);
        }
        else
        {
          v11 = *(_QWORD *)(v3 + 80);
          v12 = *(_WORD *)(v11 + 24);
          v13 = (unsigned __int8 *)(v11 + 26);
          v14 = *(_DWORD *)v11 & 1;
          if ( !v14 )
            v12 >>= 1;
          v15 = v10 - v12;
          v16 = (_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v15);
          if ( v14 )
            CmpCopyCompressedName(v16, 2 * v12, v13, v12);
          else
            memmove(v16, v13, 2LL * v12);
          v10 = v15 - 1;
          *(_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v10) = 92;
          v3 = *(_QWORD *)(v3 + 72);
        }
      }
      *a2 = v9;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
