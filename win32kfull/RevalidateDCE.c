__int64 __fastcall RevalidateDCE(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // r9
  __int64 v6; // r10
  bool v7; // zf
  __int64 v9; // rax

  v3 = *(unsigned int *)(a1 + 64);
  if ( (v3 & 0x1000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 24);
    if ( (int)v3 >= 0 )
    {
      v3 = (unsigned int)v3 & 0xFFFFFFE7;
      *(_DWORD *)(a1 + 64) = v3;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v5 + 136) + 8LL) + 8LL) >= 0
        || (a3 = *(_QWORD *)(v5 + 40), (*(_BYTE *)(a3 + 21) & 1) == 0)
        && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 2) != 0
        || (v9 = *(_QWORD *)(v6 + 40), ((*(_BYTE *)(a3 + 31) ^ *(_BYTE *)(v9 + 31)) & 0x10) != 0) )
      {
        a3 = (unsigned int)v3;
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x22) == 2 )
        {
          a3 = (unsigned int)v3 | 8;
          *(_DWORD *)(a1 + 64) = a3;
        }
        v3 = (unsigned int)a3;
        v7 = (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) == 0;
      }
      else
      {
        v7 = (*(_BYTE *)(v9 + 31) & 4) == 0;
      }
      if ( !v7 )
        v3 = (unsigned int)v3 | 0x10;
    }
    LODWORD(v3) = v3 | 0x2000;
    *(_DWORD *)(a1 + 64) = v3;
    return UserSetDCVisRgn(a1, v3, a3, v5);
  }
  else
  {
    SpbCheckDce(a1);
    return InvalidateDCE(a1);
  }
}
