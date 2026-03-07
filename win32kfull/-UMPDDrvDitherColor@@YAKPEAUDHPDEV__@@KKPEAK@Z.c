__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, int a2, int a3, unsigned int *a4)
{
  UMPDOBJ *v8; // rbx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-88h]
  unsigned int v16; // [rsp+30h] [rbp-78h] BYREF
  UMPDOBJ *v17; // [rsp+38h] [rbp-70h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  int v23; // [rsp+64h] [rbp-44h]
  void *v24; // [rsp+68h] [rbp-40h]

  v19 = 0LL;
  v24 = 0LL;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  v19 = 0LL;
  v24 = 0LL;
  v8 = v17;
  if ( !v17 )
    goto LABEL_14;
  v9 = *((_QWORD *)a1 + 221);
  v18[0] = 48;
  v18[1] = 13;
  v20 = *(_QWORD *)v17;
  v21 = v9;
  v22 = a2;
  v23 = a3;
  if ( a2 == 2 )
  {
    v10 = 1;
  }
  else
  {
    v10 = *((_DWORD *)a1 + 519);
    if ( (unsigned int)(v10 - 1) > 7 )
    {
      v11 = 0;
      goto LABEL_7;
    }
  }
  v11 = dword_1C032A940[v10 - 1];
LABEL_7:
  if ( !v11
    || (v12 = *((unsigned __int16 *)a1 + 1041)
            * (unsigned __int64)(((v11 * (unsigned int)*((unsigned __int16 *)a1 + 1040) + 31) >> 3) & 0x1FFFFFFC),
        v12 > 0xFFFFFFFF)
    || (v24 = UMPDOBJ::_AllocUserMem(v17, v12, 0)) == 0LL
    || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v8, v18, 0x30u, &v16, Size) == -1) )
  {
LABEL_14:
    XUMPDOBJ::~XUMPDOBJ(&v17);
    return 0LL;
  }
  if ( v24 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v8, (char *)v24);
    memmove(a4, KernelPtr, (unsigned int)v12);
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v16;
}
