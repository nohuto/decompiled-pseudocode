__int64 __fastcall HalpPciGetHpetInterruptSourceAmd(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  _BYTE *v11; // rdx
  _BYTE *v12; // r8

  v3 = a1 + 48;
  v4 = a1 + *(unsigned int *)(a1 + 4);
  v7 = -1073741275;
LABEL_11:
  while ( v3 + 4 <= v4 )
  {
    v8 = *(unsigned __int16 *)(v3 + 2);
    if ( (unsigned int)v8 < 4 )
      break;
    v9 = v3 + v8;
    if ( v3 + v8 > v4 )
      break;
    v10 = v3;
    v3 += v8;
    if ( *(_BYTE *)v10 == 16 )
    {
      v11 = (_BYTE *)(v10 + 24);
      if ( v10 + 24 < v9 )
      {
        while ( 1 )
        {
          v12 = &v11[1LL << ((*v11 >> 6) + 2)];
          if ( (unsigned __int64)v12 > v3 )
            break;
          if ( *v11 == 72 && v11[7] == 2 && v11[4] == a2 )
          {
            v7 = 0;
            *(_QWORD *)(a3 + 4) = 0LL;
            *(_DWORD *)a3 = 1;
            *(_DWORD *)(a3 + 4) = *(unsigned __int16 *)(v10 + 16);
            *(_BYTE *)(a3 + 8) = v11[6];
            *(_BYTE *)(a3 + 9) = (v11[5] >> 3) & 0x1F;
            *(_BYTE *)(a3 + 10) = v11[5] & 7;
            return v7;
          }
          v11 += 1LL << ((*v11 >> 6) + 2);
          if ( (unsigned __int64)v12 >= v3 )
            goto LABEL_11;
        }
      }
    }
  }
  return v7;
}
