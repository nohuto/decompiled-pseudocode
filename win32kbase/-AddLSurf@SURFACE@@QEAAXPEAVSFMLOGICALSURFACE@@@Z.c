void __fastcall SURFACE::AddLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v8, (SURFACE *)((char *)this + 624));
  v4 = (_QWORD *)((char *)a2 + 48);
  v5 = (_QWORD *)((char *)this + 232);
  if ( (*((_DWORD *)a2 + 61) & 4) == 0 )
  {
    v7 = (_QWORD *)v5[1];
    if ( (_QWORD *)*v7 == v5 )
    {
      *v4 = v5;
      *((_QWORD *)a2 + 7) = v7;
      *v7 = v4;
      v5[1] = v4;
      goto LABEL_4;
    }
LABEL_7:
    __fastfail(3u);
  }
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 )
    goto LABEL_7;
  *v4 = v6;
  *((_QWORD *)a2 + 7) = v5;
  *(_QWORD *)(v6 + 8) = v4;
  *v5 = v4;
LABEL_4:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
}
