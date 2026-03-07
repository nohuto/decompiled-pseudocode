void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  _DWORD *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r10
  _DWORD *v18; // r10
  __int64 v19; // r15
  unsigned __int16 v20; // si
  _DWORD *v21; // r10
  unsigned int v22; // ebp
  unsigned int v23; // r13d
  __int64 Pool2; // rax
  _DWORD *v25; // rbx
  char *v26; // rcx
  unsigned int v27; // ecx
  _OWORD *v28; // rdx
  __int64 v29; // rax
  _OWORD *v30; // rax
  __int64 ExceptionDispatch; // [rsp+40h] [rbp-48h]

  v11 = a2;
  v14 = FdoExt(a1);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, a3);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, a3, a6, a7, v17, v16 + 1);
  v18 = v14 + 640;
  v19 = 16LL;
  if ( a10 )
  {
    if ( (*v18 & 0x10) != 0 )
      return;
    *v18 |= 0x10u;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (*v21 & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v22 = v15 + 1;
    v23 = v22 + v20 + 600;
    Pool2 = ExAllocatePool2(64LL, v23, 1112885333LL);
    v25 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = v23;
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v25, 0);
        return;
      }
      *v25 = 1381516648;
      *((_QWORD *)v25 + 1) = a1;
      *((_WORD *)v25 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v25 + 5) = v25 + 150;
        memmove(v25 + 150, a4, v20);
      }
      v26 = (char *)v25 + v20 + 600;
      *((_QWORD *)v25 + 74) = v26;
      memmove(v26, a8, v22);
      v25[146] = a9;
      v25[6] = a7;
      v25[7] = a6;
      v25[4] = a3;
      *((_WORD *)v25 + 10) = a2;
      *((_QWORD *)v25 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v27 = v14[220];
        v28 = v25 + 18;
        do
        {
          v29 = v14[221] & v27;
          v27 = v29 + 1;
          v30 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v29);
          *v28 = *v30;
          v28 += 2;
          *(v28 - 1) = v30[1];
          --v19;
        }
        while ( v19 );
      }
      UsbhExceptionTrace(a1, v25, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, a2, v25);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1u, (int)UsbhExceptionWorker, (__int64)v25, a2, 0x49577865u, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v25);
        goto LABEL_23;
      }
    }
  }
}
