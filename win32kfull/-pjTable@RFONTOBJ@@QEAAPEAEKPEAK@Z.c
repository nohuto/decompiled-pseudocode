char *__fastcall RFONTOBJ::pjTable(RFONTOBJ *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rax
  char *v4; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // eax
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  char *v14; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v8 = *(_QWORD *)(v3 + 128);
  if ( !v8 )
    goto LABEL_5;
  v9 = *(_QWORD *)(v8 + 80);
  if ( !v9 )
    goto LABEL_5;
  v12[0] = *(_QWORD *)(v3 + 128);
  if ( (unsigned int)PFFOBJ::QueryTrueTypeTable((PFFOBJ *)v12, v9, 1u, a2, 0, 0, 0LL, (unsigned __int8 **)&v14, &v13) == -1 )
  {
    v4 = 0LL;
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
  v4 = RFONTOBJ::pchTranslate(this, v14);
  if ( !v4 )
    goto LABEL_5;
  v10 = v13;
LABEL_6:
  if ( a3 )
    *a3 = v10;
  return v4;
}
