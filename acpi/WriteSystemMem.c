void __fastcall WriteSystemMem(unsigned __int64 a1, size_t Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v8; // esi
  __int64 v9; // r14
  int (__fastcall *v10)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v11; // rax
  int *v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  signed __int32 v16[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 Src; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v19[10]; // [rsp+40h] [rbp-39h] BYREF

  v18 = 0;
  v19[8] = -1LL;
  v5 = 0LL;
  v19[0] = 0LL;
  v19[3] = 0LL;
  memset(&v19[5], 0, 24);
  v8 = Size;
  Src = 0LL;
  v19[1] = 255LL;
  v19[2] = 0xFFFFLL;
  v19[4] = 0xFFFFFFFFLL;
  if ( (unsigned int)Size > 8 )
    return;
  v9 = v19[(unsigned int)Size];
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v10 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
    if ( v10 )
    {
      if ( a4 != v9 )
      {
        if ( v10(0LL, a1, &Src, (unsigned int)Size, &v18) < 0 )
        {
LABEL_8:
          v5 = Src;
          goto LABEL_9;
        }
        v5 = Src;
      }
      v11 = a3 | v5 & ~a4;
      v12 = &v18;
      Src = v11;
      LOBYTE(v12) = 1;
      if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
             v12,
             a1,
             &Src,
             v8,
             &v18) >= 0 )
        return;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( a1 % v8 )
  {
    if ( a4 != v9 )
    {
      memmove(&Src, (const void *)a1, v8);
      v5 = Src;
    }
    Src = a3 | v5 & ~a4;
    memmove((void *)a1, &Src, v8);
    return;
  }
  v13 = v8 - 1;
  if ( !v13 )
  {
    if ( a4 != v9 )
      v5 = *(unsigned __int8 *)a1;
    Src = a3 | v5 & ~a4;
    *(_BYTE *)a1 = Src;
    goto LABEL_29;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a4 != v9 )
      v5 = *(unsigned __int16 *)a1;
    Src = a3 | v5 & ~a4;
    *(_WORD *)a1 = Src;
    goto LABEL_29;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a4 != v9 )
      v5 = *(unsigned int *)a1;
    Src = a3 | v5 & ~a4;
    *(_DWORD *)a1 = Src;
LABEL_29:
    _InterlockedOr(v16, 0);
    return;
  }
  if ( v15 == 4 )
  {
    if ( a4 != v9 )
      v5 = *(_QWORD *)a1;
    Src = a3 | v5 & ~a4;
    *(_QWORD *)a1 = Src;
    KeFlushWriteBuffer();
  }
}
