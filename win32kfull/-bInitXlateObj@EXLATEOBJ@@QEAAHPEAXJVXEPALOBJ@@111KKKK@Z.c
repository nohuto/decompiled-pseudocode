__int64 __fastcall EXLATEOBJ::bInitXlateObj(
        Gre::Base *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // r14
  __int64 v13; // rdi
  int v14; // r12d
  _QWORD *v15; // rbp
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  int v21; // esi
  unsigned int v22; // r15d
  struct Gre::Base::SESSION_GLOBALS *v23; // r13
  __int64 v24; // rsi
  unsigned int i; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 result; // rax
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // r9
  _DWORD *v33; // r8
  int v34; // r12d
  int v35; // r11d
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // r10
  __int64 v40; // [rsp+50h] [rbp-68h] BYREF
  __int64 v41; // [rsp+58h] [rbp-60h] BYREF
  __int64 v42[3]; // [rsp+60h] [rbp-58h] BYREF
  Gre::Base *v43; // [rsp+C0h] [rbp+8h]
  __int64 v46; // [rsp+D8h] [rbp+20h] BYREF

  v43 = a1;
  v11 = a7;
  v13 = a5;
  v14 = a3;
  v15 = a1;
  if ( !a4 )
  {
    if ( a5 )
    {
      if ( (*(_DWORD *)(a5 + 24) & 0x800) == 0 || (v37 = *(_QWORD *)(a7 + 80)) != 0 && v37 != *(_QWORD *)(a7 + 72) )
      {
LABEL_8:
        v19 = a2;
        goto LABEL_9;
      }
    }
LABEL_28:
    *v15 = (char *)Gre::Base::Globals(a1) + 6896;
    return 1LL;
  }
  if ( a5 )
  {
    v16 = *(_QWORD *)(a4 + 120);
    if ( v16 == a4 )
      v17 = *(_DWORD *)(a4 + 32);
    else
      v17 = *(_DWORD *)(v16 + 32);
    v18 = *(_QWORD *)(a5 + 120);
    if ( v18 == a5 )
      a1 = (Gre::Base *)*(unsigned int *)(a5 + 32);
    else
      a1 = (Gre::Base *)*(unsigned int *)(v18 + 32);
    if ( v17 != (_DWORD)a1 )
      goto LABEL_8;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a4 + 24) & 0x800) != 0 )
  {
    v36 = *(_QWORD *)(a7 + 80);
    if ( !v36 || v36 == *(_QWORD *)(a7 + 72) )
      goto LABEL_28;
  }
  v19 = a2;
LABEL_9:
  v20 = a6;
  v21 = 1;
  if ( (a3 & 7) != 0 && v19 )
  {
    v21 = 0;
  }
  else if ( a4 && a5 )
  {
    v22 = *(_DWORD *)(a4 + 56);
    v40 = a7;
    v41 = a6;
    v46 = a5;
    v23 = Gre::Base::Globals(a1);
    v24 = *((_QWORD *)v23 + 5);
    v42[0] = v24;
    GreAcquireSemaphore(v24);
    for ( i = 0; i < 8; ++i )
    {
      v26 = *(_QWORD *)(a4 + 120);
      if ( v26 == a4 )
        v27 = *(_DWORD *)(a4 + 32);
      else
        v27 = *(_DWORD *)(v26 + 32);
      if ( *((_DWORD *)v23 + 8 * v22 + 1662) == v27 )
      {
        v29 = XEPALOBJ::ulTime((XEPALOBJ *)&v46);
        if ( *(_DWORD *)(v30 + 6652) == v29 )
        {
          v31 = XEPALOBJ::ulTime((XEPALOBJ *)&v40);
          if ( *(_DWORD *)(v32 + 6660) == v31 )
          {
            v33 = *(_DWORD **)(v32 + 6640);
            *(_QWORD *)v43 = v33;
            v34 = v33[19];
            if ( (v34 & 0x6000) == a11 )
            {
              if ( (v35 = v33[1], (v34 & 0x100) == 0 && (v35 & 4) == 0)
                || (v35 & 4) != 0
                && a10 == v33[6]
                && (v38 = XEPALOBJ::ulTime((XEPALOBJ *)&v41), *((_DWORD *)v23 + 8 * v39 + 1664) == v38)
                || (v34 & 0x100) != 0 && a8 == v33[7] && a9 == v33[8] )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v32 + 6632));
                *(_DWORD *)(a4 + 56) = v22;
                SEMOBJ::vUnlock((SEMOBJ *)v42);
                return 1LL;
              }
            }
          }
        }
      }
      v22 = ((_BYTE)v22 + 1) & 7;
    }
    *(_QWORD *)v43 = 0LL;
    if ( v24 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v24);
    }
    v14 = a3;
    v21 = 1;
  }
  result = CreateXlateObject(a2, v14, a4, v13, v20, v11, a8, a9, a10, a11, v40, v41);
  *(_QWORD *)v43 = result;
  if ( result )
  {
    if ( v21 && a4 && v13 && (*(_DWORD *)(result + 76) & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(v43, a4, v13, v20, v11);
    return 1LL;
  }
  return result;
}
