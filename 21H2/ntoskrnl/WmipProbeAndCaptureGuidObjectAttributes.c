/*
 * XREFs of WmipProbeAndCaptureGuidObjectAttributes @ 0x1406065B4
 * Callers:
 *     WmipProbeWmiOpenGuidBlock @ 0x1406064FC (WmipProbeWmiOpenGuidBlock.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140252580 (IoIs32bitProcess.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipProbeAndCaptureGuidObjectAttributes(__int64 a1, __int64 a2, _WORD *a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int16 v11; // ax
  char *v12; // rdx
  unsigned __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-18h]

  v8 = 0;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a4 + 6) > 0x7FFFFFFF0000LL || a4 + 6 < a4 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_DWORD *)a1 = 48;
    *(_QWORD *)(a1 + 8) = a4[1];
    *(_DWORD *)(a1 + 24) = a4[3];
    *(_QWORD *)(a1 + 32) = a4[4];
    *(_QWORD *)(a1 + 40) = a4[5];
    v13 = a4[2];
    if ( !a4[2] )
      return (unsigned int)-1073741811;
    if ( (v13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v13 + 8 < v13 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_WORD *)a2 = *(_WORD *)v13;
    *(_WORD *)(a2 + 2) = *(_WORD *)(v13 + 2);
    *(_QWORD *)(a2 + 8) = *(unsigned int *)(v13 + 4);
  }
  else
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a4;
    *(_OWORD *)a1 = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v9 + 32);
    v10 = *(_QWORD *)(a1 + 16);
    if ( !v10 )
      return (unsigned int)-1073741811;
    DWORD1(v15) = 0;
    if ( v10 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    LODWORD(v15) = *(_DWORD *)v10;
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(v10 + 8);
    *(_OWORD *)a2 = v15;
  }
  if ( *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 40) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = 90;
    if ( *(_WORD *)a2 == 90 )
    {
      v12 = *(char **)(a2 + 8);
      if ( (unsigned __int64)(v12 + 90) > 0x7FFFFFFF0000LL || v12 + 90 < v12 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v11 = *(_WORD *)a2;
        v12 = *(char **)(a2 + 8);
      }
      memmove(a3, v12, v11);
      a3[45] = 0;
      *(_QWORD *)(a2 + 8) = a3;
      *(_QWORD *)(a1 + 16) = a2;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v8;
}
