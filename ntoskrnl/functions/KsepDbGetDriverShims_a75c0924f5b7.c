__int64 __fastcall KsepDbGetDriverShims(__int64 a1, int a2, int a3, _QWORD *a4, unsigned int *a5)
{
  int v6; // r14d
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // r13
  unsigned int v11; // ebx
  unsigned int DriverShimsInternal; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  void *v16; // rax
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-1Ch] BYREF
  void *Src; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-8h] BYREF
  int v22; // [rsp+A0h] [rbp+40h]
  char *Paged; // [rsp+A0h] [rbp+40h]

  v22 = a1;
  Src = 0LL;
  v6 = a1;
  v20 = 0LL;
  v7 = 0LL;
  v18 = 0;
  v8 = 0;
  v17 = 0;
  v21 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = KseShimDatabaseOpen(&v21);
  v10 = (__int64)v21;
  v11 = v9;
  if ( v9 >= 0 )
  {
    DriverShimsInternal = KsepDbGetDriverShimsInternal(
                            *v21,
                            (unsigned int)&KsepMatchMachineInfo,
                            v6,
                            a2,
                            a3,
                            (__int64)&Src,
                            (__int64)&v18);
    v13 = v18;
    v11 = DriverShimsInternal;
    if ( (int)(DriverShimsInternal + 0x80000000) >= 0 && DriverShimsInternal != -1073741275 )
      goto LABEL_9;
    v14 = *(_QWORD *)(v10 + 56);
    if ( v14 )
    {
      v11 = KsepDbGetDriverShimsInternal(
              v14,
              (unsigned int)&KsepMatchMachineInfo,
              v22,
              a2,
              a3,
              (__int64)&v20,
              (__int64)&v17);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741275 )
      {
        v7 = v20;
        v8 = v17;
        goto LABEL_9;
      }
      v7 = v20;
      v8 = v17;
    }
    if ( (_DWORD)v13 )
    {
      if ( v8 )
      {
        Paged = (char *)KsepPoolAllocatePaged(80LL * (v8 + (unsigned int)v13));
        if ( !Paged )
        {
          v11 = -1073741801;
          goto LABEL_9;
        }
        memmove(Paged, Src, 80 * v13);
        memmove(&Paged[80 * v13], v7, v8);
        *a4 = Paged;
        *a5 = v8 + v13;
      }
      else
      {
        v16 = Src;
        Src = 0LL;
        *a4 = v16;
        *a5 = v13;
      }
    }
    else
    {
      if ( !v8 )
      {
        v11 = -1073741275;
LABEL_9:
        if ( Src )
          KsepDbFreeDriverShims(Src, v13);
        if ( v7 )
          KsepDbFreeDriverShims(v7, v8);
        goto LABEL_13;
      }
      *a4 = v7;
      v7 = 0LL;
      *a5 = v8;
    }
    v11 = 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( v10 )
    KseShimDatabaseClose(v10);
  return v11;
}
