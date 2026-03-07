__int64 __fastcall PiDmGetObjectConstraintList(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  unsigned int v8; // r15d
  _WORD *v9; // rsi
  int Object; // eax
  int v13; // ebx
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h]
  PVOID P; // [rsp+80h] [rbp+40h] BYREF

  v7 = a7;
  v8 = a6;
  v9 = a5;
  *a7 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( v8 )
    *v9 = 0;
  Object = PiDmGetObject(LODWORD(PiDmListDefs[5 * a1]), a2, &P);
  v13 = Object;
  if ( Object < 0 )
  {
    if ( Object != -1073741772 )
      goto LABEL_10;
    v13 = 0;
  }
  else
  {
    *(_QWORD *)&v16 = PiDmCmObjectMatchCallback;
    *((_QWORD *)&v16 + 1) = a4;
    *(_QWORD *)&v17 = v9;
    *((_QWORD *)&v17 + 1) = v8;
    v13 = PiDmListEnumObjectsWithCallback(a1, (__int64 *)P, PiDmGetObjectListCallback, (__int64)&v16);
    if ( v13 < 0 )
      goto LABEL_10;
    *v7 = HIDWORD(v17);
  }
  v14 = (unsigned int)*v7;
  if ( (_DWORD)v14 )
  {
    *v7 = v14 + 1;
    if ( v9 && v8 >= (int)v14 + 1 )
      v9[v14] = 0;
    else
      v13 = -1073741789;
  }
LABEL_10:
  if ( P )
    PiDmObjectRelease((unsigned int *)P);
  return (unsigned int)v13;
}
