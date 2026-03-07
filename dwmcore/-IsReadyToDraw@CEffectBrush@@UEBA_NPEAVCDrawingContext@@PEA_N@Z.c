char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  bool v6; // bp
  unsigned int v7; // r14d
  int v8; // ebx
  __int64 i; // rdi
  __int64 v10; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 14);
  if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
  {
    v6 = 0;
    if ( a2 )
    {
      if ( (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24) )
      {
        v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 216LL))(v13);
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 8) )
            v6 = 1;
        }
      }
    }
    v7 = *((_DWORD *)this + 36);
    v8 = 0;
    if ( !v7 )
      return 1;
    for ( i = 0LL; ; i += 8LL )
    {
      v10 = *(_QWORD *)(i + *((_QWORD *)this + 15));
      if ( v10
         ? (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v10 + 288LL))(
             v10,
             a2,
             &v15) == 0
         : !v6 )
      {
        break;
      }
      if ( ++v8 >= v7 )
        return 1;
    }
  }
  return 0;
}
