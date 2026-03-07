__int64 __fastcall MiStoreWriteIssue(
        __int64 a1,
        __int64 a2,
        union _MM_STORE_KEY *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  __int64 result; // rax
  __int64 v11; // r10
  _SLIST_ENTRY *v12; // r11

  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 56;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 4096LL;
  *(_WORD *)(a1 + 82) |= 2u;
  *(_QWORD *)(a1 + 120) = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  *(_QWORD *)(a1 + 56) = a7;
  LODWORD(a7) = 0;
  result = SmKeyConvert(a3, (union _SM_PAGE_KEY *)&a7);
  if ( (int)result >= 0 )
    return SmpPageWrite(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) + 200LL)
                       + 24LL),
             &a7,
             a4,
             a6,
             v11,
             a5,
             v12 + 1,
             a8);
  return result;
}
