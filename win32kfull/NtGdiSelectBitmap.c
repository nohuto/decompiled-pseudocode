HBITMAP __fastcall NtGdiSelectBitmap(__int64 a1, HBITMAP a2)
{
  HBITMAP v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  struct UMPDOBJ *v7; // rax
  DC *v8; // rdx
  int v9; // ebx
  __int64 v11; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  HBITMAP v15; // rax
  DC *v16; // r9
  HBITMAP v17; // rdi
  struct _DC_ATTR *v18; // rax
  __int64 v19; // rbx
  DC *v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h]
  int v22; // [rsp+60h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v21 = 0LL;
  v20 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v20 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v11);
LABEL_21:
    v8 = v20;
    goto LABEL_22;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || (v4 = *ThreadWin32Thread) == 0
    || (v5 = *(_QWORD *)(v4 + 40), v6 = v5 == v4 + 40, v7 = (struct UMPDOBJ *)(v5 - 40), v6) )
  {
    v7 = 0LL;
  }
  v8 = v20;
  if ( *((_WORD *)v20 + 6) == 1 )
  {
    *((_QWORD *)v20 + 271) = v7;
    *((_DWORD *)v20 + 544) = 0xFFFF;
    v8 = v20;
  }
  else if ( *((struct UMPDOBJ **)v20 + 271) != v7 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v20, v7);
    goto LABEL_17;
  }
  if ( HIDWORD(v21) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_12:
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
LABEL_13:
      v20 = 0LL;
LABEL_14:
      MDCOBJ::~MDCOBJ((MDCOBJ *)&v20);
      return 0LL;
    }
    v9 = *((_DWORD *)v8 + 528);
    if ( v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v8 = v20;
      goto LABEL_12;
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( !v8 )
    goto LABEL_14;
  if ( (*((_DWORD *)v8 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v21) )
    {
LABEL_28:
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v20;
      LODWORD(v21) = 1;
      goto LABEL_29;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
    if ( !UserAttr || DC::SaveAttributes(v20, UserAttr) )
    {
      v8 = v20;
      goto LABEL_28;
    }
LABEL_17:
    _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
    goto LABEL_13;
  }
LABEL_29:
  if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v8);
    v8 = v20;
  }
  if ( !v8 )
    goto LABEL_14;
  if ( *((unsigned __int16 *)v8 + 6) > 1u )
  {
    v13 = *((_QWORD *)v8 + 6);
    if ( v13 )
      v14 = *(_DWORD *)(v13 + 40);
    else
      v14 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(1LL, v14, *((unsigned __int16 *)v8 + 6));
    goto LABEL_14;
  }
  v15 = hbmSelectBitmapInternal((struct XDCOBJ *)&v20, v2, 0, 0, 0);
  v16 = v20;
  v17 = v15;
  if ( v20 )
  {
    if ( (_DWORD)v21 && (*((_DWORD *)v20 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v21) )
      {
        v18 = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
        if ( v18 )
          DC::RestoreAttributes(v20, v18);
        v16 = v20;
      }
      *((_DWORD *)v16 + 11) &= ~2u;
      v16 = v20;
      LODWORD(v21) = 0;
    }
    v22 = 0;
    v19 = *(_QWORD *)v16;
    HmgDecrementExclusiveReferenceCountEx(v16, HIDWORD(v21), &v22);
    if ( v22 )
      GrepDeleteDC(v19, 0x2000000LL);
  }
  return v17;
}
