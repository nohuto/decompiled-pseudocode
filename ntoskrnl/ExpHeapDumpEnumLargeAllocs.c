/*
 * XREFs of ExpHeapDumpEnumLargeAllocs @ 0x14060CF78
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x140559F94 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     IopRemoveLargeAllocsFromPartialDump @ 0x14055B490 (IopRemoveLargeAllocsFromPartialDump.c)
 *     ExpHeapDumpNodeLinksValid @ 0x14060D070 (ExpHeapDumpNodeLinksValid.c)
 */

__int64 __fastcall ExpHeapDumpEnumLargeAllocs(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // r8d
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 i; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax

  v2 = 0;
  if ( MmIsAddressValidEx(a1) && *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v3 = *(_QWORD *)(a1 + 96);
      v4 = *(_DWORD *)(a1 + 528);
      v5 = 0LL;
      v6 = *(_QWORD **)(a1 + 72);
      v7 = (unsigned int)(v4 + 1);
      v8 = (v3 << 12) % v7;
      v9 = (v3 << 12) / v7;
      while ( v6 )
      {
        if ( (unsigned int)ExpHeapDumpNodeLinksValid(v6, v8) )
        {
          IopRemoveLargeAllocsFromPartialDump(
            v6[3] - (unsigned __int16)v6[3],
            (v6[4] & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)v6[3]);
          v10 = (_QWORD *)*v6;
          if ( *v6 || (v10 = (_QWORD *)v6[1]) != 0LL )
          {
            v6 = v10;
          }
          else
          {
            for ( i = v6[2]; ; i = *(_QWORD *)(v13 + 16) )
            {
              v13 = i & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v13 )
              {
                v6 = 0LL;
                goto LABEL_16;
              }
              v12 = *(_QWORD **)(v13 + 8);
              if ( v12 )
              {
                if ( v6 != v12 )
                  break;
              }
              v6 = (_QWORD *)v13;
            }
            v6 = *(_QWORD **)(v13 + 8);
          }
LABEL_16:
          if ( ++v5 <= v9 )
            continue;
        }
        return (unsigned int)-1073740940;
      }
    }
  }
  else
  {
    return (unsigned int)-1073740940;
  }
  return v2;
}
