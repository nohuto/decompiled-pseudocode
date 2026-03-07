__int64 __fastcall MmAllocateMdlForIoSpace(_QWORD *a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 Mdl; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned int v14; // r8d
  _QWORD *i; // r11
  unsigned int v16; // r10d
  unsigned __int64 v17; // r9
  __int64 v18; // rdx

  v4 = 0;
  v5 = 0LL;
  v7 = a1;
  v8 = (__int64)a1;
  if ( a2 )
  {
    while ( (*(_DWORD *)(v8 + 8) & 0xFFF) == 0 )
    {
      if ( (*(_DWORD *)v8 & 0xFFF) != 0 )
        break;
      v9 = *(_QWORD *)v8 >> 12;
      if ( v9 <= qword_140C65820 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        break;
      v10 = v5 + *(_QWORD *)(v8 + 8);
      if ( v10 < v5 )
        break;
      v5 += *(_QWORD *)(v8 + 8);
      if ( v10 > 0xFFFFFFFF )
        break;
      ++v4;
      v8 += 16LL;
      if ( v4 >= a2 )
        goto LABEL_9;
    }
    return 3221225711LL;
  }
  else
  {
LABEL_9:
    Mdl = IopAllocateMdl(0LL, v5, 0, v8, 0LL, 0);
    v12 = Mdl;
    if ( Mdl )
    {
      v14 = 0;
      for ( i = (_QWORD *)(Mdl + 48); v14 < a2; v7 += 2 )
      {
        v16 = 0;
        v17 = v7[1] >> 12;
        v18 = *v7 >> 12;
        if ( v17 )
        {
          do
          {
            ++v16;
            *i++ = v18++;
          }
          while ( v16 < v17 );
        }
        ++v14;
      }
      *(_QWORD *)(Mdl + 16) = 0LL;
      *(_WORD *)(Mdl + 10) |= 0x802u;
      result = 0LL;
      *a3 = v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
