/*
 * XREFs of sub_180009ED0 @ 0x180009ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B850 @ 0x18000B850 (sub_18000B850.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_180065874 @ 0x180065874 (sub_180065874.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800DC664 @ 0x1800DC664 (sub_1800DC664.c)
 */

__int64 __fastcall sub_180009ED0(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  __int64 v7; // rdi
  unsigned __int64 CurrentThreadId; // rbx
  __int64 v9; // rcx
  signed __int64 *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rax
  std::_Ref_count_base *v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r14
  WINBOOL v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  _WORD *v26; // rax
  __int64 v27; // rcx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v37; // rax
  signed __int64 v38; // rdx
  signed __int64 v39; // rax
  int v40; // [rsp+28h] [rbp-E0h]
  unsigned __int16 **v41; // [rsp+30h] [rbp-D8h]
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v47; // [rsp+60h] [rbp-A8h]
  _QWORD v48[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v49[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+90h] [rbp-78h]
  DWORD v51; // [rsp+98h] [rbp-70h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  __int64 v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v55[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v57; // [rsp+C8h] [rbp-40h]
  unsigned __int16 *v58; // [rsp+D8h] [rbp-30h] BYREF
  int v59; // [rsp+E0h] [rbp-28h]
  int v60; // [rsp+E4h] [rbp-24h]
  void *v61; // [rsp+E8h] [rbp-20h]
  int v62; // [rsp+F0h] [rbp-18h]
  int v63; // [rsp+F4h] [rbp-14h]
  __int64 *v64; // [rsp+F8h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp-8h]
  _WORD *v66; // [rsp+108h] [rbp+0h]
  int v67; // [rsp+110h] [rbp+8h]
  int v68; // [rsp+114h] [rbp+Ch]
  WINBOOL *v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  void *retaddr; // [rsp+160h] [rbp+58h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v7 = qword_18019E3A0;
  v48[0] = off_1801464F8;
  LOBYTE(v42) = 0;
  v48[1] = &v42;
  v49[1] = v48;
  v48[2] = a1;
  v49[0] = 0LL;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  if ( !qword_18019E3A0 )
    goto LABEL_48;
  CurrentThreadId = GetCurrentThreadId();
  v9 = *(_QWORD *)(v7 + 8 * (CurrentThreadId % 0xA));
  v10 = (signed __int64 *)(v7 + 8 * (CurrentThreadId % 0xA));
  if ( !v9 )
  {
LABEL_44:
    v37 = sub_180065874(0, 0x18uLL);
    v38 = v37;
    if ( v37 )
    {
      v11 = (__int64 *)(v37 + 16);
      *(_DWORD *)v37 = CurrentThreadId;
      *(_QWORD *)(v37 + 16) = 0LL;
      *(_QWORD *)(v37 + 8) = 0LL;
      _m_prefetchw(v10);
      do
      {
        v39 = *v10;
        *(_QWORD *)(v38 + 8) = *v10;
      }
      while ( v39 != _InterlockedCompareExchange64(v10, v38, v39) );
      goto LABEL_5;
    }
LABEL_48:
    v11 = 0LL;
    goto LABEL_5;
  }
  while ( *(_DWORD *)v9 != (_DWORD)CurrentThreadId )
  {
    v9 = *(_QWORD *)(v9 + 8);
    if ( !v9 )
      goto LABEL_44;
  }
  v11 = (__int64 *)(v9 + 16);
LABEL_5:
  v49[0] = v11;
  if ( v11 )
  {
    v50 = *v11;
    *v11 = (__int64)v49;
    v51 = GetCurrentThreadId();
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    v12 = *(_QWORD *)(a1 + 168);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 192);
      if ( *(_BYTE *)(v13 + 432) )
      {
        v15 = -2005139336;
      }
      else if ( a2 == *(_QWORD *)(v13 + 56) )
      {
        if ( a3 )
        {
          v15 = -2147418113;
          sub_18004BD84(retaddr, 1927LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147549183LL);
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 344LL))(v12, v13, 0LL);
          v15 = v14;
          if ( v14 < 0 )
          {
            sub_18004BD84(retaddr, 1930LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v14);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 188) )
            {
              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
                && *((_BYTE *)off_18019C348 + 25) >= 4u )
              {
                sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 35LL, &unk_18015E3E8);
              }
              goto LABEL_32;
            }
            v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 296LL))(
                    *(_QWORD *)(a1 + 168),
                    *(_QWORD *)(a1 + 192));
            v15 = v16;
            if ( v16 >= 0 )
            {
              *(_BYTE *)(a1 + 188) = 1;
              *(_BYTE *)(a1 + 200) = 0;
              if ( !*(_QWORD *)(a1 + 456) )
              {
                sub_18000B850(qword_18019EF88, &v46, a1);
                v17 = v46;
                v18 = v47;
                v19 = *(std::_Ref_count_base **)(a1 + 464);
                v46 = 0LL;
                v47 = 0LL;
                v53 = v17;
                *(_QWORD *)(a1 + 456) = v17;
                v57 = v18;
                *(_QWORD *)(a1 + 464) = v18;
                if ( v19 )
                {
                  sub_180052600(v19);
                  if ( v47 )
                    sub_180052600(v47);
                }
              }
              v20 = *(_QWORD *)(a1 + 192) + 8LL;
              v43 = 0LL;
              if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v43) >= 0 )
              {
                Context = 0LL;
                if ( InitOnceBeginInitialize(&InitOnce, 0, fPending, &Context) && fPending[0] )
                {
                  Context = &qword_18019E828;
                  qword_18019E828 = (__int64)off_1801462A0;
                  qword_18019E840 = (__int64)&unk_18019C388;
                  atexit(sub_1800B6240);
                  sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
                  InitOnceComplete(&InitOnce, 0, &qword_18019E828);
                }
                v21 = *((_QWORD *)Context + 1);
                if ( *(_DWORD *)v21 > 4u )
                {
                  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
                  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
                  v24 = *(_QWORD *)(a1 + 168);
                  v25 = v23;
                  fPending[1] = v22;
                  v26 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
                  v54 = v25;
                  v69 = &fPending[1];
                  v70 = 4LL;
                  if ( v26 )
                  {
                    v27 = -1LL;
                    while ( v26[++v27] != 0 )
                      ;
                    v29 = 2 * v27 + 2;
                  }
                  else
                  {
                    v26 = &unk_18015C744;
                    v29 = 2;
                  }
                  v66 = v26;
                  v67 = v29;
                  v64 = &v54;
                  v55[1] = 4;
                  v58 = *(unsigned __int16 **)(v21 + 8);
                  v68 = 0;
                  v65 = 8LL;
                  v55[0] = 184549376;
                  v56 = 0LL;
                  v59 = *v58;
                  v61 = &unk_18016752E;
                  v60 = 2;
                  v30 = *(_QWORD *)(v21 + 32);
                  v62 = 62;
                  v63 = 1;
                  LODWORD(v53) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
                  v41 = &v58;
                  v40 = 5;
                  EtwEventWriteTransfer(v30, v55, 0LL);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 48LL))(v43);
                IsTSSessionIdRegisterVolumeTrackerForSessionSupported(v32, v31, v33);
              }
              if ( QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 504)) )
                *(_QWORD *)(a1 + 512) = *(_QWORD *)(a1 + 504);
              if ( v43 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
LABEL_32:
              v15 = 0;
              goto LABEL_33;
            }
            sub_18004BD84(retaddr, 1934LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v16);
          }
        }
      }
      else
      {
        v15 = -2147024809;
        sub_18004BD84(retaddr, 4863LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
        sub_18004BD84(retaddr, 1924LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
      }
    }
    else
    {
      v15 = -2004287487;
      sub_18004BD84(retaddr, 1923LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2290679809LL);
    }
  }
  else
  {
    v15 = -2004287487;
    sub_18004BD84(retaddr, 1922LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2290679809LL);
  }
LABEL_33:
  if ( v51 )
  {
    if ( v51 != GetCurrentThreadId() )
      sub_1800DC664(
        retaddr,
        944LL,
        "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        2147943068LL,
        v40,
        v41,
        v42);
    v34 = (_QWORD *)v49[0];
    v51 = 0;
    v35 = *(_QWORD **)v49[0];
    if ( *(_QWORD *)v49[0] )
    {
      while ( v35 != v49 )
      {
        v34 = v35 + 2;
        v49[0] = v35 + 2;
        v35 = (_QWORD *)v35[2];
        if ( !v35 )
          goto LABEL_39;
      }
      *v34 = v50;
    }
LABEL_39:
    v49[0] = 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v15;
}
