/*
 * XREFs of sub_180011C10 @ 0x180011C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002910 @ 0x180002910 (sub_180002910.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     sub_180012180 @ 0x180012180 (sub_180012180.c)
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800641D4 @ 0x1800641D4 (sub_1800641D4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_18006EB44 @ 0x18006EB44 (sub_18006EB44.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011C10(__int64 a1, const wchar_t *a2, int *a3, _QWORD *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v10; // rbx
  int *v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  int v15; // edi
  BOOL v16; // edx
  __int128 v17; // xmm6
  __int64 v18; // rdx
  bool v19; // di
  void *v20; // rdx
  void *v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  void *v25; // rcx
  void *v26; // rax
  int v27; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v28; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h] BYREF
  int *v30; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID v31; // [rsp+A8h] [rbp-60h] BYREF
  WINBOOL fPending; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+C0h] [rbp-48h] BYREF
  void **p_Src; // [rsp+C8h] [rbp-40h]
  void *v36; // [rsp+D0h] [rbp-38h] BYREF
  char v37; // [rsp+D8h] [rbp-30h]
  LPVOID *v38; // [rsp+E0h] [rbp-28h]
  void *v39; // [rsp+E8h] [rbp-20h] BYREF
  char v40; // [rsp+F0h] [rbp-18h]
  _QWORD pv[2]; // [rsp+F8h] [rbp-10h] BYREF
  DWORD v42; // [rsp+108h] [rbp+0h]
  const wchar_t *v43; // [rsp+110h] [rbp+8h]
  __int64 v44; // [rsp+118h] [rbp+10h]
  char v45; // [rsp+120h] [rbp+18h]
  __int64 v46; // [rsp+124h] [rbp+1Ch]
  _QWORD v47[2]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v48[3]; // [rsp+140h] [rbp+38h] BYREF
  __int16 v49; // [rsp+158h] [rbp+50h]
  _QWORD v50[7]; // [rsp+160h] [rbp+58h] BYREF
  __int128 v51; // [rsp+198h] [rbp+90h] BYREF
  __int128 v52; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v53; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v54[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v55; // [rsp+1D0h] [rbp+C8h]
  int v56; // [rsp+1DCh] [rbp+D4h]
  _BYTE v57[16]; // [rsp+1F0h] [rbp+E8h] BYREF
  __int128 v58; // [rsp+200h] [rbp+F8h]
  __int128 v59; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v60[16]; // [rsp+220h] [rbp+118h] BYREF
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h]
  __int64 v62; // [rsp+288h] [rbp+180h] BYREF

  v62 = a1;
  v30 = a3;
  v58 = *(_OWORD *)a3;
  v59 = *(_OWORD *)a3;
  EtwEventActivityIdControl(4LL, &v59);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v6 = qword_18019E5F0;
  v7 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v44 = v6;
  v42 = CurrentThreadId;
  v43 = L"AudioServerGetMixFormat";
  v45 = 0;
  v46 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v10 = 0LL;
  Src = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  if ( (byte_18019F980 & 0x20) != 0 )
    sub_180002910((__int64)v30, (int)&unk_18015A8A0, a2, v30[12], v30[14], v30[17], v30[13]);
  v11 = v30;
  *a4 = 0LL;
  v27 = sub_180043F70(v11);
  v15 = v27;
  if ( v27 >= 0 )
  {
    v27 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)::pv + 24LL))(
            ::pv,
            a2,
            0LL,
            0LL,
            &v28);
    v15 = v27;
    if ( v27 >= 0 )
    {
      v10 = v28[2];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 56LL))(v28) == 1;
      v27 = sub_18006E5E0(
              v30[12],
              v30[14],
              v30[32],
              (_DWORD)v28,
              v16,
              0,
              v30[13],
              0LL,
              0,
              0,
              0LL,
              (__int64)v57,
              (__int64)&v51,
              0LL,
              0LL);
      v15 = v27;
      if ( v27 >= 0 )
      {
        p_Src = &Src;
        v17 = v51;
        v52 = v51;
        v18 = (unsigned int)v30[13];
        v36 = 0LL;
        v37 = 1;
        v15 = sub_180020090(v28, v18, &v52, &v36);
        v27 = v15;
        if ( v37 )
        {
          v13 = (__int64)p_Src;
          v12 = *p_Src;
          *p_Src = v36;
          if ( v12 )
            CoTaskMemFree(v12);
          v15 = v27;
        }
        if ( v15 >= 0 )
        {
          LOBYTE(v12) = 1;
          v50[0] = &v30;
          v50[1] = &v28;
          v50[2] = &Src;
          v50[3] = &v27;
          v50[4] = v57;
          v50[5] = &v62;
          v48[0] = retaddr;
          v48[1] = "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp";
          v49 = 3835;
          v48[2] = 0LL;
          sub_18006EB44(&unk_18019EDE8, v12);
          v47[0] = off_180154B58;
          v47[1] = v50;
          sub_1800641D4(v54, 16620264LL, v48);
          sub_180012180(v47, v54);
          v13 = v55;
          if ( v55 )
            *(_DWORD *)(v55 + 16) = v56;
          v15 = v27;
          if ( v27 >= 0 )
          {
            v38 = &v31;
            v53 = v17;
            v39 = 0LL;
            v40 = 1;
            v19 = (int)sub_180012550(v28, (unsigned int)v30[13], &v53, &v39) >= 0 && v31;
            if ( v40 )
            {
              v20 = *v38;
              *v38 = v39;
              if ( v20 )
                CoTaskMemFree(v20);
            }
            if ( v19 )
            {
              v25 = Src;
              v26 = v31;
              v31 = 0LL;
              Src = v26;
              if ( v25 )
                CoTaskMemFree(v25);
            }
            v21 = (void *)sub_18006A1B0(*((unsigned __int16 *)Src + 8) + 18LL, &unk_18019F848);
            *a4 = v21;
            if ( v21 )
            {
              memcpy(v21, Src, *((unsigned __int16 *)Src + 8) + 18LL);
              v15 = v27;
            }
            else
            {
              v15 = -2147024882;
              v27 = -2147024882;
            }
          }
        }
      }
    }
  }
  if ( (byte_18019F980 & 0x20) != 0 )
  {
    sub_18000F730(v13, (__int64)"|", v14, 1LL, (__int64)v60);
    v15 = v27;
  }
  if ( v15 < 0 )
  {
    sub_18005E8F8("AudioServerGetMixFormat", 3902LL, (unsigned int)v15);
    v15 = v27;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v28 )
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  v22 = v31;
  v31 = 0LL;
  if ( v22 )
    CoTaskMemFree(v22);
  v23 = Src;
  Src = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  sub_18000F690((__int64)pv, (__int64)v12, v14);
  EtwEventActivityIdControl(4LL, &v59);
  return (unsigned int)v15;
}
