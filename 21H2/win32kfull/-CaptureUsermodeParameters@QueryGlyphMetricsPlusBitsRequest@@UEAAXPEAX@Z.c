/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C0019230
 * Callers:
 *     <none>
 * Callees:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C00193FC (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1C001B6A4 (-ValidateGlyphBitsBuffer@@YA_NKJJKK@Z.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C001B8D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1C015F3B8 (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall QueryGlyphMetricsPlusBitsRequest::CaptureUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  const void *v4; // rsi
  const void *v5; // r14
  int v6; // edi
  void **v7; // r12
  void **v8; // r15
  void *v9; // r11
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // r9d
  _QWORD *v13; // rdx
  void **v14; // rcx
  size_t Size; // [rsp+78h] [rbp+10h] BYREF

  v3 = (struct _FONTOBJ *)a2[2];
  v4 = (const void *)a2[3];
  v5 = (const void *)a2[4];
  v6 = *((_DWORD *)a2 + 11);
  if ( v3 == *((struct _FONTOBJ **)this + 13)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 7), v3)
    && v6 >= 0
    && v4 == *((const void **)this + 14)
    && v5 == *((const void **)this + 15)
    && (unsigned int)v6 <= *((_DWORD *)this + 20)
    && (unsigned int)v6 >= 0x10 )
  {
    *((_DWORD *)this + 20) = v6;
    Size = 0LL;
    v7 = (void **)((char *)this + 72);
    v8 = (void **)((char *)this + 64);
    if ( (unsigned int)FONTOBJ_bEnsureGlyphCacheBuffer(
                         *((_QWORD *)this + 7),
                         v6,
                         ((_DWORD)this + 64) & (unsigned int)-(*((_QWORD *)this + 11) != 0LL),
                         (int)&Size,
                         (struct _GLYPHBITS **)this + 9) )
    {
      if ( *((_QWORD *)this + 11) )
        memmove(*v8, v4, Size);
      v9 = *v7;
      if ( !*v7
        || ((memmove(*v7, v5, *((unsigned int *)this + 20)),
             v10 = *((_DWORD *)*v7 + 2),
             v11 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL),
             (v11 & 0x10000) == 0)
          ? (v12 = (unsigned int)(v10 + 7) >> 3)
          : (v11 & 0x10000000) == 0
          ? (v12 = (unsigned int)(v10 + 1) >> 1)
          : (v12 = *((_DWORD *)*v7 + 2)),
            ValidateGlyphBitsBuffer(*((_DWORD *)this + 20), v10, *((_DWORD *)*v7 + 3), v12, 0x10u)) )
      {
        v13 = *v8;
        if ( *v8 )
        {
          *v13 = v9;
          v9 = *v7;
          v13 = *v8;
        }
        FONTOBJ_AdvanceGlyphCacheBuffer(*((_QWORD *)this + 7), v13, v9, *((unsigned int *)this + 20));
        v14 = (void **)*((_QWORD *)this + 11);
        if ( v14 )
          *v14 = *v8;
        **((_QWORD **)this + 12) = *v7;
        *((_DWORD *)this + 21) = v6;
      }
    }
  }
}
