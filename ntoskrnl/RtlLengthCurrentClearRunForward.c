/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x14020B7C4
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14020B47C (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v5; // r8d
  _DWORD *v6; // r10
  int v7; // edi
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  char v13; // r8
  bool v14; // zf
  unsigned int v15; // edx
  int v17; // eax
  char v18; // r8

  v3 = *((_QWORD *)a1 + 1);
  v5 = *a1;
  v6 = (_DWORD *)(v3 + 4 * ((unsigned __int64)a2 >> 5));
  v7 = *a1 & 0x1F;
  v8 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(unsigned int)(*a1 - 1) >> 5));
  v9 = v8 - 1;
  if ( !v7 )
    v9 = v8;
  v10 = a2 & 0x1F;
  v11 = 0;
  LODWORD(v12) = *v6 & ~*((_DWORD *)qword_140016150 + v10);
  if ( v6 > v9 )
  {
LABEL_16:
    if ( v7 )
    {
      if ( v11 )
        LODWORD(v12) = v6[1];
      v17 = *((_DWORD *)qword_140016150 + (v5 & 0x1F));
      v18 = -1;
      v14 = !_BitScanForward64((unsigned __int64 *)&v12, (unsigned int)v12 | ~v17);
      if ( !v14 )
        v18 = v12;
      v11 += v18;
    }
  }
  else
  {
    while ( !(_DWORD)v12 )
    {
      v11 += 32;
      if ( v11 >= a3 && v11 - (unsigned int)v10 >= a3 )
        goto LABEL_8;
      if ( v6 == v9 )
        goto LABEL_16;
      LODWORD(v12) = *++v6;
    }
    v13 = -1;
    v14 = !_BitScanForward64((unsigned __int64 *)&v12, (unsigned int)v12);
    if ( !v14 )
      v13 = v12;
    v11 += v13;
  }
LABEL_8:
  v15 = v11 - v10;
  if ( v15 > a3 )
    return a3;
  return v15;
}
