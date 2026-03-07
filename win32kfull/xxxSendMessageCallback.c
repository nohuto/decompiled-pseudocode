__int64 __fastcall xxxSendMessageCallback(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        void (__fastcall *a5)(struct tagTHREADINFO **, _QWORD, __int64, __int64),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v11; // rsi
  unsigned int v13; // edi
  ULONG_PTR v15; // r9
  struct tagTHREADINFO *v16; // rax
  __int64 *v17; // rcx
  BOOL v19; // ecx
  struct tagTHREADINFO *v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  int *v24; // rcx
  int v25; // eax
  unsigned int *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  BOOL v29; // ecx
  __int64 v30; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-D0h]
  struct tagTHREADINFO *v32; // [rsp+60h] [rbp-C8h]
  __int64 v33[2]; // [rsp+68h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+78h] [rbp-B0h]
  __int128 v35; // [rsp+88h] [rbp-A0h]
  int v36; // [rsp+98h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-80h]
  _BYTE v39[56]; // [rsp+B0h] [rbp-78h] BYREF

  v31 = (__int64)a4;
  v11 = a2;
  BugCheckParameter2 = (ULONG_PTR)a1;
  v30 = 0LL;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v13 = 1;
  if ( a2 < 0x400 && (_bittest16(&MessageTable[a2], 9u) || a2 == 537 && (a3 & 0x8000) != 0) )
  {
    UserSetLastError(1159);
    return 0LL;
  }
  if ( a1 != (struct tagTHREADINFO **)-1LL )
  {
    v15 = 0LL;
    BugCheckParameter3 = 0LL;
    if ( a1 )
      v16 = *a1;
    else
      v16 = 0LL;
    v32 = v16;
    v36 = (unsigned __int16)v16;
    if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL)
      || (v15 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v16,
          *(struct tagTHREADINFO ***)(gpKernelHandleTable + 24LL * (unsigned __int16)v16) != a1)
      || *(_BYTE *)(v15 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v15, 1uLL);
    }
    if ( __PAIR128__(a6, (unsigned __int64)a5) == __PAIR128__(1LL, 0LL) || (struct tagTHREADINFO *)gptiCurrent != a1[2] )
    {
      v17 = 0LL;
      if ( a5 )
      {
        LODWORD(v33[0]) = a7 != 0 ? 257 : 1;
        v33[1] = (__int64)a5;
        *(_QWORD *)&v34 = a6;
        v17 = v33;
      }
      return xxxInterSendMsgEx((struct tagWND *)a1, a2, a3, a4, 0, a1[2], (__int64)v17, a8, a9);
    }
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v39);
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x20) != 0 )
    {
      v19 = (unsigned int)v11 < 0x400 && ((unsigned __int16)MessageTable[v11] >> 14) & 1;
      if ( !v19 || (*((_BYTE *)a1[5] + 18) & 4) == 0 )
      {
        *((_QWORD *)&v34 + 1) = *a1;
        LODWORD(v34) = v11;
        v33[1] = a3;
        v33[0] = v31;
        *(_QWORD *)&v35 = 0LL;
        xxxCallHook(0, 0LL, (__int64)v33, 4);
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v39);
    FreeDelayedHooks();
    v20 = a1[5];
    if ( (*((_BYTE *)v20 + 18) & 4) == 0 )
    {
      xxxSendMessageToClient((struct tagWND *)a1, v11, a3, v31, 0LL, 0, &v30);
      v21 = v30;
LABEL_25:
      if ( a5 )
      {
        if ( a7 )
        {
          v24 = *(int **)(gptiCurrent + 448LL);
          v25 = *v24;
          LODWORD(v32) = *v24 & 8;
          *v24 = v25 | 4;
          **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
          if ( (_DWORD)v11 == 576 || (_DWORD)v11 == 281 )
            ((void (__fastcall *)(struct tagTHREADINFO **, _QWORD, __int64, __int64, void (__fastcall *)(struct tagTHREADINFO **, _QWORD, __int64, __int64), _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v11]])(
              a1,
              (unsigned int)v11,
              a6,
              v30,
              a5,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
          else
            SfnDWORD((__int64 *)a1, v11, a6, v30, (__int64)a5, *(_QWORD *)(gpsi + 752LL));
          **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
          v26 = *(unsigned int **)(gptiCurrent + 448LL);
          v27 = *v26;
          if ( (_DWORD)v32 )
            v28 = v27 | 8;
          else
            v28 = v27 & 0xFFFFFFF7;
          *v26 = v28;
        }
        else
        {
          a5(a1, (unsigned int)v11, a6, v21);
        }
      }
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v39);
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x2000) != 0 )
      {
        v29 = (unsigned int)v11 < 0x400 && ((unsigned __int16)MessageTable[v11] >> 14) & 1;
        if ( !v29 || (*((_BYTE *)a1[5] + 18) & 4) == 0 )
        {
          v35 = (unsigned __int64)*a1;
          DWORD2(v34) = v11;
          *(_QWORD *)&v34 = a3;
          v33[1] = v31;
          v33[0] = v30;
          xxxCallHook(0, 0LL, (__int64)v33, 12);
        }
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v39);
      FreeDelayedHooks();
      return 1LL;
    }
    v23 = *((_QWORD *)v20 + 15);
    if ( v23 < 7 )
    {
      v21 = ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v23])(
              a1,
              (unsigned int)v11,
              a3,
              v31);
      v30 = v21;
      goto LABEL_25;
    }
    return 0LL;
  }
  v22 = 0LL;
  if ( a5 )
  {
    v13 = 3;
    v33[0] = (__int64)a5;
    v33[1] = a6;
    LODWORD(v34) = a7;
    v22 = v33;
  }
  return xxxBroadcastMessageEx(0LL, a2, a3, (__int128 *)a4, v13, (union tagBROADCASTMSG *)v22, a8, 0);
}
