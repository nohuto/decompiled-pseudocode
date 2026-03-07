char *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, ULONG a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rdi
  _DWORD *v7; // rbx
  struct PFT *v8; // r14
  char *v10; // rsi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v12; // r15
  unsigned int cjThis; // r14d
  char *v14; // rax
  char v15; // [rsp+70h] [rbp+18h] BYREF
  struct UMPDOBJ *v16; // [rsp+78h] [rbp+20h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  v16 = ThreadCurrentObj;
  v7 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v7;
  v8 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v8 )
  {
    --*v7;
    return 0LL;
  }
  v10 = 0LL;
  if ( *((_QWORD *)v6 + 42) )
  {
    v10 = (char *)*((_QWORD *)v6 + 42);
  }
  else
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v15, v8);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v15, v6, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v8, a2);
    v12 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v14 = UMPDOBJ::_AllocUserMem(v6, GlyphAttrs->cjThis, 0);
      v10 = v14;
      if ( v14 )
      {
        memmove(v14, v12, cjThis);
        *((_QWORD *)v6 + 42) = v10;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v15, v6, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v15);
  }
  --*v7;
  return v10;
}
