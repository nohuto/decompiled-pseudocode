/*
 * XREFs of MiReferenceInPageFile @ 0x14029D328
 * Callers:
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x140636824 (MiPfExecuteReadList.c)
 * Callees:
 *     MiComputeImagePteIndex @ 0x14027D3C0 (MiComputeImagePteIndex.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCanPageMove @ 0x1403349A0 (MiCanPageMove.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  int v13; // esi
  int CanPageMove; // eax

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v7 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 208));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v9 = *(_QWORD *)(a1 + 256);
    v10 = *(_QWORD *)(v2 + 96);
    if ( !v9 )
      v9 = a1 + 272;
    v11 = 48LL * *(_QWORD *)(v9 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v11, a2, v5, v6);
    if ( *(_QWORD *)(v10 + 32) )
    {
      v13 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 192) = v13 | 0x10000;
      if ( (MiFlags & 0x40000) != 0 )
      {
        CanPageMove = MiCanPageMove(v11, v12);
        if ( !CanPageMove
          || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE(v11 + 16) >> 5) & 2) != 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFEFFFF;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v7;
}
