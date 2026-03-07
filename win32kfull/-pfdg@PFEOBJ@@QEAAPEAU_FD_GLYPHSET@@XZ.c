struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(PFEOBJ *this)
{
  struct _FD_GLYPHSET *v1; // rsi
  int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r15d
  __int64 v8; // rbx
  bool v10; // al
  void (__fastcall *v11)(struct _FD_GLYPHSET *, unsigned __int64); // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  struct _FD_GLYPHSET *v13; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v15; // [rsp+90h] [rbp+50h] BYREF

  v1 = 0LL;
  v3 = 0;
  v4 = **(_QWORD **)this;
  v12 = v4;
  v5 = *(_QWORD *)(v4 + 88);
  v14 = 0LL;
  v6 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v6 + 23640));
  if ( !*(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v7 = *(_DWORD *)(v5 + 40) & 0x8000;
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemGlyphSet");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 23640));
    }
    v13 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   (PFFOBJ *)&v12,
                                   *(struct DHPDEV__ **)(v4 + 96),
                                   *(_QWORD *)(v4 + 80),
                                   *(_DWORD *)(*(_QWORD *)this + 8LL),
                                   3u,
                                   &v14);
    v1 = v13;
    if ( v7 )
      GreAcquireSemaphore(*(_QWORD *)(v6 + 23640));
    if ( v1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 16LL) )
      {
LABEL_16:
        v3 = 1;
        goto LABEL_9;
      }
      *(_QWORD *)(*(_QWORD *)this + 16LL) = v1;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = v14;
      if ( v7 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 44LL) == 2 )
        {
          v15 = 0LL;
          v10 = bExtendGlyphSet(&v13, &v15);
          v1 = v13;
          if ( v10 )
          {
            *(_QWORD *)(*(_QWORD *)this + 16LL) = v15;
            goto LABEL_16;
          }
        }
      }
    }
  }
LABEL_9:
  if ( *(_QWORD *)(*(_QWORD *)this + 16LL) )
    ++*(_DWORD *)(*(_QWORD *)this + 136LL);
  if ( v3 )
  {
    v11 = *(void (__fastcall **)(struct _FD_GLYPHSET *, unsigned __int64))(v5 + 3000);
    if ( v11 )
      v11(v1, v14);
  }
  v8 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemGlyphSet");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 23640));
  return (struct _FD_GLYPHSET *)v8;
}
