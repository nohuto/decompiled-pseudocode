/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C013BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C001B8D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall QueryTrueTypeOutlineRequest::CaptureUsermodeParameters(QueryTrueTypeOutlineRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rsi
  const void *v5; // r14
  int v6; // edi
  void *v7; // rcx
  _OWORD *v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  unsigned int *v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r11d

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
    if ( !v7 || v6 <= 0 )
    {
LABEL_6:
      v8 = (_OWORD *)*((_QWORD *)this + 8);
      if ( v8 )
      {
        if ( v4 != *((_OWORD **)this + 13) )
          return;
        *v8 = *v4;
        v8[1] = v4[1];
        v8[2] = v4[2];
        v8[3] = v4[3];
      }
      else if ( v4 )
      {
        return;
      }
      *((_DWORD *)this + 22) = v6;
      return;
    }
    memmove(v7, v5, *((unsigned int *)this + 18));
    v9 = *((_DWORD *)this + 18);
    if ( v6 < v9 )
      v9 = v6;
    v10 = 0;
LABEL_15:
    if ( v10 + 16 >= v10 && v10 + 16 <= v9 )
    {
      v11 = (unsigned int *)(*((_QWORD *)this + 10) + v10);
      v12 = *v11;
      if ( *v11 >= 0x10 && v9 - v10 >= v12 )
      {
        v13 = 16;
        while ( v13 + 12 >= v13 )
        {
          if ( v12 < v13 + 12 )
            break;
          v14 = 8 * *(unsigned __int16 *)((char *)v11 + v13 + 2);
          v15 = v14 + 4;
          if ( v14 + 4 < v14 || v12 - v13 < v15 )
            break;
          v13 += v15;
          if ( v13 >= v12 )
          {
            v10 += v12;
            if ( v10 >= v9 )
              goto LABEL_6;
            goto LABEL_15;
          }
        }
      }
    }
  }
}
