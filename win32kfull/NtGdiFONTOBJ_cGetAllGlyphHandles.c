__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2)
{
  ULONG v4; // esi
  HGLYPH *v5; // rbx
  ULONG v6; // ebp
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rdi
  FONTOBJ *v10; // rax
  FONTOBJ *v11; // r15
  ULONG AllGlyphHandles; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // eax

  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v11 = v10;
  if ( v10 )
  {
    if ( a2 )
    {
      AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v10, 0LL);
      v4 = AllGlyphHandles;
      if ( AllGlyphHandles )
      {
        if ( AllGlyphHandles > 0x9C4000 )
        {
          --*((_DWORD *)v9 + 105);
          return 0LL;
        }
        v16 = 4 * AllGlyphHandles;
        if ( v16 )
          v5 = (HGLYPH *)Win32AllocPool(v16, 1886221639LL, v13, v14);
      }
    }
    v6 = FONTOBJ_cGetAllGlyphHandles(v11, v5);
    if ( v6 && a2 )
    {
      if ( v5 )
      {
        if ( !(unsigned int)bSafeCopyBits(a2, v5, 4 * v4) )
          v6 = 0;
        goto LABEL_16;
      }
    }
    else if ( v5 )
    {
LABEL_16:
      Win32FreePool(v5);
    }
  }
  --*((_DWORD *)v9 + 105);
  return v6;
}
