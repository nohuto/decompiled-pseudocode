__int64 __fastcall WmipProbeAndCaptureGuidObjectAttributes(
        __int64 a1,
        unsigned __int16 *a2,
        _WORD *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-18h]

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
    v12 = a4[2];
    if ( !a4[2] )
      return (unsigned int)-1073741811;
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v12 + 8 < v12 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *a2 = *(_WORD *)v12;
    a2[1] = *(_WORD *)(v12 + 2);
    *((_QWORD *)a2 + 1) = *(unsigned int *)(v12 + 4);
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
    DWORD1(v14) = 0;
    if ( v10 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    LODWORD(v14) = *(_DWORD *)v10;
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(v10 + 8);
    *(_OWORD *)a2 = v14;
  }
  if ( *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 40) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *a2 == 90 )
  {
    v11 = *((_QWORD *)a2 + 1);
    if ( v11 + 90 > 0x7FFFFFFF0000LL || v11 + 90 < v11 )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(a3, *((const void **)a2 + 1), *a2);
    a3[45] = 0;
    *((_QWORD *)a2 + 1) = a3;
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
