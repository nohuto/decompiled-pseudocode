__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        _QWORD *a11)
{
  _QWORD *v11; // r14
  __int64 v13; // r8
  void *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  struct tagINPUT_MESSAGE_SOURCE *v17; // rsi
  __int64 v19; // [rsp+80h] [rbp-9h] BYREF
  struct tagQ *v20; // [rsp+88h] [rbp-1h] BYREF
  int v21; // [rsp+C0h] [rbp+37h] BYREF
  struct tagWND *v22; // [rsp+C8h] [rbp+3Fh] BYREF

  v22 = a2;
  v11 = a11;
  v13 = *(_QWORD *)(a1 + 80);
  v14 = 0LL;
  v15 = *a11;
  if ( *(char *)(*(_QWORD *)(v13 + 40) + 19LL) < 0 )
    return 0LL;
  if ( a3 - 512 <= 0xE )
  {
    if ( !v15 || *(_DWORD *)v15 != 2 )
      goto LABEL_5;
LABEL_10:
    v14 = *(void **)(v15 + 8);
    goto LABEL_5;
  }
  if ( a3 - 581 <= 0x12 )
  {
    v22 = *(struct tagWND **)(a1 + 80);
    if ( v15 )
      goto LABEL_10;
  }
LABEL_5:
  v16 = *(_QWORD *)(v13 + 16);
  v17 = a10;
  v21 = 0;
  LODWORD(a11) = 0;
  v19 = v16;
  v20 = *(struct tagQ **)(v16 + 432);
  if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                       (unsigned int)&v20,
                       (unsigned int)&v22,
                       (unsigned int)&v19,
                       a3,
                       (__int64)a10,
                       (__int64)&v21,
                       (__int64)&a11) )
    return PostInputMessage(
             v20,
             v22,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             v17,
             v14,
             (struct tagUIPI_INFO *)v11[1],
             v21,
             (int)a11,
             v19);
  return 0LL;
}
