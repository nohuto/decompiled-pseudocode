__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // esi
  struct _FD_GLYPHSET *v9; // rdi
  struct _IFIMETRICS *v10; // r14
  void (__fastcall *v11)(struct _FD_GLYPHSET *, unsigned __int64); // rax
  void (__fastcall *v12)(struct _FD_GLYPHSET *, unsigned __int64); // rax
  void (__fastcall *v13)(struct _IFIMETRICS *, unsigned __int64); // rax
  unsigned __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v15[3]; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v17; // [rsp+B0h] [rbp+50h] BYREF
  struct _FD_GLYPHSET *v18; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = PDEVOBJ::cFonts(a2);
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000;
  v14 = 0LL;
  v16 = v6;
  v17 = 0LL;
  if ( v5 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, v5);
    if ( !(_DWORD)result )
      return result;
  }
  v8 = 1;
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v8, &v14);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      goto LABEL_26;
    }
    if ( v16 )
    {
      v17 = 0LL;
      goto LABEL_14;
    }
    v18 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   this,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v8,
                                   3u,
                                   &v17);
    v9 = v18;
    if ( !v18 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v15[0] = 0LL;
      if ( bExtendGlyphSet(&v18, v15) )
      {
        v11 = *(void (__fastcall **)(struct _FD_GLYPHSET *, unsigned __int64))(*(_QWORD *)a2 + 3000LL);
        if ( v11 )
          v11(v18, v17);
        v9 = v15[0];
      }
      else
      {
        v9 = v18;
      }
    }
LABEL_14:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v8, v9, v17, v10, v14, 0LL, 0LL) )
      goto LABEL_21;
    if ( ++v8 > v5 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v15, (_QWORD *)(*(_QWORD *)this + 104LL), 0, v5);
      FHMEMOBJ::FHMEMOBJ((__int64)v15, (_QWORD *)(*(_QWORD *)this + 112LL), 1, v5);
      FHMEMOBJ::FHMEMOBJ((__int64)v15, (_QWORD *)(*(_QWORD *)this + 120LL), 2, v5);
      return 1;
    }
  }
  EngSetLastError(0x3EBu);
LABEL_21:
  if ( v10->jWinCharSet == 2 )
  {
    if ( !v9 )
      goto LABEL_30;
    if ( (v9->flAccel & 0x10) != 0 )
    {
      Win32FreePool(v9);
LABEL_30:
      v13 = *(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(*(_QWORD *)a2 + 3000LL);
      if ( v13 )
        v13(v10, v14);
      return v4;
    }
  }
LABEL_26:
  if ( v9 )
  {
    v12 = *(void (__fastcall **)(struct _FD_GLYPHSET *, unsigned __int64))(*(_QWORD *)a2 + 3000LL);
    if ( v12 )
      v12(v9, v17);
  }
  if ( v10 )
    goto LABEL_30;
  return v4;
}
