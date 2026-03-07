void __fastcall xxxDoLocalTSFWork(
        __int64 a1,
        struct tagWND *a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        struct tagTHREADINFO *a7,
        unsigned int a8)
{
  unsigned int v11; // ebp
  struct tagTHREADINFO *v12; // rax
  struct _KTHREAD **v13; // rdi
  char v14; // r8
  char v15; // r9
  bool v16; // dl
  unsigned int v17; // ecx
  struct tagNOTIFY *Notify; // rax
  struct _KTHREAD *v19; // rcx
  _BYTE v20[24]; // [rsp+40h] [rbp-68h] BYREF
  int v21; // [rsp+58h] [rbp-50h]
  unsigned int v22; // [rsp+5Ch] [rbp-4Ch]
  __int64 v23; // [rsp+60h] [rbp-48h]
  int v24; // [rsp+68h] [rbp-40h]
  int v25; // [rsp+6Ch] [rbp-3Ch]
  unsigned int ThreadId; // [rsp+70h] [rbp-38h]
  unsigned int v27; // [rsp+74h] [rbp-34h]

  v11 = a1;
  v12 = PtiCurrentShared(a1);
  v13 = (struct _KTHREAD **)v12;
  if ( v11 + 2147483646 > 3 || a7 == v12 )
    v14 = a5;
  else
    v14 = a5 | 4;
  v15 = v14 & 0xFD;
  if ( (v14 & 4) == 0 )
    v15 = v14;
  v16 = (v15 & 4) != 0 || a7 != v12 || !*((_QWORD *)v12 + 57) || (*((_DWORD *)v12 + 122) & 0x1000000C) != 0;
  v17 = *(_DWORD *)(*((_QWORD *)a7 + 56) + 24LL) & a6;
  if ( (v17 & 0x1700) != 0 && v17 && (v17 & 0xFFFFE8FC) == 0 )
  {
    if ( (v15 & 2) != 0 )
    {
      Notify = CreateNotify(0LL, v11, a2, a3, a4, (PETHREAD *)a7, a8, 1u);
      if ( Notify )
        *((_QWORD *)Notify + 8) = a7;
    }
    else if ( v16 )
    {
      CreateAndPostTSFNotify(v11, a2, a3, a4, a7, a7, a8);
    }
    else
    {
      memset_0(v20, 0, 0x48uLL);
      v22 = v11;
      v21 = 1;
      if ( a2 )
        v23 = *(_QWORD *)a2;
      else
        v23 = 0LL;
      v19 = *v13;
      v24 = a3;
      v25 = a4;
      ThreadId = (unsigned int)PsGetThreadId(v19);
      v27 = a8;
      xxxCallTSFNotifyHook((struct tagNOTIFY *)v20);
    }
  }
}
