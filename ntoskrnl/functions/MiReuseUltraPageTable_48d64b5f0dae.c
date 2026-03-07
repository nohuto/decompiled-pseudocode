unsigned __int64 __fastcall MiReuseUltraPageTable(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // ebx
  int PfnChannel; // eax
  unsigned __int64 result; // rax

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  v5 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * v4) >> 4)) + 2);
  PfnChannel = MiGetPfnChannel(48 * v4 - 0x220000000000LL);
  result = MiManageUltraSpacePageTable(
             (__int64 *)(48 * v4 - 0x220000000000LL),
             (PfnChannel << byte_140C6570E) | (v5 << byte_140C6570D) | (unsigned int)v4 & dword_140C65778,
             0);
  if ( result != v4 )
    *(_QWORD *)(a1 + 8 * v3 + 8) = result;
  return result;
}
