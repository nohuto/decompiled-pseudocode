__int64 __fastcall bShouldMap(struct _FILEVIEW *a1, struct _FILEVIEW *a2, int a3)
{
  unsigned int v3; // ebx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r8
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v3 = 0;
  if ( !*(_QWORD *)a2 )
  {
    v3 = 1;
LABEL_6:
    if ( (*((_DWORD *)a2 + 10) & 0x10) != 0 )
      v3 &= -((*((_BYTE *)a1 + 40) & 0x10) != 0);
    return v3;
  }
  if ( *((_DWORD *)a2 + 6) == *((_DWORD *)a1 + 6) )
  {
    v7 = Gre::Base::Globals(a1);
    v8 = *(_QWORD *)a2;
    v9 = v7;
    v10 = *(_QWORD *)a1;
    if ( *(_QWORD *)a2 == *(_QWORD *)a1 )
      goto LABEL_4;
    if ( a3 )
    {
      v12 = v10 - v8;
      v13 = v8 - v10;
      if ( v12 >= 0 )
        v13 = v12;
      if ( v13 == 36000000000LL )
        goto LABEL_4;
    }
    if ( *((_DWORD *)v9 + 43) )
LABEL_4:
      v3 = 1;
  }
  if ( v3 == 1 )
    goto LABEL_6;
  return v3;
}
