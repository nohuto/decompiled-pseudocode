/*
 * XREFs of sub_18004F930 @ 0x18004F930
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C66A4 @ 0x1800C66A4 (sub_1800C66A4.c)
 *     sub_1800CA560 @ 0x1800CA560 (sub_1800CA560.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800CB39C @ 0x1800CB39C (sub_1800CB39C.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004F930(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // r9
  int v20; // eax
  void *v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  void *v32; // rax
  const void *v33; // rdx
  unsigned __int64 v34; // rax
  void *v35; // rax
  __int64 v36; // rcx
  const void *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rcx
  void (__fastcall **v43[11])(_QWORD, __int64 *); // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  void *v45; // [rsp+90h] [rbp+8h] BYREF
  void *v46; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v7 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 56LL, &unk_18015DEF0, a1, a2);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 104) )
    goto LABEL_15;
  v10 = 0LL;
  v8 = *(_QWORD *)(a1 + 104);
  if ( !v8 )
    goto LABEL_67;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    v12 = *(_QWORD *)(v11 + 8 * v10);
    if ( v12 == a2 )
      break;
    v9 = (unsigned int)(v9 + 1);
    v10 = (unsigned int)v9;
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_15;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB39C(*((_QWORD *)off_18019C348 + 2), 57LL, v12, v9, *(_QWORD *)(v11 + 8 * v10));
  }
  v13 = *(_QWORD *)(a1 + 104);
  if ( v10 >= v13 )
    goto LABEL_67;
  v14 = *(_QWORD *)(a1 + 96);
  v15 = (__int64 *)(v14 + 8 * v10);
  v7 = *v15;
  v16 = v10 + 1;
  if ( v10 + 1 < v10 || v16 > v13 )
    goto LABEL_67;
  v17 = v13 - v16;
  if ( v17 )
  {
    v33 = (const void *)(v14 + 8 * v16);
    if ( 8 * v17 )
    {
      if ( !v15 || !v33 )
        goto LABEL_96;
      memmove(v15, v33, 8 * v17);
    }
  }
  --*(_QWORD *)(a1 + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v18 = *(_QWORD *)(a1 + 248);
  v8 = *(_QWORD *)(a1 + 256);
  if ( v18 >= v8 )
  {
    v29 = v18 + 1;
    if ( v18 + 1 > v8 )
    {
      v30 = *(int *)(a1 + 264);
      if ( *(_QWORD *)(a1 + 240) )
      {
        if ( !*(_DWORD *)(a1 + 264) )
        {
          v30 = v8 >> 1;
          if ( v29 - v8 > v8 >> 1 )
            v30 = v29 - v8;
        }
        v34 = v30 + v8;
        if ( v29 >= v30 + v8 )
          v34 = v18 + 1;
        v46 = (void *)v34;
        v35 = (void *)o_calloc(v34, 8LL);
        v45 = v35;
        if ( v35 )
        {
          v36 = *(_QWORD *)(a1 + 248);
          v37 = *(const void **)(a1 + 240);
          if ( 8 * v36 )
          {
            if ( !v37 )
            {
              *(_DWORD *)o__errno(v36) = 22;
              o__invalid_parameter_noinfo(v38);
              goto LABEL_67;
            }
            memmove(v35, v37, 8 * v36);
            v37 = *(const void **)(a1 + 240);
          }
          _o_free(v37);
          *(_QWORD *)(a1 + 240) = v45;
          v32 = v46;
          goto LABEL_47;
        }
      }
      else
      {
        if ( v30 > v29 )
          v29 = *(int *)(a1 + 264);
        v45 = (void *)v29;
        v31 = o_calloc(v29, 8LL);
        *(_QWORD *)(a1 + 240) = v31;
        if ( v31 )
        {
          v32 = v45;
LABEL_47:
          *(_QWORD *)(a1 + 256) = v32;
          goto LABEL_13;
        }
      }
      sub_1800B8610(2147942414LL);
    }
  }
LABEL_13:
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v18) = v7;
  ++*(_QWORD *)(a1 + 248);
  if ( a1 != -200 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
LABEL_15:
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v7 )
    goto LABEL_99;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v39 = 0LL;
  if ( *(_QWORD *)(a1 + 176) )
  {
    v40 = 0LL;
    v8 = *(_QWORD *)(a1 + 176);
    if ( !v8 )
      goto LABEL_67;
    while ( 1 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v40);
      if ( v41 == a2 )
        break;
      v39 = (unsigned int)(v39 + 1);
      v40 = (unsigned int)v39;
      if ( (unsigned int)v39 >= v8 )
        goto LABEL_83;
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB39C(*((_QWORD *)off_18019C348 + 2), 58LL, v41, v39, v41);
    }
    if ( v40 >= *(_QWORD *)(a1 + 176) )
      goto LABEL_67;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v40);
    v45 = (void *)v7;
    sub_1800CA560(a1 + 168, v40);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    sub_1800C66A4(a1 + 240, &v45);
    if ( a1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  }
LABEL_83:
  if ( a1 != -128 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  if ( v7 )
  {
LABEL_99:
    if ( *(_BYTE *)(v7 + 224) )
      sub_18013CB58(v8, 0LL, 0LL);
    v19 = (unsigned int)(*(_DWORD *)(a1 + 88) - 1);
    *(_DWORD *)(a1 + 88) = v19;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 59LL, &unk_18015DEF0, v19);
    }
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v43[0] = (void (__fastcall **)(_QWORD, __int64 *))off_180154CC0;
      v43[1] = (void (__fastcall **)(_QWORD, __int64 *))a1;
      v43[2] = (void (__fastcall **)(_QWORD, __int64 *))v7;
      sub_18002E440((LPCRITICAL_SECTION)(a1 + 496), v43);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    }
    if ( *(_DWORD *)(v7 + 132) == 2 )
    {
      sub_1800CB144(v7 + 176);
      sub_1800CB144(v7 + 184);
      sub_1800CB144(v7 + 192);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019EE58 + 32LL))(
            qword_18019EE58,
            *(_QWORD *)(v7 + 64),
            v7 + 8);
    if ( v20 < 0 )
      sub_18006D26C(retaddr, 325LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v20);
    v21 = *(void **)(v7 + 312);
    if ( v21 && !SetEvent(v21) )
    {
      sub_1800B5EF4(retaddr, 2332LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
      __debugbreak();
    }
    *(_QWORD *)(v7 + 72) = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    if ( !*(_QWORD *)(a1 + 248) )
      goto LABEL_37;
    v22 = 0LL;
    v23 = *(_QWORD *)(a1 + 248);
    if ( v23 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(a1 + 240);
        v25 = (_QWORD *)(v24 + 8 * v22);
        if ( *v25 == v7 )
          break;
        v22 = ++v6;
        if ( v6 >= v23 )
          goto LABEL_37;
      }
      v26 = v22 + 1;
      if ( v22 + 1 >= v22 && v26 <= v23 )
      {
        v27 = v23 - v26;
        if ( !v27 )
          goto LABEL_36;
        v16 = v24 + 8 * v26;
        if ( !(8 * v27) )
          goto LABEL_36;
        if ( v25 && v16 )
        {
          memmove(v25, (const void *)v16, 8 * v27);
LABEL_36:
          --*(_QWORD *)(a1 + 248);
LABEL_37:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
          if ( a1 != -200 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(
            qword_18019E640,
            *(_QWORD *)(a1 + 608));
          return 0LL;
        }
LABEL_96:
        *(_DWORD *)o__errno(v16) = 22;
        o__invalid_parameter_noinfo(v42);
        sub_1800B8610(2147942487LL);
      }
    }
LABEL_67:
    sub_1800B8610(2147942487LL);
  }
  return 0LL;
}
