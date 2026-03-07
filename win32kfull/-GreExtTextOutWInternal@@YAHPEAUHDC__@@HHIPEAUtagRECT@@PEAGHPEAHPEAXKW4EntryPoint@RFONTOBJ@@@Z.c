__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8,
        void *a9,
        unsigned int a10,
        int a11)
{
  unsigned int v14; // ebx
  DC *v15; // rcx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v17; // eax
  struct _DC_ATTR *v18; // rax
  __int64 v19; // rdi
  _DWORD v21[2]; // [rsp+68h] [rbp-61h] BYREF
  DC *v22; // [rsp+70h] [rbp-59h] BYREF
  __int64 v23; // [rsp+78h] [rbp-51h]
  __int128 v24; // [rsp+88h] [rbp-41h] BYREF
  __int64 v25; // [rsp+98h] [rbp-31h]
  int v26; // [rsp+A0h] [rbp-29h]
  _QWORD v27[2]; // [rsp+A8h] [rbp-21h] BYREF
  __int16 v28; // [rsp+B8h] [rbp-11h]
  __int64 v29; // [rsp+C0h] [rbp-9h]
  __int64 v30; // [rsp+C8h] [rbp-1h]
  __int64 v31; // [rsp+D0h] [rbp+7h]

  v22 = 0LL;
  v23 = 0LL;
  v14 = 0;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v22, a1);
  v15 = v22;
  if ( !v22 )
    return v14;
  if ( (*((_DWORD *)v22 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v23) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
      if ( UserAttr && !DC::SaveAttributes(v22, UserAttr) )
      {
        v15 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v22 + 3);
        v22 = 0LL;
LABEL_16:
        if ( v15 )
        {
          if ( (_DWORD)v23 && (*((_DWORD *)v15 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v23) )
            {
              v18 = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
              v15 = v22;
              if ( v18 )
              {
                DC::RestoreAttributes(v22, v18);
                v15 = v22;
              }
            }
            *((_DWORD *)v15 + 11) &= ~2u;
            v15 = v22;
            LODWORD(v23) = 0;
          }
          v21[0] = 0;
          v19 = *(_QWORD *)v15;
          HmgDecrementExclusiveReferenceCountEx(v15, HIDWORD(v23), v21);
          if ( v21[0] )
            GrepDeleteDC(v19, 0x2000000LL);
        }
        return v14;
      }
      v15 = v22;
    }
    *((_DWORD *)v15 + 11) |= 2u;
    v15 = v22;
    LODWORD(v23) = 1;
  }
  if ( (*((_DWORD *)v15 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v15);
    v15 = v22;
  }
  if ( v15 )
  {
    if ( (*((_DWORD *)v15 + 9) & 0x10000) == 0 )
    {
      v21[1] = *((unsigned __int16 *)v15 + 6);
      v21[0] = a11;
      v27[1] = 0LL;
      v28 = 256;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0;
      v27[0] = 0LL;
      v31 = 0LL;
      v30 = 0LL;
      v29 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v24, (struct XDCOBJ *)&v22, 0) )
        v17 = GreExtTextOutWLocked(
                (struct XDCOBJ *)&v22,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*((_QWORD *)v22 + 122) + 213LL),
                a9,
                a10,
                (const struct RFONTOBJ::Tag *)v21);
      else
        v17 = XDCOBJ::bFullScreen((XDCOBJ *)&v22);
      v14 = v17;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24);
      if ( v27[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v27);
      v15 = v22;
    }
    goto LABEL_16;
  }
  return v14;
}
