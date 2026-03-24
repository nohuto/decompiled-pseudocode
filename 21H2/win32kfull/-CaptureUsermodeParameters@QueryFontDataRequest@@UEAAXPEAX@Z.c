/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C009B230
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1C009B134 (-ValidateGlyphBitsBuffer@@YA_NKJJKK@Z.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C009B3C8 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

void __fastcall QueryFontDataRequest::CaptureUsermodeParameters(QueryFontDataRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rdi
  const void *v5; // r14
  int v6; // esi
  _OWORD *v7; // rax
  const void **v8; // rcx
  const void *v9; // rax
  void *v10; // rcx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // rdx
  int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // r9d

  v3 = (struct _FONTOBJ *)a2[2];
  v4 = (_OWORD *)a2[3];
  v5 = (const void *)a2[4];
  v6 = *((_DWORD *)a2 + 11);
  if ( v3 == *((struct _FONTOBJ **)this + 11)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 7), v3)
    && v6 >= 0
    && v5 == *((const void **)this + 13) )
  {
    v7 = (_OWORD *)*((_QWORD *)this + 8);
    if ( v7 )
    {
      if ( v4 != *((_OWORD **)this + 12) )
        return;
      *v7 = *v4;
      v7[1] = v4[1];
      v7[2] = v4[2];
      v7[3] = v4[3];
      v8 = (const void **)*((_QWORD *)this + 8);
      if ( *v8 == v5 )
        v9 = (const void *)*((_QWORD *)this + 9);
      else
        v9 = 0LL;
      *v8 = v9;
    }
    else if ( v4 )
    {
      return;
    }
    v10 = (void *)*((_QWORD *)this + 9);
    if ( !v10 )
      goto LABEL_27;
    v11 = *((_DWORD *)this + 20);
    if ( !v11 )
      goto LABEL_27;
    v12 = *((_DWORD *)this + 12);
    if ( v12 == 2 )
      goto LABEL_27;
    if ( v6 <= v11 && (v12 != 3 || v6 == 124) )
    {
      memmove(v10, v5, *((unsigned int *)this + 20));
      v13 = *((_DWORD *)this + 12);
      if ( v13 != 3 )
      {
        v14 = (_DWORD *)*((_QWORD *)this + 8);
        if ( v14 )
        {
          v15 = v14[10] - v14[8];
          v16 = 0;
          if ( v13 == 5 )
          {
            v17 = ((unsigned int)(v15 + 7) >> 3) + 3;
          }
          else
          {
            if ( v13 != 6 && (unsigned int)(v13 - 8) > 1 )
            {
LABEL_26:
              if ( !ValidateGlyphBitsBuffer(*((_DWORD *)this + 20), v15, v14[11] - v14[9], v16, 0) )
                return;
              goto LABEL_27;
            }
            v17 = v15 + 3;
          }
          v16 = v17 & 0xFFFFFFFC;
          goto LABEL_26;
        }
      }
LABEL_27:
      *((_DWORD *)this + 21) = v6;
    }
  }
}
