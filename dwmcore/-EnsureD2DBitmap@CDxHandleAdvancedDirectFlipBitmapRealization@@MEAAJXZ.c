__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureD2DBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // ebx
  char *v3; // rcx
  _DWORD *v4; // rax
  char *v5; // rcx
  char v6; // al
  unsigned int v7; // ecx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  if ( v2 >= 0 )
  {
    v3 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
    v4 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v3)(v3, v9);
    if ( *v4 == 28 || *v4 == 87 )
    {
      v5 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
      v6 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 24LL))(v5);
      v7 = v2;
      if ( v6 )
        return (unsigned int)-2003292288;
      return v7;
    }
    else
    {
      return (unsigned int)-2003292288;
    }
  }
  return (unsigned int)v2;
}
