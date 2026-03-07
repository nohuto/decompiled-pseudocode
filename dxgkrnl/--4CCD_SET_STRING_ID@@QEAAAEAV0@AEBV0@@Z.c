CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  int v4; // eax
  _WORD *v5; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      operator delete(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      v4 = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)this + 8), (const struct _STRING *)(a2 + 8));
      *(_DWORD *)this = v4;
      if ( v4 >= 0 )
      {
        v5 = (_WORD *)(a2 + 32);
        if ( !*(_QWORD *)(a2 + 24) || !*v5 )
          WdLogSingleEntry0(1LL);
        if ( !*(_QWORD *)(a2 + 24) || !*v5 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
          return this;
        }
        if ( *v5 <= *((_WORD *)this + 16) )
          goto LABEL_12;
        v6 = (void *)*((_QWORD *)this + 3);
        *((_WORD *)this + 16) = 0;
        operator delete(v6);
        v7 = 8LL * (unsigned __int16)*v5;
        if ( !is_mul_ok((unsigned __int16)*v5, 8uLL) )
          v7 = -1LL;
        v8 = operator new[](v7, 0x63644356u, 256LL);
        *((_QWORD *)this + 3) = v8;
        if ( v8 )
        {
LABEL_12:
          memmove(*((void **)this + 3), *(const void **)(a2 + 24), 8LL * (unsigned __int16)*v5);
          *((_WORD *)this + 16) = *v5;
          return this;
        }
        WdLogSingleEntry1(6LL, 8LL * (unsigned __int16)*v5);
        *(_DWORD *)this = -1073741801;
      }
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return this;
}
