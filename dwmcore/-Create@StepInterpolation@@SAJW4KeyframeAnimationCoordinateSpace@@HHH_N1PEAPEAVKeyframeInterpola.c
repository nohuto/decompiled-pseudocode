__int64 __fastcall StepInterpolation::Create(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        _QWORD *a7)
{
  int v8; // ebp
  unsigned __int8 v9; // si
  unsigned __int8 v10; // di
  int v11; // r14d
  int v12; // r15d
  _OWORD *v13; // rax
  _OWORD *v14; // rbx

  v8 = 1;
  if ( a2 >= 1 )
    v8 = a2;
  if ( a3 < 0 )
  {
    a3 = 0;
  }
  else if ( v8 < a3 )
  {
    a3 = v8;
  }
  if ( a4 < a3 )
  {
    a4 = a3;
  }
  else if ( v8 < a4 )
  {
    a4 = v8;
  }
  v9 = a5;
  if ( a4 - a3 == 1 )
  {
    v10 = a6;
    if ( a5 && a6 )
      goto LABEL_24;
  }
  else if ( a4 == a3 )
  {
    if ( a5 || (v10 = a6) != 0 )
    {
      v9 = 0;
LABEL_24:
      v10 = 0;
    }
  }
  else
  {
    v10 = a6;
  }
  v11 = a3 + 1;
  v12 = a4 - 1;
  if ( !v9 )
    v11 = a3;
  if ( !v10 )
    v12 = a4;
  v13 = KeyframeInterpolation::operator new(0x30uLL);
  v14 = v13;
  if ( v13 )
  {
    *v13 = 0LL;
    v13[1] = 0LL;
    v13[2] = 0LL;
    *(_QWORD *)v13 = &StepInterpolation::`vftable';
    ((void (__fastcall *)(_OWORD *))StepInterpolation::`vftable')(v13);
  }
  else
  {
    v14 = 0LL;
  }
  *((_DWORD *)v14 + 9) = v9;
  *((_DWORD *)v14 + 10) = v10;
  *((float *)v14 + 11) = 1.0 / (float)(v12 - v11 + 1);
  *((_DWORD *)v14 + 6) = v8;
  *((_DWORD *)v14 + 4) = a1;
  *((_DWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 8) = v12;
  *a7 = v14;
  return 0LL;
}
