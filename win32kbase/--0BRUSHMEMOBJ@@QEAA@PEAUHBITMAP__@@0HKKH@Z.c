BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(
        BRUSHMEMOBJ *this,
        HBITMAP a2,
        HBITMAP a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  unsigned int v9; // ebx
  struct BRUSH *v12; // rax
  ULONG_PTR v13; // rdi
  _DWORD *v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  v9 = a6;
  if ( a5 == 1 )
  {
    v9 = a6 | 0x1000;
  }
  else if ( a5 == 2 )
  {
    v9 = a6 | 0x2000;
  }
  v12 = BRUSHMEMOBJ::pbrAllocBrush(this, a7);
  *(_QWORD *)this = v12;
  v13 = (ULONG_PTR)v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 19) = 0;
    v14 = (_DWORD *)*((_QWORD *)v12 + 6);
    *((_DWORD *)v12 + 20) = 13;
    *((_QWORD *)v12 + 3) = a2;
    *((_QWORD *)v12 + 4) = a3;
    *v14 = 0;
    *((_DWORD *)v12 + 10) = v9;
    if ( a4 )
      *((_DWORD *)v12 + 10) = v9 | 0x20003;
    v16 = 0LL;
    if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v16, v12, 1, 0, 0x10u) )
    {
      FreeBrushMemory(v13);
      *(_QWORD *)this = 0LL;
    }
    if ( v16 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
  }
  return this;
}
