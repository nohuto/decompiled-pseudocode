void __fastcall QueryFontFileRequest::CaptureUsermodeParameters(QueryFontFileRequest *this, int *a2)
{
  const void *v3; // r9
  size_t v4; // rbx
  int v5; // ecx
  void *v6; // rcx

  v3 = (const void *)*((_QWORD *)a2 + 2);
  v4 = a2[6];
  if ( (v4 & 0x80000000) == 0LL && v3 == *((const void **)this + 9) )
  {
    v5 = *((_DWORD *)this + 12) - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      goto LABEL_5;
    }
    if ( (v4 & 1) == 0 )
    {
      v6 = (void *)*((_QWORD *)this + 7);
      if ( !v6 )
      {
LABEL_5:
        *((_DWORD *)this + 16) = v4;
        return;
      }
      if ( (unsigned int)v4 <= *((_DWORD *)this + 13) )
      {
        if ( (int)v4 > 0 )
        {
          memmove(v6, v3, v4);
          *(_WORD *)(*((_QWORD *)this + 7) + 2 * (v4 >> 1) - 2) = 0;
        }
        goto LABEL_5;
      }
    }
  }
}
