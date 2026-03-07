struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rsi
  struct UMPDOBJ *v9; // rbx
  char *v10; // rax
  char *KernelPtr; // rax
  char *v12; // rdi
  int v13; // esi
  char *v14; // rax
  unsigned __int64 v15; // r8
  size_t Size; // [rsp+20h] [rbp-79h]
  void *v18; // [rsp+30h] [rbp-69h] BYREF
  struct UMPDOBJ *v19; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-59h] BYREF
  _DWORD v21[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v22; // [rsp+68h] [rbp-31h]
  __int64 v23; // [rsp+70h] [rbp-29h]
  struct DHPDEV__ *v24; // [rsp+78h] [rbp-21h]
  __int64 v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  _BYTE v27[12]; // [rsp+8Ch] [rbp-Dh] BYREF
  unsigned int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  void *v30; // [rsp+A0h] [rbp+7h]

  v22 = 0LL;
  memset(v27, 0, sizeof(v27));
  v29 = 0;
  v18 = 0LL;
  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  v22 = 0LL;
  memset(v27, 0, sizeof(v27));
  v29 = 0;
  v9 = v19;
  if ( !v19 )
    goto LABEL_15;
  v21[0] = 72;
  v21[1] = 26;
  v23 = *(_QWORD *)v19;
  v24 = a1;
  v25 = a2;
  v26 = a3;
  v10 = UMPDOBJ::_AllocUserMem(v19, 4u, 1);
  v28 = 0;
  v30 = 0LL;
  *(_QWORD *)&v27[4] = v10;
  if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, v21, 0x48u, &v18, Size) == -1) )
  {
LABEL_15:
    v12 = 0LL;
    goto LABEL_16;
  }
  KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, *(char **)&v27[4]);
  v12 = (char *)v18;
  *a4 = *(_DWORD *)KernelPtr;
  if ( !v12 )
    goto LABEL_14;
  if ( a3 )
  {
    v13 = *((_DWORD *)v9 + 106);
    v14 = v12;
    if ( v13 )
    {
      v14 = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v30);
      v15 = v28;
    }
    else
    {
      v15 = -1LL;
    }
    IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v14, v13 == 0, v15);
    if ( (unsigned int)bIsFreeHooked(a1, v9) )
    {
      memset(v20, 0, sizeof(v20));
      if ( IFIMETRICS )
        PushThreadGuardedObject(v20, IFIMETRICS, Win32FreePool);
      UMPDMyDrvFree(v9, a1, v12, *a4);
      if ( IFIMETRICS )
        PopThreadGuardedObject(v20);
    }
LABEL_14:
    *a4 = (unsigned int)IFIMETRICS;
    v12 = (char *)IFIMETRICS;
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return (struct _IFIMETRICS *)v12;
}
