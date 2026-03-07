__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        unsigned int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  __int64 v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  unsigned __int8 v12; // bp
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  wchar_t *v16; // rdi
  int v17; // ebp
  struct _FLENTRY *BaseFontEntry; // rsi
  __int64 result; // rax
  const unsigned __int16 *v20; // rdx
  __int16 v21; // si
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v25 = *(_QWORD *)(*(_QWORD *)this + 216LL) + *(_DWORD *)(*(_QWORD *)this + 212LL) * (a2 - 1);
  if ( v25 )
  {
    v11 = a8;
    if ( a8 )
    {
      v13 = *(_QWORD **)a8;
      v12 = 1;
    }
    else
    {
      v12 = 0;
      v13 = 0LL;
    }
    if ( (unsigned int)PFEMEMOBJ::bInit(
                         (PFEMEMOBJ *)&v25,
                         (struct PFF *)v9,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6,
                         *(_QWORD *)(v9 + 80) == 0LL,
                         a7,
                         v12) )
    {
      if ( !v12 )
      {
        v14 = v25;
        v15 = *(_QWORD *)(v25 + 32);
        v16 = (wchar_t *)(v15 + *(int *)(v15 + 8));
        v17 = *(_DWORD *)(v15 + 48) & 0x8000000;
        BaseFontEntry = FindBaseFontEntry(v16);
        if ( BaseFontEntry )
          goto LABEL_34;
        if ( v17 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v16[v23] );
          BaseFontEntry = FindBaseFontEntry(&v16[v23 + 1]);
          if ( BaseFontEntry )
          {
LABEL_34:
            if ( IsCHSBaseFont(
                   *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
                   *(_DWORD *)(*(_QWORD *)this + 32LL)) )
            {
              *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
            }
            *(_QWORD *)(v14 + 120) = BaseFontEntry;
            goto LABEL_9;
          }
        }
LABEL_8:
        *(_QWORD *)(v14 + 120) = 0LL;
LABEL_9:
        result = 1LL;
        *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 208LL))++ + 216) = v14;
        return result;
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
      v14 = v25;
      if ( v20 )
      {
        if ( a2 != 1 )
        {
          v21 = *(_WORD *)(*(int *)(*(_QWORD *)(v25 + 32) + 16LL) + *(_QWORD *)(v25 + 32));
          if ( !(unsigned int)PFEOBJ::bCheckFamilyName((PFEOBJ *)&v25, v20, 1, 0LL) )
            goto LABEL_8;
          v22 = 0LL;
          if ( v21 == 64 )
            v22 = 1LL;
          v13[v22] = v14;
          if ( v21 == 64 )
            goto LABEL_8;
          goto LABEL_22;
        }
      }
      else
      {
        v24 = a2 - 1;
        if ( v24 )
        {
          if ( v24 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v25 + 32) + 16LL) + *(_QWORD *)(v25 + 32)) != 64 )
            goto LABEL_8;
          goto LABEL_22;
        }
      }
      *v13 = v25;
LABEL_22:
      v13[1] = v14;
      goto LABEL_8;
    }
  }
  return 0LL;
}
