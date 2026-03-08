/*
 * XREFs of HalpAuditQuerySlicAddresses @ 0x140B8F0AC
 * Callers:
 *     HalpAuditAcpiTables @ 0x140B63138 (HalpAuditAcpiTables.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpAuditQuerySlicAddresses(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  unsigned int *v4; // rax
  unsigned int *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 Pool2; // rax
  unsigned int v11; // r15d
  unsigned int *v12; // r12
  __int64 v13; // rdi
  __int64 *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rbx
  _DWORD *v17; // rax
  void *v18; // rcx
  __int64 v19; // rax
  unsigned int v21; // [rsp+70h] [rbp+8h]
  __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned int *v23; // [rsp+88h] [rbp+20h]

  v1 = 4096 - (*(_DWORD *)a1 & 0xFFF);
  if ( v1 < 0x24 )
    v1 = 36;
  v3 = 0;
  while ( 1 )
  {
    v4 = (unsigned int *)MmMapIoSpaceEx(*(_QWORD *)a1, v1, 0x204u);
    v5 = v4;
    if ( !v4 )
      return (unsigned int)-1073741823;
    v6 = v4[1];
    if ( v1 >= v6 )
      break;
    MmUnmapIoSpace(v4, v1);
    v1 = v6;
  }
  v7 = v4[1];
  v8 = (unsigned int)v7;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( (unsigned int)v7 >= 0x24 )
      v8 = 36LL;
    v9 = (unsigned __int64)(v7 - v8) >> 3;
  }
  else
  {
    if ( (unsigned int)v7 >= 0x24 )
      v8 = 36LL;
    v9 = (unsigned __int64)(v7 - v8) >> 2;
  }
  if ( (_DWORD)v9 )
  {
    Pool2 = ExAllocatePool2(256LL, 8LL * (unsigned int)v9, 0x416C6148u);
    v22 = Pool2;
    if ( Pool2 )
    {
      v11 = 0;
      v12 = v5 + 9;
      v21 = v1;
      v13 = (unsigned int)v9;
      v14 = (__int64 *)(v5 + 9);
      v23 = v5;
      v15 = Pool2;
      do
      {
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
          v16 = *v14;
        else
          v16 = *v12;
        v17 = (_DWORD *)MmMapIoSpaceEx(v16, 36LL, 0x204u);
        v18 = v17;
        if ( v17 )
        {
          if ( *v17 == 1128877139 )
          {
            v19 = v11++;
            *(_QWORD *)(v15 + 8 * v19) = v16;
          }
          MmUnmapIoSpace(v18, 0x24uLL);
        }
        ++v12;
        ++v14;
        --v13;
      }
      while ( v13 );
      v1 = v21;
      v5 = v23;
      *(_QWORD *)(a1 + 24) = v22;
      *(_DWORD *)(a1 + 16) = v11;
    }
    else
    {
      v3 = -1073741801;
    }
  }
  MmUnmapIoSpace(v5, v1);
  return v3;
}
