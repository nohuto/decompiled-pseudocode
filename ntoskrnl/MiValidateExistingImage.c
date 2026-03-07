__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r15
  char v2; // r14
  __int64 v3; // r12
  int v4; // edi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // ecx
  __int64 v12; // r13
  int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // ebp
  int Blink; // ebp
  _BYTE *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  char v23; // [rsp+80h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 7);
  v4 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x100000) != 0 )
  {
    dword_140C65490 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v6 = 2LL;
  else
    v6 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(*((_QWORD *)a1 + 8), v6);
  if ( (int)result < 0 )
  {
    dword_140C65490 = 13;
    return result;
  }
  v9 = *a1;
  v10 = 6;
  if ( (v9 & 0x100) != 0 )
  {
    v11 = 4;
  }
  else if ( (v9 & 0x20) != 0 )
  {
    v11 = 1;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    v11 = (*a1 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v11 = 0;
  }
  v12 = *v1;
  v13 = v11 | 0x10;
  if ( (v9 & 0x800) == 0 )
    v13 = v11;
  v14 = (unsigned int)v9;
  if ( (v9 & 0x400) != 0 && (v9 & 0x10) == 0 )
  {
    Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    LOBYTE(v10) = *((_BYTE *)a1 + 24);
    LOBYTE(v8) = *(_BYTE *)(v12 + 15) >> 4;
    v23 = 0;
    result = SeGetImageRequiredSigningLevel(v3, v13, v10, v8, (__int64)&v23);
    if ( (int)result < 0 )
    {
      dword_140C65490 = 14;
      return result;
    }
    v14 = *a1;
    if ( (v14 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) && (Blink & 0x800000) != 0 )
        v4 = 1;
      if ( (Blink & 0x1000000) != 0 )
      {
        v2 = 8;
      }
      else
      {
        v2 = 0;
        if ( (Blink & 0x2000000) != 0 )
          v2 = 6;
      }
    }
    *((_BYTE *)a1 + 24) = v23;
  }
  if ( (v14 & 0x100000) != 0 )
  {
    v13 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v15 = v13 | 0x20000000;
  if ( (v14 & 0x800000) == 0 )
    v15 = v13;
  if ( (v14 & 0x400) != 0 )
  {
    if ( (v14 & 0x10) != 0 )
      goto LABEL_43;
    v17 = (_BYTE *)(v12 + 15);
    v18 = *(unsigned __int8 *)(v12 + 15);
    LOBYTE(v9) = *((_BYTE *)a1 + 24);
    if ( qword_140C37658 )
    {
      v19 = ((unsigned int)v18 >> 1) & 7;
      LOBYTE(v18) = (unsigned __int8)v18 >> 4;
      v20 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, _QWORD, __int64))qword_140C37658)(
              v15,
              v9,
              v18,
              v19,
              *((_QWORD *)a1 + 20),
              v3);
      LOBYTE(v9) = *((_BYTE *)a1 + 24);
      LOBYTE(v18) = *v17;
      if ( v20 )
        goto LABEL_43;
    }
    if ( !qword_140C37600
      || (LOBYTE(v14) = (unsigned __int8)v18 >> 4, !(unsigned int)qword_140C37600(v14, v9))
      || (v15 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (*v17 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
    {
LABEL_43:
      v4 |= 2u;
      v17 = (_BYTE *)(v12 + 15);
    }
    v21 = (int)qword_140C37600;
    if ( qword_140C37600 )
    {
      LOBYTE(v9) = v2;
      LOBYTE(v14) = *v17 >> 4;
      v21 = qword_140C37600(v14, v9);
    }
    v22 = v4 | 4;
    if ( v21 )
      v22 = v4;
    v4 = v22;
    if ( (*a1 & 0x10000000) != 0 )
      v4 = v22 | 8;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             v3,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v15,
             v4,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140C65490 = 15;
  return result;
}
