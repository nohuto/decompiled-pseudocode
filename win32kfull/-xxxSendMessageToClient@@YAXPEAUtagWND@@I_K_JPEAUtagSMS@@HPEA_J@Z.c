void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        HWND a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  HWND v7; // r13
  unsigned int v8; // edi
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // r15
  char v17; // si
  BOOL v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int16 v23; // cx
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdi
  _QWORD *v37; // r13
  __int64 CurrentProcessWow64Process; // rax
  ULONG v39; // r8d
  signed __int32 v40[8]; // [rsp+0h] [rbp-B8h] BYREF
  BOOL v41; // [rsp+30h] [rbp-88h]
  struct tagSMS *v42; // [rsp+38h] [rbp-80h]
  char v43; // [rsp+50h] [rbp-68h]
  BOOL v44; // [rsp+54h] [rbp-64h]
  char *v45; // [rsp+58h] [rbp-60h]
  __int128 v46; // [rsp+68h] [rbp-50h] BYREF
  __int64 v47; // [rsp+78h] [rbp-40h]
  unsigned int v48; // [rsp+C8h] [rbp+10h] BYREF
  HWND v49; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v50; // [rsp+D8h] [rbp+20h] BYREF

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v7 = a3;
  v8 = a2;
  v10 = 1LL;
  v11 = 0LL;
  if ( a2 - 577 <= 3 )
    goto LABEL_37;
  if ( a2 < 0x245 || a2 > 0x257 || (v12 = 1, a2 == 589) )
    v12 = 0;
  if ( v12 )
LABEL_37:
    v13 = 1;
  else
    v13 = 0;
  if ( !v13 || (v14 = 1, a2 == 595) )
    v14 = 0;
  if ( v14 || (a2 != 528 || (_WORD)a3 != 582 ? (v15 = 0) : (v15 = 1), v15) )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v48, &v49, &v50, 0LL) )
      {
        *a7 = 0LL;
        return;
      }
      v7 = v49;
      v8 = v48;
    }
  }
  v16 = (char *)a1 + 40;
  v45 = (char *)a1 + 40;
  v17 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8;
  v43 = v17;
  v18 = v17 != 0;
  v44 = v18;
  if ( (unsigned int)PsGetWin32KFilterSet(v10) == 5 )
  {
    v36 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    v37 = *(_QWORD **)(v36 + 248);
    _InterlockedOr(v40, 0);
    if ( v37 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v35);
      v39 = 4;
      if ( CurrentProcessWow64Process )
        v39 = 1;
      ProbeForRead(v37, 0x20uLL, v39);
      if ( *v37 )
      {
        *(_QWORD *)(v36 + 224) |= 0x100uLL;
        v7 = v49;
        v8 = v48;
LABEL_14:
        if ( (v8 & 0x1FFFF) >= 0x400 )
        {
          v20 = *(_QWORD *)(gpsi + 752LL);
          v21 = *(_QWORD *)(*(_QWORD *)v16 + 120LL);
          v42 = a5;
          v41 = v18;
          v19 = SfnDWORD((__int64 *)a1, v8, (__int64)v7, v50, v21, v20);
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, _QWORD, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v8]])(
                  a1,
                  v8,
                  v7,
                  v50,
                  *(_QWORD *)(*(_QWORD *)v16 + 120LL),
                  *(_QWORD *)(gpsi + 752LL),
                  v18,
                  a5);
        }
LABEL_16:
        *a7 = v19;
        return;
      }
    }
    v7 = v49;
    v8 = v48;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_14;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_14;
  if ( v8 == 90 )
    goto LABEL_14;
  v22 = *(_QWORD *)v16;
  v23 = *(_WORD *)(*(_QWORD *)v16 + 42LL) & 0x2FFF;
  if ( (unsigned __int16)(v23 - 673) > 9u )
    goto LABEL_14;
  v24 = v23;
  v25 = v23 - 666LL;
  v26 = *(_QWORD *)(v22 + 120);
  if ( v26 != *(_QWORD *)(gpsi + 8 * v25 + 584) && v26 != *(_QWORD *)(gpsi + 8 * v25 + 392) )
    goto LABEL_14;
  v27 = 2 * v25;
  v28 = *((_QWORD *)&gSharedInfo + v27 + 6);
  if ( !v28
    || v8 <= *((_DWORD *)&gSharedInfo + 2 * v27 + 10)
    && ((unsigned __int8)(1 << (v8 & 7)) & *(_BYTE *)(((unsigned __int64)v8 >> 3) + v28)) != 0
    || (*(_BYTE *)(v22 + 18) & 1) != 0 )
  {
    LOBYTE(v11) = v17 != 0;
    v29 = gpsi + 8 * v24;
    if ( (v8 & 0x1FFFF) >= 0x400 )
    {
      v42 = a5;
      v41 = v18;
      v19 = SfnDWORD((__int64 *)a1, v8, (__int64)v7, v50, v11, *(_QWORD *)(v29 - 4608));
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v8]])(
              a1,
              v8,
              v7,
              v50,
              v11,
              *(_QWORD *)(v29 - 4608),
              v18,
              a5);
    }
    goto LABEL_16;
  }
  v46 = 0LL;
  v47 = 0LL;
  v30 = a6;
  if ( a6 )
    ThreadLock(a1, &v46);
  v31 = xxxDefWindowProc(a1, v8, v7, v50);
  v34 = a7;
  *a7 = v31;
  if ( v30 )
    ThreadUnlock1(v34, v32, v33);
}
