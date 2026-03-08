/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x140375148
 * Callers:
 *     RtlHpHeapManagerStart @ 0x1403762C8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140375AC8 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x1403A57A4 (RtlCSparseBitmapStart.c)
 */

NTSTATUS __fastcall RtlpHpVaMgrCtxStart(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // r10
  bool v9; // zf
  ULONGLONG v11; // rcx
  NTSTATUS result; // eax
  unsigned int v13; // r11d
  int v14; // ebx
  __int64 v15; // r8
  _DWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+28h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  pullResult = 0LL;
  _BitScanForward(&v6, 0x20u);
  v7 = a5 >> 20;
  v9 = (a5 & 0xFFFFF) == 0;
  *(_DWORD *)(a1 + 24) = v6;
  v11 = v7 + 1;
  if ( v9 )
    v11 = v7;
  result = RtlULongLongMult(v11, 8uLL, &pullResult);
  if ( result >= 0 )
  {
    result = RtlULongLongMult(pullResult, 0x20uLL, &pullResult);
    if ( result >= 0 )
    {
      result = RtlCSparseBitmapStart(a1 + 32, pullResult, v13, 1LL);
      if ( result >= 0 )
      {
        v16[0] = -1;
        *(_DWORD *)a1 = a2;
        *(_QWORD *)(a1 + 8) = a4;
        v14 = 0;
        v17 = 0LL;
        while ( 1 )
        {
          v16[1] = v14;
          v15 = 0x200000LL;
          if ( (unsigned int)(v14 - 2) > 1 && v14 == 4 )
            v15 = 0x40000000LL;
          result = RtlpHpVaMgrCtxAllocatorReference(a1, v16, v15);
          if ( result < 0 )
            break;
          if ( ++v14 >= 6 )
            return 0;
        }
      }
    }
  }
  return result;
}
