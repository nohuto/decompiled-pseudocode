__int64 __fastcall PFFOBJ::bCheckFntFileInfo(PFFOBJ *this)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  if ( (v3 & 0x2000) == 0 )
  {
    if ( (v3 & 0x1000) == 0 )
      return 1LL;
    v5 = 0LL;
    if ( !*(_DWORD *)(v1 + 36) )
    {
LABEL_10:
      *(_DWORD *)(v1 + 52) &= ~0x1000u;
      return 1LL;
    }
    while ( 1 )
    {
      v8 = 0LL;
      v7 = 0LL;
      Win32FileInfo(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * v5) + 80LL), &v7, &v8);
      v1 = *(_QWORD *)this;
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 200LL) + 8 * v5);
      if ( *(_QWORD *)v6 != v7 || *(_DWORD *)(v6 + 24) != (_DWORD)v8 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v1 + 36) )
        goto LABEL_10;
    }
    *(_DWORD *)(v1 + 52) |= 0x2000u;
  }
  return 0LL;
}
