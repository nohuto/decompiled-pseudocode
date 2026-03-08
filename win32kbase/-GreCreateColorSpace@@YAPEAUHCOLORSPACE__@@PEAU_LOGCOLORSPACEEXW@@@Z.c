/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0016D9C
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1C019A100 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1C031D1E8 (bInitICM.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001A2C4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     AllocateObject @ 0x1C0052FA0 (AllocateObject.c)
 *     FreeObject @ 0x1C00597F0 (FreeObject.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0070E78 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v1; // rsi
  struct OBJECT *Object; // rax
  struct OBJECT *v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    Object = (struct OBJECT *)AllocateObject(0x268uLL);
    v4 = Object;
    if ( Object )
    {
      v6 = 0LL;
      v1 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v6, Object, 1, 0, 9u);
      if ( v1 )
      {
        *((_DWORD *)v4 + 6) = *(_DWORD *)a1;
        *((_DWORD *)v4 + 7) = *((_DWORD *)a1 + 1);
        *((_DWORD *)v4 + 8) = *((_DWORD *)a1 + 2);
        *((_DWORD *)v4 + 9) = *((_DWORD *)a1 + 3);
        *((_DWORD *)v4 + 10) = *((_DWORD *)a1 + 4);
        *(_OWORD *)((char *)v4 + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)((char *)v4 + 60) = *(_OWORD *)((char *)a1 + 36);
        *((_DWORD *)v4 + 19) = *((_DWORD *)a1 + 13);
        *((_DWORD *)v4 + 20) = *((_DWORD *)a1 + 14);
        *((_DWORD *)v4 + 21) = *((_DWORD *)a1 + 15);
        *((_DWORD *)v4 + 22) = *((_DWORD *)a1 + 16);
        RtlStringCchCopyW((unsigned __int16 *)v4 + 46, 0x104uLL, (const unsigned __int16 *)a1 + 34);
        *((_DWORD *)v4 + 153) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      else
      {
        FreeObject(v4);
      }
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    }
    return v1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
