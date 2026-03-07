_BOOL8 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, int a4)
{
  BOOL v8; // edi
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rsi
  int v11; // eax
  struct tagPvtData *v12; // r12
  Gre::Base *v13; // rcx
  struct PFF *v15; // r12
  int v16; // edi
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  struct PFF **v24; // [rsp+A8h] [rbp+38h] BYREF

  v8 = 0;
  v10 = Gre::Base::Globals(this);
  if ( !a2 )
    goto LABEL_7;
  v11 = *((_DWORD *)a2 + 13);
  v12 = 0LL;
  v21[0] = a2;
  if ( (v11 & 1) != 0 )
  {
    v8 = 1;
    if ( !*((_DWORD *)a2 + 14) && !*((_DWORD *)a2 + 15) && !*((_QWORD *)a2 + 18) && !*((_DWORD *)a2 + 16) )
      goto LABEL_22;
LABEL_7:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
    return v8;
  }
  if ( *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(v9) + 796) )
  {
    v12 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v21);
    if ( !v12 )
      goto LABEL_7;
  }
  LODWORD(v24) = 0;
  v8 = 1;
  if ( !(unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v21, a4, v12, (int *)&v24) )
  {
    if ( *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(v13) + 796) )
      v8 = (_DWORD)v24 == 0;
    goto LABEL_7;
  }
  PFFOBJ::vRemoveHash((PFFOBJ *)v21);
  v15 = 0LL;
  v16 = *((_DWORD *)a2 + 13);
  if ( !*((_DWORD *)a2 + 16) )
    v15 = a2;
  v24 = a3;
  v17 = v16 & 0x200;
  if ( !a3 )
  {
    PUBLIC_PFTOBJ::pPFFGet(
      this,
      *((const unsigned __int16 **)a2 + 3),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((struct tagDESIGNVECTOR **)a2 + 5),
      *((_DWORD *)a2 + 12),
      &v24,
      0);
    a3 = v24;
  }
  if ( *a3 == a2 )
    *a3 = (struct PFF *)*((_QWORD *)a2 + 1);
  v18 = *((_QWORD *)a2 + 1);
  if ( v18 )
    *(_QWORD *)(v18 + 16) = *((_QWORD *)a2 + 2);
  v19 = *((_QWORD *)a2 + 2);
  if ( v19 )
    *(_QWORD *)(v19 + 8) = *((_QWORD *)a2 + 1);
  v20 = *(_QWORD *)this;
  if ( !v17 )
    ++*(_DWORD *)(v20 + 32);
  --*(_DWORD *)(v20 + 28);
  a2 = v15;
  v8 = 1;
  if ( !v15 )
    goto LABEL_7;
LABEL_22:
  v21[0] = a2;
  if ( prfntKillList((Gre::Base *)v21) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
    vKillRFONTList((PFFOBJ *)v21);
  }
  else
  {
    v23 = 0LL;
    v22 = 0LL;
    if ( (unsigned int)bKillPFFOBJ((PFFOBJ *)v21, (struct PFFCLEANUP *)&v22) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
      GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
      vCleanupFontFile((struct PFFCLEANUP *)&v22);
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
      GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
    }
  }
  return 1;
}
