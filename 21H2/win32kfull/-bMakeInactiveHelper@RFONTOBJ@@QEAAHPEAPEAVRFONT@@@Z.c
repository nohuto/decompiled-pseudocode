/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C02971C8 (vMakeInactiveHelper.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C000AD50 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C000AD70 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C000B034 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C000B524 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct RFONT **this, struct RFONT **a2)
{
  struct RFONT **v2; // r14
  unsigned int v4; // ebp
  struct RFONT *v5; // r15
  struct RFONT *v6; // rax
  struct RFONT *v7; // rcx
  struct RFONT *v8; // r8
  struct RFONT *v9; // rcx
  struct RFONT *v10; // rcx
  unsigned int i; // edx
  struct RFONT *v12; // rcx
  struct RFONT *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  _QWORD *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // edx
  struct RFONT *v23; // rcx
  struct RFONT **v24; // r8
  _QWORD *v25; // rax
  __int64 result; // rax
  struct RFONT *v27; // rax
  struct RFONT *j; // rcx
  __int64 v29; // r9
  __int64 v30; // rcx
  struct RFONT *v31; // r10
  __int64 v32; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v33[2]; // [rsp+30h] [rbp-58h] BYREF
  struct RFONT *v34; // [rsp+90h] [rbp+8h] BYREF
  struct RFONT *v35; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this || !*((_DWORD *)*this + 165) )
    return 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  GreAcquireSemaphore(ghsemRFONTList);
  --*((_DWORD *)*this + 165);
  v6 = *this;
  if ( !*((_DWORD *)*this + 165) )
  {
    if ( v2 )
    {
      v7 = (struct RFONT *)*((_QWORD *)v6 + 90);
      v8 = *this;
      if ( v7 )
      {
        *v2++ = v7;
        *((_QWORD *)*this + 90) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v9 = (struct RFONT *)*((_QWORD *)v6 + 91);
      v4 = 1;
      if ( v9 )
      {
        *v2++ = v9;
        *((_QWORD *)*this + 91) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v10 = (struct RFONT *)*((_QWORD *)v6 + 92);
      if ( v10 )
      {
        *v2++ = v10;
        *((_QWORD *)*this + 92) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      for ( i = 0; i < *((_DWORD *)v6 + 210); v8 = v6 )
      {
        v29 = 8LL * i;
        v30 = *((_QWORD *)v6 + 93);
        v6 = v8;
        v31 = *(struct RFONT **)(v29 + v30);
        if ( v31 )
        {
          *v2++ = v31;
          *(_QWORD *)(v29 + *((_QWORD *)*this + 93)) = 0LL;
          v6 = *this;
        }
        ++i;
      }
      v12 = (struct RFONT *)*((_QWORD *)v6 + 93);
      v13 = v6;
      if ( v12 && v12 != (struct RFONT *)((char *)v6 + 752) )
      {
        Win32FreePool(v12);
        v13 = *this;
      }
      *((_QWORD *)v13 + 93) = 0LL;
      *((_DWORD *)*this + 210) = 0;
      *((_DWORD *)*this + 208) = 0;
      v6 = *this;
    }
    v14 = *((_QWORD *)v6 + 13);
    v36 = v14;
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 3496) + 1512LL);
    else
      v15 = *(_QWORD *)(v14 + 1512);
    v16 = *((_QWORD *)v6 + 83);
    v17 = *((_QWORD *)v6 + 84);
    v18 = v16 + 664;
    if ( !v16 )
      v18 = 0LL;
    v19 = (_QWORD *)(v17 + 664);
    if ( !v17 )
      v19 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)(v18 + 8) = v17;
      if ( v19 )
        *v19 = *((_QWORD *)v6 + 83);
    }
    else
    {
      v15 = *((_QWORD *)v6 + 84);
      if ( v19 )
        *v19 = 0LL;
    }
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v14 + 3496) + 1512LL) = v15;
    else
      *(_QWORD *)(v14 + 1512) = v15;
    v20 = *((_QWORD *)*this + 16);
    if ( *(_DWORD *)(v20 + 56) || *(_DWORD *)(v20 + 60) || *(_QWORD *)(v20 + 144) )
    {
      if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
        v21 = *(_DWORD *)(*(_QWORD *)(v14 + 3496) + 1528LL);
      else
        v21 = *(_DWORD *)(v14 + 1528);
      if ( v21 >= 0x80 )
      {
        v27 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v36);
        for ( j = v27; v27; v27 = (struct RFONT *)*((_QWORD *)v27 + 84) )
          v5 = v27;
        v35 = j;
        v34 = v5;
        RFONTOBJ::vRemove(&v34, &v35, 1LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v36, v35);
        v34 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
      }
      else if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      {
        ++*(_DWORD *)(*(_QWORD *)(v14 + 3496) + 1528LL);
      }
      else
      {
        ++*(_DWORD *)(v14 + 1528);
      }
      v22 = *(_DWORD *)(v14 + 40);
      if ( (v22 & 0x800000) != 0 )
        v23 = *(struct RFONT **)(*(_QWORD *)(v14 + 3496) + 1520LL);
      else
        v23 = *(struct RFONT **)(v14 + 1520);
      v24 = (struct RFONT **)((char *)v23 + 664);
      if ( !v23 )
        v24 = 0LL;
      v25 = (_QWORD *)((char *)*this + 664);
      if ( *this != (struct RFONT *)-664LL )
      {
        *v25 = 0LL;
        v25[1] = v23;
        if ( v24 )
          *v24 = *this;
        v23 = *this;
        v22 = *(_DWORD *)(v14 + 40);
      }
      if ( (v22 & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v14 + 3496) + 1520LL) = v23;
      else
        *(_QWORD *)(v14 + 1520) = v23;
    }
    else
    {
      v5 = *this;
    }
  }
  if ( ghsemRFONTList )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
    GreReleaseSemaphoreInternal(ghsemRFONTList);
  }
  if ( v2 && !v4 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v5 )
  {
    v32 = *((_QWORD *)v5 + 16);
    v34 = v5;
    memset(v33, 0, sizeof(v33));
    PushThreadGuardedObject(v33, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v34, 0LL, (struct PFFOBJ *)&v32, 1);
    PopThreadGuardedObject(v33);
    v34 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
  }
  result = v4;
  *this = 0LL;
  return result;
}
