_BYTE *__fastcall ExpStampPoolWithQuotaProcess(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  ULONG_PTR v9; // rbx
  _BYTE *result; // rax

  v6 = 0;
  v9 = 0LL;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v9 = BugCheckParameter2 - 16;
    if ( (*(_BYTE *)(BugCheckParameter2 - 16 + 3) & 4) != 0 )
      v9 += -16LL * (unsigned __int8)*(_WORD *)v9;
    *a5 = 16LL * (unsigned __int8)*(_WORD *)(v9 + 2);
    *a6 = *(_DWORD *)(v9 + 4);
    result = (_BYTE *)ExpStampPoolEntryWithQuotaProcess(v9, a3);
  }
  else
  {
    result = (_BYTE *)ExpStampBigPoolEntry(BugCheckParameter2, (__int64)a6);
  }
  if ( !a4
    && (unsigned __int64)(result - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && ((unsigned __int64)result < 0xFFFF800000000000uLL || (*result & 0x7F) != 3) )
  {
    if ( v9 )
      v6 = *(_DWORD *)(v9 + 4);
    KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v6, (ULONG_PTR)result);
  }
  return result;
}
