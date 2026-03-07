__int64 __fastcall CCompositionBuffer::AddRealization(CCompositionBuffer *this, struct CBufferRealization *a2)
{
  unsigned int v2; // r8d
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r8

  v2 = -1073741823;
  if ( (unsigned int)(*((_DWORD *)a2 + 6) - 1) > 3 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( !*((_DWORD *)this + 68) )
  {
    v3 = (_QWORD *)((char *)a2 + 8);
    v4 = (_QWORD *)((char *)this + 256);
    v5 = *((_QWORD *)this + 32);
    if ( *(CCompositionBuffer **)(v5 + 8) != (CCompositionBuffer *)((char *)this + 256) )
      __fastfail(3u);
    *v3 = v5;
    v3[1] = v4;
    *(_QWORD *)(v5 + 8) = v3;
    *v4 = v3;
    ++*((_DWORD *)this + 68);
    return 0;
  }
  return v2;
}
