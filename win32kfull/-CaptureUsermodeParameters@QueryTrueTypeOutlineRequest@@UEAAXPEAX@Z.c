void __fastcall QueryTrueTypeOutlineRequest::CaptureUsermodeParameters(QueryTrueTypeOutlineRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rsi
  const void *v5; // r14
  int v6; // edi
  void *v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  unsigned int *v10; // r10
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // r11d
  _OWORD *v15; // rax

  v3 = (struct _FONTOBJ *)a2[1];
  v4 = (_OWORD *)a2[3];
  v5 = (const void *)a2[5];
  v6 = *((_DWORD *)a2 + 12);
  if ( v3 == *((struct _FONTOBJ **)this + 12)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 6), v3)
    && v6 >= 0
    && v5 == *((const void **)this + 14) )
  {
    v7 = (void *)*((_QWORD *)this + 10);
    if ( v7 && v6 > 0 )
    {
      memmove(v7, v5, *((unsigned int *)this + 18));
      v8 = *((_DWORD *)this + 18);
      if ( v6 < v8 )
        v8 = v6;
      v9 = 0;
LABEL_10:
      if ( v9 + 16 >= v9 && v9 + 16 <= v8 )
      {
        v10 = (unsigned int *)(*((_QWORD *)this + 10) + v9);
        v11 = *v10;
        if ( *v10 >= 0x10 && v8 - v9 >= v11 )
        {
          v12 = 16;
          while ( v12 + 12 >= v12 )
          {
            if ( v11 < v12 + 12 )
              break;
            v13 = 8 * *(unsigned __int16 *)((char *)v10 + v12 + 2);
            v14 = v13 + 4;
            if ( v13 + 4 < v13 || v11 - v12 < v14 )
              break;
            v12 += v14;
            if ( v12 >= v11 )
            {
              v9 += v11;
              if ( v9 < v8 )
                goto LABEL_10;
              goto LABEL_21;
            }
          }
        }
      }
    }
    else
    {
LABEL_21:
      v15 = (_OWORD *)*((_QWORD *)this + 8);
      if ( v15 )
      {
        if ( v4 != *((_OWORD **)this + 13) )
          return;
        *v15 = *v4;
        v15[1] = v4[1];
        v15[2] = v4[2];
        v15[3] = v4[3];
      }
      else if ( v4 )
      {
        return;
      }
      *((_DWORD *)this + 22) = v6;
    }
  }
}
