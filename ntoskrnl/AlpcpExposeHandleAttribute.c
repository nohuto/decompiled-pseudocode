__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v6; // r15
  ULONG_PTR v7; // rsi
  char PreviousMode; // bl
  int v10; // r14d
  void *v11; // rdi
  int v12; // edx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r10
  __int128 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+68h] [rbp-30h] BYREF

  v6 = (_QWORD *)(a2 + 152);
  v7 = *(_QWORD *)(a2 + 152);
  if ( !v7 )
    return 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0;
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v14 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v11 = (void *)v14;
    if ( !v14 )
    {
      v13 = -1073741769;
      goto LABEL_8;
    }
    a1 = v14;
  }
  v12 = *(_DWORD *)(a1 + 256);
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_22;
  v16 = 0LL;
  v17 = 0LL;
  if ( (v12 & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)(v7 + 4) <= 1u )
    {
      if ( (*(_DWORD *)v7 & *(_DWORD *)(a1 + 320)) == 0 )
      {
        v13 = -1073741788;
        goto LABEL_8;
      }
      v15 = 0LL;
      if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
        v15 = *(_QWORD *)(a1 + 24);
      if ( v15 )
      {
        LODWORD(v17) = *(_DWORD *)v7 & *(_DWORD *)(a1 + 320);
        v13 = ObCompleteObjectDuplication(
                (__int64 *)(v7 + 8),
                v15,
                PreviousMode,
                (__int64 *)&v16 + 1,
                (_DWORD *)&v17 + 1);
        if ( v13 < 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
LABEL_22:
    v13 = -1073741790;
    goto LABEL_8;
  }
  LODWORD(v16) = 0x40000;
  LODWORD(v17) = *(_DWORD *)(v7 + 4);
  v10 = 1;
LABEL_7:
  v13 = 0;
  *(_OWORD *)a3 = v16;
  *(_QWORD *)(a3 + 16) = v17;
  *a4 |= 0x10000000u;
LABEL_8:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( !v10 )
  {
    AlpcpDereferenceBlobEx(v7, 1);
    *v6 = 0LL;
  }
  return (unsigned int)v13;
}
