__int64 __fastcall sub_140095B80(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v9; // r14
  _BYTE *v10; // rbx

  v5 = a4;
  if ( ((*(_BYTE *)(a1 + 720) != 0) & *(_BYTE *)(a1 + 600)) == 0 || !(unsigned __int8)sub_140095F4C(a1, a2, a4) )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 12) <= *(_DWORD *)(a1 + 768) )
    {
      if ( !((*a3 & 0x7F) * *(unsigned __int8 *)(a1 + 680) * (*a3 >> 7)) )
        return 0LL;
      v9 = v5;
      v10 = (_BYTE *)(*(_QWORD *)(a1 + 648) + *(_QWORD *)(a1 + 656) * v5);
      sub_140095EA4(a1, a2, a3, v10);
      if ( (*v10 & 0x30) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 696) * v9 + *(_QWORD *)(a1 + 688)) & 0xFFFFF) == 0 )
        return 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 864));
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 856));
    }
    return 3221225485LL;
  }
  if ( *a3 < 0x80u || !*((_BYTE *)a3 + 2) )
    return 3221225485LL;
  return 0LL;
}
