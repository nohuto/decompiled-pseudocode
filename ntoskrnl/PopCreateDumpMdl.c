__int64 __fastcall PopCreateDumpMdl(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 Number; // r11
  unsigned __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 result; // rax

  Number = KeGetCurrentPrcb()->Number;
  if ( a3 >= a4 )
    PopInternalError(0xA179CuLL);
  v6 = a4 - a3;
  if ( v6 >= *(unsigned int *)(a1 + 284) )
    v6 = *(unsigned int *)(a1 + 284);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 10) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_WORD *)(a2 + 8) = 8 * (v6 + 6);
  v7 = (_QWORD *)(a2 + 48);
  for ( *(_QWORD *)(a2 + 40) = (unsigned int)((_DWORD)v6 << 12); v6; --v6 )
    *v7++ = a3++;
  result = MmMapMemoryDumpMdlEx(
             *(_QWORD *)((Number << 7) + *(_QWORD *)(a1 + 264) + 8),
             *(unsigned int *)(a1 + 284),
             a2,
             0);
  if ( (*(_DWORD *)(a2 + 40) & 0xFFF) != 0 )
  {
    PopInternalAddToDumpFile(a2, 0x30u, 0LL);
    KeBugCheckEx(0xA0u, 0x106uLL, 0xAuLL, a2, 0LL);
  }
  return result;
}
