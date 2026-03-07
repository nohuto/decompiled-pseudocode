__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 396LL) & 0x2000000) != 0 )
    {
      v3 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        if ( v4 )
        {
          v5 = *(_DWORD *)(v4 + 1272);
          if ( (v5 & 0x40000) != 0 && (v5 & 0x80000) == 0 && (v5 & 0x100000) == 0 )
          {
            v6 = *(_QWORD *)(v4 + 1440);
            if ( v6 )
            {
              v7 = *(_QWORD *)(gpqForeground + 120LL);
              if ( v7 )
              {
                v8 = *(_QWORD *)(v7 + 16);
                if ( v8 )
                {
                  if ( (*(_DWORD *)(v8 + 1272) & 0x200000) != 0 && v8 == *(_QWORD *)(v6 + 16) )
                  {
                    a1[1] = v8;
                    v1 = 1;
                    a1[2] = v6;
LABEL_19:
                    *a1 = gpqForeground;
                    return v1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v9 = PtiKbdFromQ(gpqForeground);
    if ( (unsigned int)HasHidTable(v9) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 824LL);
      if ( (*(_DWORD *)(v10 + 100) & 0x10) != 0 )
      {
        v11 = *(_QWORD *)(v10 + 72);
        v1 = 1;
        a1[1] = v9;
        a1[2] = v11;
        if ( !v11 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 120LL);
          goto LABEL_19;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 432LL);
      }
    }
  }
  return v1;
}
