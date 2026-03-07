__int64 __fastcall GreSetTextColor(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  struct UMPDOBJ *v7; // rdx
  DC *v8; // r9
  int v9; // ebx
  DC *v10; // r9
  __int64 v11; // rcx
  struct _DC_ATTR *v12; // rax
  __int64 v13; // rax
  int v14; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v16; // rbx
  DC *v18; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+28h] [rbp-8h]
  unsigned int v20; // [rsp+2Ch] [rbp-4h]
  int v21; // [rsp+60h] [rbp+30h] BYREF

  v19 = 0;
  v2 = a2;
  v20 = 0;
  v3 = -1;
  LOBYTE(a2) = 1;
  v18 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v18 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v11);
LABEL_21:
    v8 = v18;
    goto LABEL_22;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v5 = *ThreadWin32Thread) != 0 && (v6 = (_QWORD *)(v5 + 40), (_QWORD *)*v6 != v6) )
    v7 = (struct UMPDOBJ *)(*v6 - 40LL);
  else
    v7 = 0LL;
  v8 = v18;
  if ( *((_WORD *)v18 + 6) == 1 )
  {
    *((_QWORD *)v18 + 271) = v7;
    *((_DWORD *)v18 + 544) = 0xFFFF;
    v8 = v18;
  }
  else if ( *((struct UMPDOBJ **)v18 + 271) != v7 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v18, v7);
    goto LABEL_16;
  }
  if ( v20 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
LABEL_17:
      v10 = 0LL;
      v18 = 0LL;
LABEL_35:
      if ( v10 )
      {
        if ( v19 && (*((_DWORD *)v10 + 11) & 2) != 0 )
        {
          if ( !v20 )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
            if ( UserAttr )
              DC::RestoreAttributes(v18, UserAttr);
            v10 = v18;
          }
          *((_DWORD *)v10 + 11) &= ~2u;
          v19 = 0;
          v10 = v18;
        }
        v21 = 0;
        v16 = *(_QWORD *)v10;
        HmgDecrementExclusiveReferenceCountEx(v10, v20, &v21);
        if ( v21 )
          GrepDeleteDC(v16, 0x2000000LL);
      }
      return v3;
    }
    v9 = *((_DWORD *)v8 + 528);
    if ( v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v8 = v18;
      goto LABEL_13;
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( !v8 )
    return v3;
  if ( (*((_DWORD *)v8 + 11) & 2) == 0 )
  {
    if ( v20 )
    {
LABEL_28:
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v18;
      v19 = 1;
      goto LABEL_29;
    }
    v12 = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
    if ( !v12 || DC::SaveAttributes(v18, v12) )
    {
      v8 = v18;
      goto LABEL_28;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
    goto LABEL_17;
  }
LABEL_29:
  if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v8);
    v8 = v18;
  }
  if ( v8 )
  {
    v13 = *((_QWORD *)v8 + 122);
    v3 = *(_DWORD *)(v13 + 188);
    *(_DWORD *)(v13 + 188) = v2;
    v14 = v2 & 0x13FFFFFF;
    if ( v14 != v3 )
    {
      *(_DWORD *)(*((_QWORD *)v18 + 122) + 184LL) = v14;
      *(_DWORD *)(*((_QWORD *)v18 + 122) + 152LL) |= 7u;
    }
    v10 = v18;
    goto LABEL_35;
  }
  return v3;
}
