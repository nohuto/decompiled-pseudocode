/*
 * XREFs of MiSplitMultiNodeFreeDescriptors @ 0x140B6B4FC
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 */

char __fastcall MiSplitMultiNodeFreeDescriptors(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  __int64 *v11; // r9
  unsigned __int64 v12; // rdx
  bool v13; // r8
  unsigned __int64 v14; // rax

  LOBYTE(v1) = KeNumberNodes;
  v2 = 0LL;
  if ( !KeNumberNodes )
    return v1;
  v3 = a1 + 352;
  v4 = 0LL;
  v5 = (unsigned __int16)KeNumberNodes;
  do
  {
    LOBYTE(v1) = (_BYTE)qword_140C65748;
    v6 = *(_QWORD *)v3;
    v7 = *(_QWORD *)((char *)qword_140C65748 + v4);
    if ( (*(_BYTE *)(v3 + 8) & 1) != 0 && v6 )
      v6 ^= v3;
    v8 = 0LL;
    while ( v6 )
    {
      v9 = *(_QWORD *)(v6 + 32);
      if ( v7 < v9 )
        goto LABEL_9;
      if ( v7 < *(_QWORD *)(v6 + 40) + v9 )
      {
        v8 = v6;
LABEL_9:
        v1 = *(_QWORD *)v6;
        goto LABEL_10;
      }
      v1 = *(_QWORD *)(v6 + 8);
LABEL_10:
      if ( (*(_BYTE *)(v3 + 8) & 1) != 0 && v1 )
        v6 ^= v1;
      else
        v6 = v1;
    }
    if ( v8 )
    {
      LODWORD(v1) = *(_DWORD *)(v8 + 24);
      if ( ((_DWORD)v1 == 2 || (_DWORD)v1 == 24) && *(_QWORD *)(v8 + 32) != v7 )
      {
        v10 = 6 * v2;
        v2 = (unsigned int)(v2 + 1);
        v11 = &MxBootNodeSplitDescriptors[v10];
        *(_OWORD *)v11 = *(_OWORD *)v8;
        *((_OWORD *)v11 + 1) = *(_OWORD *)(v8 + 16);
        *((_OWORD *)v11 + 2) = *(_OWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 40) = v7 - *(_QWORD *)(v8 + 32);
        v11[4] = v7;
        v11[5] -= *(_QWORD *)(v8 + 40);
        v12 = *(_QWORD *)v3;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 && v12 )
          v12 ^= v3;
        v13 = 0;
        if ( v12 )
        {
          while ( 1 )
          {
            if ( v7 >= *(_QWORD *)(v12 + 32) )
            {
              v14 = *(_QWORD *)(v12 + 8);
              if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_39;
                v14 ^= v12;
              }
              if ( !v14 )
              {
LABEL_39:
                v13 = 1;
                break;
              }
            }
            else
            {
              v14 = *(_QWORD *)v12;
              if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
              {
                if ( !v14 )
                  break;
                v14 ^= v12;
              }
              if ( !v14 )
                break;
            }
            v12 = v14;
          }
        }
        LOBYTE(v1) = RtlRbInsertNodeEx((unsigned __int64 *)v3, v12, v13, (unsigned __int64)v11);
      }
    }
    v4 += 16LL;
    --v5;
  }
  while ( v5 );
  return v1;
}
