__int64 __fastcall bSaveRegion(DC **a1, __int64 a2)
{
  unsigned int v2; // esi
  DC *v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  struct UMPDOBJ *v12; // rax
  DC *v13; // rdx
  int v14; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-50h] BYREF
  DC *v19; // [rsp+28h] [rbp-48h] BYREF
  int v20; // [rsp+30h] [rbp-40h]
  int v21; // [rsp+34h] [rbp-3Ch]
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  struct _RECTL v23; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v24; // [rsp+50h] [rbp-20h] BYREF

  v2 = 1;
  v4 = *a1;
  if ( (_DWORD)a2 != 1 )
  {
    v8 = *((_QWORD *)v4 + 14);
    LOBYTE(a2) = 1;
    v20 = 0;
    v21 = 0;
    v19 = (DC *)HmgLockEx(v8, a2, 0LL);
    if ( v19 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v10 = *ThreadWin32Thread) != 0 && (v11 = (_QWORD *)(v10 + 40), (_QWORD *)*v11 != v11) )
        v12 = (struct UMPDOBJ *)(*v11 - 40LL);
      else
        v12 = 0LL;
      v13 = v19;
      if ( *((_WORD *)v19 + 6) == 1 )
      {
        *((_QWORD *)v19 + 271) = v12;
        *((_DWORD *)v19 + 544) = 0xFFFF;
        v13 = v19;
      }
      else if ( *((struct UMPDOBJ **)v19 + 271) != v12 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v19, v12);
        goto LABEL_25;
      }
      if ( !v21 )
      {
LABEL_34:
        if ( !v13 )
          goto LABEL_27;
        if ( (*((_DWORD *)v13 + 11) & 2) != 0 )
          goto LABEL_41;
        if ( v21 )
        {
LABEL_40:
          *((_DWORD *)v13 + 11) |= 2u;
          v13 = v19;
          v20 = 1;
LABEL_41:
          if ( (*((_DWORD *)v13 + 130) & 4) != 0 )
          {
            DC::vMarkTransformDirty(v13);
            v13 = v19;
          }
          if ( v13 )
          {
            v16 = *((_QWORD *)v13 + 21);
            if ( v16 )
            {
              ++*(_DWORD *)(v16 + 76);
              v13 = v19;
            }
            v17 = *((_QWORD *)v13 + 20);
            if ( v17 )
              ++*(_DWORD *)(v17 + 76);
            goto LABEL_28;
          }
LABEL_27:
          v2 = 0;
LABEL_28:
          DCOBJ::~DCOBJ((DCOBJ *)&v19);
          return v2;
        }
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v19);
        if ( !UserAttr || DC::SaveAttributes(v19, UserAttr) )
        {
          v13 = v19;
          goto LABEL_40;
        }
LABEL_25:
        _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_22:
        _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
LABEL_26:
        v19 = 0LL;
        goto LABEL_27;
      }
      v14 = *((_DWORD *)v13 + 528);
      if ( v14 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v13 = v19;
        goto LABEL_22;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v13 = v19;
    goto LABEL_34;
  }
  v5 = *((_QWORD *)v4 + 64);
  v23.left = 0;
  *(_QWORD *)&v23.right = (unsigned int)v5;
  v23.top = HIDWORD(v5);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  if ( !v22 )
    return 0LL;
  v7 = *((_QWORD *)*a1 + 6);
  if ( *((_QWORD *)*a1 + 62) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
    if ( (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && *(int *)(*((_QWORD *)*a1 + 62) + 112LL) < 0 )
    {
      v24 = v23;
      ERECTL::operator+=(&v24, v7 + 2560);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
  }
  RGNOBJ::vSet((RGNOBJ *)&v22, &v23);
  DC::AcquireDcVisRgnExclusive(*a1);
  *((_QWORD *)*a1 + 142) = v22;
  wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(&v24);
  return v2;
}
