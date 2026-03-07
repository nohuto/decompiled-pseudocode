void __fastcall CcPerfLogScheduleReadAhead(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7)
{
  __int64 v10; // rbx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  _QWORD *v14; // [rsp+38h] [rbp-41h] BYREF
  int v15; // [rsp+40h] [rbp-39h]
  int v16; // [rsp+44h] [rbp-35h]
  _QWORD v17[10]; // [rsp+48h] [rbp-31h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  memset(v17, 0, 0x48uLL);
  if ( a2 )
  {
    v10 = a2[6];
    v12 = *(_QWORD *)(a2[5] + 8LL);
    v17[1] = a2[3];
  }
  v17[2] = *a3;
  v17[0] = a1;
  v17[3] = __PAIR64__(a5, a4);
  v13 = HIDWORD(v17[8]) & 0xFFFFFFFE | (a7 == 1);
  HIDWORD(v17[8]) = v13;
  if ( v10 )
  {
    LODWORD(v17[4]) = *(_DWORD *)(v10 + 52);
    v17[5] = *(_QWORD *)(v10 + 56);
    v17[6] = *(_QWORD *)(v10 + 64);
    HIDWORD(v17[8]) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)v10 >> 15)) & 2;
    HIDWORD(v17[7]) = *(_DWORD *)(v10 + 48);
  }
  if ( v12 )
    LODWORD(v17[8]) = *(_DWORD *)(v12 + 152);
  v16 = 0;
  LOBYTE(v17[7]) = a6;
  v15 = 72;
  v14 = v17;
  EtwTraceKernelEvent((__int64)&v14, 1u, 0x80020000, 0x160Cu, 0x401902u);
}
