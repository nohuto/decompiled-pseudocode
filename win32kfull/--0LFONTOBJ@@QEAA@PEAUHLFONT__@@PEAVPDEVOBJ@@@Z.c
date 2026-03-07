LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, struct PDEVOBJ *a3)
{
  struct HLFONT__ *v3; // rsi
  struct HLFONT__ *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 HDEV; // rbx
  int v11; // edi
  __int64 v12; // rdx
  struct PDEVOBJ *v13; // rax
  _QWORD *v14; // rcx
  int v15; // edi
  int v16; // edi
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = 10;
  v7 = HmgShareLock(v5, a2);
  *(_QWORD *)this = v7;
  if ( v7 && (*(_DWORD *)(v7 + 28) & 1) != 0 )
  {
    HDEV = UserGetHDEV(v8);
    v11 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)this);
    *(_QWORD *)this = 0LL;
    v13 = (struct PDEVOBJ *)&v17;
    v17 = HDEV;
    if ( a3 )
      v13 = a3;
    v14 = *(_QWORD **)v13;
    if ( *(_QWORD *)v13 )
    {
      v15 = v11 - 4;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v3 = (struct HLFONT__ *)v14[180];
        }
        else
        {
          v3 = (struct HLFONT__ *)v14[179];
        }
      }
      else
      {
        v3 = (struct HLFONT__ *)v14[178];
      }
      LOBYTE(v12) = 10;
      *(_QWORD *)this = HmgShareLock(v3, v12);
    }
  }
  return this;
}
