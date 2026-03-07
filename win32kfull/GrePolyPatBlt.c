__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4, int a5)
{
  DC *v8; // rcx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v10; // ebx
  DC *v11; // r9
  struct _DC_ATTR *v12; // rax
  __int64 v13; // rdi
  DC *v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+58h] [rbp-8h]
  unsigned int v17; // [rsp+5Ch] [rbp-4h]

  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v15, a1);
  v8 = v15;
  if ( v15 )
  {
    if ( (*((_DWORD *)v15 + 11) & 2) == 0 )
    {
      if ( !v17 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v15);
        if ( UserAttr && !DC::SaveAttributes(v15, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
          v15 = 0LL;
          v10 = 0;
          goto LABEL_24;
        }
        v8 = v15;
      }
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v15;
      v16 = 1;
    }
    if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v8);
      v8 = v15;
    }
  }
  v10 = 0;
  if ( v8 )
  {
    v10 = GrePolyPatBltInternal(
            (struct XDCOBJ *)&v15,
            a2,
            a3,
            a4,
            0,
            *(_DWORD *)(*((_QWORD *)v8 + 122) + 184LL),
            *(_DWORD *)(*((_QWORD *)v8 + 122) + 176LL),
            *(_DWORD *)(*((_QWORD *)v8 + 122) + 188LL),
            *(_DWORD *)(*((_QWORD *)v8 + 122) + 180LL));
    goto LABEL_11;
  }
LABEL_24:
  EngSetLastError(6u);
LABEL_11:
  v11 = v15;
  if ( v15 )
  {
    if ( v16 && (*((_DWORD *)v15 + 11) & 2) != 0 )
    {
      if ( !v17 )
      {
        v12 = XDCOBJ::GetUserAttr((XDCOBJ *)&v15);
        if ( v12 )
          DC::RestoreAttributes(v15, v12);
        v11 = v15;
      }
      *((_DWORD *)v11 + 11) &= ~2u;
      v16 = 0;
      v11 = v15;
    }
    a5 = 0;
    v13 = *(_QWORD *)v11;
    HmgDecrementExclusiveReferenceCountEx(v11, v17, &a5);
    if ( a5 )
      GrepDeleteDC(v13, 0x2000000LL);
  }
  return v10;
}
