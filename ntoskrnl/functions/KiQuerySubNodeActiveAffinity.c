unsigned __int64 __fastcall KiQuerySubNodeActiveAffinity(__int64 a1, __int64 a2, _WORD *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v3 = (_QWORD *)(a1 + 128);
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)a2 = *v3;
    result = *(unsigned __int16 *)(a1 + 136);
    *(_WORD *)(a2 + 8) = result;
  }
  if ( a3 )
  {
    v5 = *v3 - ((*v3 >> 1) & 0x5555555555555555LL);
    result = (0x101010101010101LL
            * (((v5 & 0x3333333333333333LL)
              + ((v5 >> 2) & 0x3333333333333333LL)
              + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    *a3 = result;
  }
  return result;
}
