__int64 __fastcall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  SURFACE *v2; // r9
  int v4; // eax
  HDEV v5; // r8
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // cf
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _SURFOBJ *v12; // rdx
  SURFACE *v13; // rcx
  struct DHPDEV__ *v14; // rdx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(SURFACE **)this;
  v4 = *((_DWORD *)this + 18);
  v5 = *(HDEV *)(*(_QWORD *)this + 48LL);
  if ( (v4 & 2) == 0 )
  {
    if ( v5 == a2 )
    {
      if ( (v4 & 1) != 0 )
      {
        v14 = (struct DHPDEV__ *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 18) = v4 & 0xFFFFFFFE;
        SURFACE::dhpdev(v2, v14);
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 4);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 19);
      }
    }
    else if ( (v4 & 1) == 0 )
    {
      if ( (v4 & 4) == 0 )
      {
        v12 = (struct _SURFOBJ *)*((_QWORD *)this + 11);
        v15 = *(_QWORD *)(*(_QWORD *)this + 48LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v15, v12, *((struct _RECTL **)this + 12), 0);
        v4 = *((_DWORD *)this + 18) | 4;
      }
      v13 = *(SURFACE **)this;
      *((_DWORD *)this + 18) = v4 | 1;
      SURFACE::dhpdev(v13, 0LL);
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
    }
    return 1LL;
  }
  if ( v5 == a2 )
  {
    v11 = (__int64)v2 + 24;
    v10 = 8LL;
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 5) || (result = MULTISURF::bCreateDIB(this), (_DWORD)result) )
  {
    v7 = *((_QWORD *)this + 5);
    v8 = v7 + 24;
    v9 = v7 != 0;
    v10 = 56LL;
    v11 = v8 & -(__int64)v9;
LABEL_7:
    *((_QWORD *)this + 11) = v11;
    *((_QWORD *)this + 12) = (char *)this + v10;
    return 1LL;
  }
  return result;
}
