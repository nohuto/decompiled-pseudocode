/*
 * XREFs of sub_18002E0E0 @ 0x18002E0E0
 * Callers:
 *     sub_18002E060 @ 0x18002E060 (sub_18002E060.c)
 *     sub_1800C91E0 @ 0x1800C91E0 (sub_1800C91E0.c)
 * Callees:
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CB200 @ 0x1800CB200 (sub_1800CB200.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002E0E0(__int64 a1, int a2)
{
  int v4; // esi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r10
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  int v14; // [rsp+34h] [rbp-65h] BYREF
  int v15; // [rsp+38h] [rbp-61h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  int v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+74h] [rbp-25h]
  unsigned __int16 *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  void *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  _WORD *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]
  int *v33; // [rsp+B0h] [rbp+17h]
  __int64 v34; // [rsp+B8h] [rbp+1Fh]
  int *v35; // [rsp+C0h] [rbp+27h]
  __int64 v36; // [rsp+C8h] [rbp+2Fh]

  v4 = *(_DWORD *)(a1 + 408);
  v5 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB200(*((_QWORD *)off_18019C348 + 2), 65, (unsigned int)&unk_18015DEF0, *(_QWORD *)(a1 + 728), v4, a2);
    v5 = off_18019C348;
  }
  if ( v4 )
  {
    if ( v4 == 1 && !a2 )
    {
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 420));
      *(_QWORD *)(a1 + 392) = GetTickCount64();
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 67LL, &unk_18015DEF0, *(_QWORD *)(a1 + 728));
      }
      *(_BYTE *)(a1 + 976) = 0;
      v12 = -10000LL * *(unsigned int *)(a1 + 312);
      v16[0] = -10000 * *(_DWORD *)(a1 + 312);
      v16[1] = HIDWORD(v12);
      (*(void (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, int))(*(_QWORD *)qword_18019E640 + 24LL))(
        qword_18019E640,
        *(_QWORD *)(a1 + 600),
        v16,
        0LL,
        100);
    }
  }
  else if ( a2 == 1 )
  {
    if ( *(_QWORD *)(a1 + 600) )
    {
      v6 = *(_QWORD *)(a1 + 600);
      if ( v5 != &off_18019C348 && (*((_BYTE *)v5 + 28) & 0x40) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      {
        sub_1800BD7DC(v5[2], 72LL, &unk_18015DEF0, a1);
        v6 = *(_QWORD *)(a1 + 600);
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)qword_18019E640 + 24LL))(
        qword_18019E640,
        v6,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019E640 + 32LL))(
        qword_18019E640,
        *(_QWORD *)(a1 + 600),
        1LL);
    }
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 412));
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 66LL, &unk_18015DEF0, *(_QWORD *)(a1 + 728));
    }
    *(_BYTE *)(a1 + 976) = 1;
  }
  *(_DWORD *)(a1 + 408) = a2;
  if ( a2 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 304);
    if ( (v11 & 0x200000) != 0 )
      *(_DWORD *)(a1 + 304) = v11 & 0xFFDFFFFF;
  }
  if ( v4 != a2 )
  {
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
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 4u )
    {
      v14 = a2;
      v15 = v4;
      v8 = *(_WORD **)(a1 + 728);
      v35 = &v14;
      v36 = 4LL;
      v33 = &v15;
      v34 = 4LL;
      if ( v8 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v10 = 2 * v9 + 2;
      }
      else
      {
        v8 = &unk_18015C744;
        v10 = 2;
      }
      v30 = v8;
      v31 = v10;
      v32 = 0;
      v18[0] = 184549376;
      v18[1] = 4;
      v19 = 0LL;
      v24 = *(unsigned __int16 **)(v7 + 8);
      v25 = *v24;
      v26 = 2;
      v27 = &unk_180166A3C;
      v28 = 67;
      v29 = 1;
      v16[0] = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
      EtwEventWriteTransfer(*(_QWORD *)(v7 + 32), v18, 0LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v20 = off_180154BD8;
    v21 = a1;
    v22 = v4;
    v23 = a2;
    sub_18002E440((LPCRITICAL_SECTION)(a1 + 496));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
}
