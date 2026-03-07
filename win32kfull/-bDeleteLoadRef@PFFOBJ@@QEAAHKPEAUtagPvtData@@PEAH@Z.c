__int64 __fastcall PFFOBJ::bDeleteLoadRef(PFFOBJ *this, int a2, struct tagPvtData *a3, int *a4)
{
  unsigned int v4; // ebx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // zf
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v4 = 0;
  *a4 = 0;
  v9 = Gre::Base::Globals(this);
  v10 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 128LL) == *((_QWORD *)v9 + 796) )
  {
    if ( !a3 )
      return 0LL;
    if ( a2 == 128 )
    {
      *(_QWORD *)a3 = 0LL;
LABEL_22:
      if ( !*(_QWORD *)a3 )
        PFFOBJ::bRemovePvtData(this, a3);
      v12 = *(_QWORD *)(*(_QWORD *)this + 144LL) == 0LL;
      goto LABEL_6;
    }
    v14 = *((_DWORD *)a3 + 2);
    v15 = v14 & a2;
    if ( (a2 & 0x6C) != 0 )
    {
      if ( v15 )
      {
        v16 = *((_DWORD *)a3 + 1);
        if ( v16 )
        {
          *((_DWORD *)a3 + 1) = v16 - 1;
          if ( a2 == 64 )
            *((_DWORD *)a3 + 2) = v14 & 0xFFFFFFBF;
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_22;
      if ( *(_DWORD *)a3 )
      {
        --*(_DWORD *)a3;
        goto LABEL_22;
      }
    }
    *a4 = 1;
    goto LABEL_22;
  }
  if ( a2 )
  {
    v17 = *(_DWORD *)(v10 + 60);
    if ( v17 )
      *(_DWORD *)(v10 + 60) = v17 - 1;
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 56);
    if ( v11 )
      *(_DWORD *)(v10 + 56) = v11 - 1;
  }
  v12 = *(_QWORD *)(*(_QWORD *)this + 56LL) == 0LL;
LABEL_6:
  if ( v12 )
  {
    PFFOBJ::vKill(this);
    return 1;
  }
  return v4;
}
