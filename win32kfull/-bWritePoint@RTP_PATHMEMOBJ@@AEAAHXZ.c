__int64 __fastcall RTP_PATHMEMOBJ::bWritePoint(RTP_PATHMEMOBJ *this)
{
  int v1; // r8d
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h]

  v1 = *((_DWORD *)this + 40);
  v3 = *((int *)this + 47);
  v4 = 1;
  if ( v1 == 2 )
  {
    v5 = *((int *)this + 47);
    LODWORD(v9) = *((_DWORD *)this + 2 * v3 + 51) - *((_DWORD *)this + 43);
    HIDWORD(v9) = *((_DWORD *)this + 2 * v3 + 52) - *((_DWORD *)this + 44);
    if ( (_DWORD)v9 != *((_DWORD *)this + 45)
      || *((_DWORD *)this + 2 * v3 + 52) - *((_DWORD *)this + 44) != *((_DWORD *)this + 46) )
    {
      v6 = (_QWORD *)((char *)this + 164);
      v4 = EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (struct _POINTL *)((char *)this + 164), 1u);
      if ( v4 )
      {
        *v6 = *(_QWORD *)((char *)this + 172);
        *(_QWORD *)((char *)this + 180) = v9;
      }
    }
    *(_QWORD *)((char *)this + 172) = *(_QWORD *)((char *)this + 8 * v5 + 204);
  }
  else if ( v1 )
  {
    if ( v1 == 1 )
    {
      v7 = *(_QWORD *)((char *)this + 8 * v3 + 204);
      *(_QWORD *)((char *)this + 172) = v7;
      *((_DWORD *)this + 45) = v7 - *((_DWORD *)this + 41);
      *((_DWORD *)this + 46) = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
      *((_DWORD *)this + 40) = 2;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *(_QWORD *)((char *)this + 164) = *(_QWORD *)((char *)this + 8 * v3 + 204);
    *((_DWORD *)this + 40) = 1;
  }
  return v4;
}
