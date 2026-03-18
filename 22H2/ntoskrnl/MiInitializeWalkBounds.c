/*
 * XREFs of MiInitializeWalkBounds @ 0x14025D2CC
 * Callers:
 *     MiWalkPageTables @ 0x14025BBE0 (MiWalkPageTables.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x14025D3F4 (MiHyperSpaceSize.c)
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r11
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx

  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 1;
    v5 = *(_BYTE *)(v3 + 184) & 7;
    if ( (*(_BYTE *)(v3 + 184) & 7) == 0 )
    {
      *a2 = 0LL;
      a2[1] = 0x7FFFFFFFFFFFLL;
      a2[2] = qword_140C67168;
      v6 = MiHyperSpaceSize(v5, 1LL);
      v4 = 2;
      *(_QWORD *)(v7 + 24) = v6 + qword_140C67168 - 1;
      return v4;
    }
    v9 = v5 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v15 = v11 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( !v16 )
            {
              *a2 = qword_140C6A618;
              v14 = qword_140C6A620 + qword_140C6A618 - 1;
              goto LABEL_11;
            }
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 != 1 )
                return v4;
              *a2 = qword_140C6A5E8;
              v14 = qword_140C6A5F0 + qword_140C6A5E8 - 1;
              goto LABEL_11;
            }
            *a2 = qword_140C66E30;
            v12 = qword_140C66E10;
            v13 = qword_140C66E30;
          }
          else
          {
            *a2 = qword_140C66F08;
            v12 = qword_140C66EE8;
            v13 = qword_140C66F08;
          }
        }
        else
        {
          *a2 = qword_140C66F98;
          v12 = qword_140C66F78;
          v13 = qword_140C66F98;
        }
      }
      else
      {
        *a2 = qword_140C66FE0;
        v12 = qword_140C66FC0;
        v13 = qword_140C66FE0;
      }
      v14 = v13 - 1 + (v12 << 21);
    }
    else
    {
      *a2 = qword_140C65AE8;
      v14 = qword_140C65AE8 + 0x7FFFFFFFFFLL;
    }
LABEL_11:
    a2[1] = v14;
    return v4;
  }
  *a2 = 0LL;
  a2[1] = 0xFFFFF67FFFFFFFFFuLL;
  a2[3] = -1LL;
  a2[2] = 0xFFFFF70000000000uLL;
  return 2LL;
}
