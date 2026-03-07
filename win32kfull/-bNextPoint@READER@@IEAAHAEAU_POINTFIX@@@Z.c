__int64 __fastcall READER::bNextPoint(READER *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // r8
  struct _POINTFIX v5; // rax
  unsigned int v6; // r8d
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rdx

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)v2 >= *((_QWORD *)this + 4) )
  {
    if ( (*((_DWORD *)this + 2) & 2) != 0 )
    {
      return 0;
    }
    else
    {
      v7 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
      v8 = *((_DWORD *)this + 10);
      v6 = 1;
      if ( v7 )
        v9 = v8 | 1;
      else
        v9 = v8 & 0xFFFFFFFE;
      *((_DWORD *)this + 10) = v9;
      *a2 = **((struct _POINTFIX **)this + 2);
      v10 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = v10 + 8;
      *((_QWORD *)this + 4) = v10 + 8LL * *((unsigned int *)this + 3);
    }
  }
  else
  {
    v5 = *v2;
    *((_QWORD *)this + 3) = v2 + 1;
    v6 = 1;
    *a2 = v5;
  }
  return v6;
}
