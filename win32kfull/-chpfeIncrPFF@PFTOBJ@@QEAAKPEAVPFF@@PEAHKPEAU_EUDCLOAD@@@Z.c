__int64 __fastcall PFTOBJ::chpfeIncrPFF(PFTOBJ *this, struct PFF *a2, int *a3, unsigned int a4, struct _EUDCLOAD *a5)
{
  unsigned int v5; // ebx
  struct PFF *v8; // rdi
  int v10; // eax
  _DWORD *v11; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v17[0] = a2;
  v8 = a2;
  if ( !a2 )
    return v5;
  v10 = *((_DWORD *)a2 + 13) & 8;
  if ( a5 )
  {
    if ( !v10 )
      return v5;
LABEL_6:
    if ( PFTOBJ::bIsPrivatePFT(this) )
    {
      if ( !(unsigned int)PFFOBJ::bAddPvtData((PFFOBJ *)v17, a4) )
      {
        *a3 = 0;
        return (unsigned int)-1;
      }
      v8 = (struct PFF *)v17[0];
    }
    *a3 = 1;
    if ( a5 )
    {
      if ( !*((_QWORD *)a5 + 1) && *((_DWORD *)v8 + 52) > 2u )
      {
LABEL_18:
        *a3 = 0;
        return 1LL;
      }
      PFFOBJ::vGetEUDC((PFFOBJ *)v17, (const wchar_t **)a5);
    }
    if ( !PFTOBJ::bIsPrivatePFT(this) )
    {
      v11 = (_DWORD *)((char *)v8 + 60);
      if ( (a4 & 0x20) == 0 )
        v11 = (_DWORD *)((char *)v8 + 56);
      if ( *v11 == -1 )
        goto LABEL_18;
      if ( (a4 & 0x40) == 0 )
      {
        v13 = *((_DWORD *)v8 + 13);
        if ( (v13 & 0x80u) == 0 )
          ++*v11;
        else
          *((_DWORD *)v8 + 13) = v13 & 0xFFFFFF7F;
        v14 = *((_DWORD *)v8 + 13);
        if ( (v14 & 1) != 0 )
        {
          v15 = 0;
          for ( *((_DWORD *)v8 + 13) = v14 & 0xFFFFFFFE; v15 < *((_DWORD *)v8 + 52); ++v15 )
          {
            v16 = *((_QWORD *)v8 + v15 + 27);
            if ( v16 )
              *(_DWORD *)(v16 + 12) &= ~2u;
          }
        }
      }
    }
    return *((unsigned int *)v8 + 52);
  }
  if ( !v10 )
    goto LABEL_6;
  return v5;
}
