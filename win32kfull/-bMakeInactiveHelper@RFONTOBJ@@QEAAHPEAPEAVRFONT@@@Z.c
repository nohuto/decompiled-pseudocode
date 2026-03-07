__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct RFONT **this, struct RFONT **a2)
{
  struct RFONT *v2; // rax
  unsigned int v5; // r13d
  struct RFONT *v6; // r12
  __int64 v7; // r15
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rdi
  __int64 v10; // rdi
  struct RFONT *v11; // rax
  struct RFONT *v12; // rax
  struct RFONT *v13; // rcx
  struct RFONT *v14; // rcx
  struct RFONT *v15; // rax
  unsigned int i; // edx
  char *v17; // rcx
  struct RFONT *v18; // r10
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r11
  _QWORD *v23; // r8
  __int64 v24; // rax
  unsigned int v25; // edx
  struct RFONT *v26; // rdx
  _QWORD *v27; // r9
  _QWORD *v28; // r8
  struct RFONT *v30; // rcx
  struct RFONT *v31; // rax
  struct RFONT *v32; // rcx
  struct RFONT *v33; // rdx
  _QWORD v34[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v35[2]; // [rsp+30h] [rbp-20h] BYREF
  struct RFONT *v36; // [rsp+90h] [rbp+40h] BYREF
  struct RFONT *v37; // [rsp+A0h] [rbp+50h] BYREF
  struct RFONT *v38; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *this;
  LODWORD(v36) = 0;
  v5 = 0;
  if ( !v2 || !*((_DWORD *)v2 + 165) )
    return 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  v9 = Gre::Base::Globals(v8);
  if ( a2 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v7 + 13272));
    ++*(_DWORD *)(v7 + 13300);
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v7 + 13272));
  }
  v10 = *((_QWORD *)v9 + 3);
  GreAcquireSemaphore(v10);
  if ( !--*((_DWORD *)*this + 165) )
  {
    if ( a2 )
    {
      v11 = (struct RFONT *)*((_QWORD *)*this + 90);
      if ( v11 )
      {
        *a2++ = v11;
        *((_QWORD *)*this + 90) = 0LL;
      }
      v12 = *this;
      LODWORD(v36) = 1;
      v13 = (struct RFONT *)*((_QWORD *)v12 + 91);
      if ( v13 )
      {
        *a2++ = v13;
        *((_QWORD *)*this + 91) = 0LL;
      }
      v14 = (struct RFONT *)*((_QWORD *)*this + 92);
      if ( v14 )
      {
        *a2++ = v14;
        *((_QWORD *)*this + 92) = 0LL;
      }
      v15 = *this;
      for ( i = 0; i < *((_DWORD *)*this + 210); ++i )
      {
        v30 = *(struct RFONT **)(*((_QWORD *)v15 + 93) + 8LL * i);
        if ( v30 )
        {
          *a2++ = v30;
          *(_QWORD *)(*((_QWORD *)*this + 93) + 8LL * i) = 0LL;
        }
        v15 = *this;
      }
      v17 = (char *)*((_QWORD *)v15 + 93);
      if ( v17 && v17 != (char *)v15 + 752 )
        Win32FreePool(v17);
      *((_QWORD *)*this + 93) = 0LL;
      *((_DWORD *)*this + 210) = 0;
      *((_DWORD *)*this + 208) = 0;
    }
    v18 = *this;
    v19 = *((_QWORD *)*this + 13);
    v34[0] = v19;
    if ( (*(_DWORD *)(v19 + 40) & 0x800000) != 0 )
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 3496) + 1512LL);
    else
      v20 = *(_QWORD *)(v19 + 1512);
    v21 = *((_QWORD *)v18 + 83);
    v22 = *((_QWORD *)v18 + 84);
    v23 = (_QWORD *)((v22 + 664) & -(__int64)(v22 != 0));
    if ( v21 )
    {
      *(_QWORD *)(((v21 + 664) & -(__int64)(*((_QWORD *)v18 + 83) != 0LL)) + 8) = v22;
      if ( v23 )
        *v23 = *((_QWORD *)v18 + 83);
    }
    else
    {
      v20 = *((_QWORD *)v18 + 84);
      if ( v23 )
        *v23 = 0LL;
    }
    if ( (*(_DWORD *)(v19 + 40) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v19 + 3496) + 1512LL) = v20;
    else
      *(_QWORD *)(v19 + 1512) = v20;
    v24 = *((_QWORD *)*this + 16);
    if ( *(_DWORD *)(v24 + 56) || *(_DWORD *)(v24 + 60) || *(_QWORD *)(v24 + 144) )
    {
      if ( (*(_DWORD *)(v19 + 40) & 0x800000) != 0 )
        v25 = *(_DWORD *)(*(_QWORD *)(v19 + 3496) + 1528LL);
      else
        v25 = *(_DWORD *)(v19 + 1528);
      if ( v25 >= 0x80 )
      {
        v31 = PDEVOBJ::prfntInactive((PDEVOBJ *)v34);
        if ( v31 )
        {
          v32 = v31;
          v33 = v31;
          do
          {
            v6 = v32;
            v32 = (struct RFONT *)*((_QWORD *)v33 + 84);
            v37 = v32;
            v33 = v32;
          }
          while ( v32 );
        }
        v38 = v6;
        v37 = v31;
        RFONTOBJ::vRemove(&v38, &v37, 1LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)v34, v37);
        v38 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
      }
      else if ( (*(_DWORD *)(v19 + 40) & 0x800000) != 0 )
      {
        ++*(_DWORD *)(*(_QWORD *)(v19 + 3496) + 1528LL);
      }
      else
      {
        ++*(_DWORD *)(v19 + 1528);
      }
      if ( (*(_DWORD *)(v19 + 40) & 0x800000) != 0 )
        v26 = *(struct RFONT **)(*(_QWORD *)(v19 + 3496) + 1520LL);
      else
        v26 = *(struct RFONT **)(v19 + 1520);
      v27 = (_QWORD *)(((unsigned __int64)v26 + 664) & -(__int64)(v26 != 0LL));
      v28 = (_QWORD *)((char *)*this + 664);
      if ( *this != (struct RFONT *)-664LL )
      {
        *v28 = 0LL;
        v28[1] = v26;
        if ( v27 )
          *v27 = *this;
        v26 = *this;
      }
      if ( (*(_DWORD *)(v19 + 40) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v19 + 3496) + 1520LL) = v26;
      else
        *(_QWORD *)(v19 + 1520) = v26;
    }
    else
    {
      v6 = *this;
    }
    v5 = (unsigned int)v36;
  }
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v10);
  }
  if ( a2 && !v5 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v7 + 13272));
    --*(_DWORD *)(v7 + 13300);
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v7 + 13272));
  }
  if ( v6 )
  {
    v34[0] = *((_QWORD *)v6 + 16);
    v36 = v6;
    memset(v35, 0, sizeof(v35));
    PushThreadGuardedObject(v35, v6, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v36, 0LL, (struct PFFOBJ *)v34, 1);
    PopThreadGuardedObject(v35);
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  }
  *this = 0LL;
  return v5;
}
