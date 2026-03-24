/*
 * XREFs of xxxSendMessageCallback @ 0x1C0040544
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C003E18C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00403E0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F5668 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F2E90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059E70 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     SfnDWORD @ 0x1C006B320 (SfnDWORD.c)
 *     xxxBroadcastMessage @ 0x1C0134A58 (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        unsigned __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        void (__fastcall *BugCheckParameter3)(unsigned __int64 *, _QWORD, __int64, __int64),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 *v12; // rbx
  int v13; // esi
  ULONG_PTR v14; // r9
  unsigned __int64 v15; // rax
  __int64 *v16; // rcx
  int v18; // eax
  unsigned __int64 v19; // rcx
  BOOL v20; // ecx
  _DWORD *v21; // rcx
  unsigned int *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  BOOL v26; // ecx
  __int64 v27; // [rsp+58h] [rbp-70h] BYREF
  __int64 v28[2]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v29; // [rsp+70h] [rbp-58h]
  __int128 v30; // [rsp+80h] [rbp-48h]
  int v31; // [rsp+D8h] [rbp+10h]
  int v32; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v33; // [rsp+E0h] [rbp+18h]

  v33 = a3;
  v9 = a4;
  v10 = a2;
  v12 = 0LL;
  v27 = 0LL;
  v13 = 1;
  if ( BugCheckParameter3 || (v31 = 1, a6 != 1) )
    v31 = 0;
  if ( a2 >= 0x400 )
  {
    v18 = 0;
  }
  else
  {
    if ( (MessageTable[a2] & 0x200) == 0 && (a2 != 537 || (a3 & 0x8000) == 0) )
      goto LABEL_7;
    v18 = 1;
  }
  if ( v18 )
  {
    UserSetLastError(1159LL);
    return 0LL;
  }
LABEL_7:
  if ( a1 == (unsigned __int64 *)-1LL )
  {
    *(_OWORD *)v28 = 0LL;
    *(_QWORD *)&v29 = 0LL;
    if ( BugCheckParameter3 )
    {
      v13 = 3;
      v28[0] = (__int64)BugCheckParameter3;
      v28[1] = a6;
      LODWORD(v29) = a7;
      v12 = v28;
    }
    return xxxBroadcastMessage(0, a2, a3, a4, v13, (__int64)v12, a8);
  }
  else
  {
    v14 = 0LL;
    LOWORD(v15) = 0;
    if ( a1 )
      v15 = *a1;
    if ( (unsigned __int64)(unsigned __int16)v15 >= *(_QWORD *)(gpsi + 8LL)
      || (v14 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v15 * LODWORD(gSharedInfo[2]),
          *(unsigned __int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)v15) != a1)
      || *(_BYTE *)(v14 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v14, 1uLL);
    }
    if ( !v31 && gptiCurrent == a1[2] )
    {
      if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x20) != 0 )
      {
        v20 = a2 < 0x400 && ((unsigned __int16)MessageTable[a2] >> 14) & 1;
        if ( !v20 || (*(_BYTE *)(a1[5] + 18) & 4) == 0 )
        {
          *((_QWORD *)&v29 + 1) = *a1;
          LODWORD(v29) = a2;
          v28[1] = a3;
          v28[0] = v9;
          *(_QWORD *)&v30 = 0LL;
          xxxCallHook(0, 0LL, (__int64)v28, 4);
          a3 = v33;
          v9 = a4;
        }
      }
      v19 = a1[5];
      if ( (*(_BYTE *)(v19 + 18) & 4) != 0 )
      {
        v25 = *(_QWORD *)(v19 + 120);
        if ( v25 >= 7 )
          return 0LL;
        v27 = ((__int64 (__fastcall *)(unsigned __int64 *, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v25])(
                a1,
                (unsigned int)v10,
                a3,
                v9);
      }
      else
      {
        xxxSendMessageToClient((struct tagWND *)a1, v10, a3, v9, 0LL, 0, &v27);
      }
      if ( BugCheckParameter3 )
      {
        if ( a7 )
        {
          v21 = *(_DWORD **)(gptiCurrent + 448LL);
          v32 = *v21 & 8;
          *v21 |= 4u;
          **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
          if ( (_DWORD)v10 == 576 || (_DWORD)v10 == 281 )
            ((void (__fastcall *)(unsigned __int64 *, _QWORD, __int64, __int64, void (__fastcall *)(unsigned __int64 *, _QWORD, __int64, __int64), _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v10]])(
              a1,
              (unsigned int)v10,
              a6,
              v27,
              BugCheckParameter3,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
          else
            SfnDWORD((_DWORD)a1, v10, a6, v27, (__int64)BugCheckParameter3, *(_QWORD *)(gpsi + 752LL));
          **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
          v22 = *(unsigned int **)(gptiCurrent + 448LL);
          v23 = *v22;
          if ( v32 )
            v24 = v23 | 8;
          else
            v24 = v23 & 0xFFFFFFF7;
          *v22 = v24;
        }
        else
        {
          BugCheckParameter3(a1, (unsigned int)v10, a6, v27);
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x2000) != 0 )
      {
        v26 = (unsigned int)v10 < 0x400 && ((unsigned __int16)MessageTable[v10] >> 14) & 1;
        if ( !v26 || (*(_BYTE *)(a1[5] + 18) & 4) == 0 )
        {
          v30 = *a1;
          DWORD2(v29) = v10;
          *(_QWORD *)&v29 = v33;
          v28[1] = a4;
          v28[0] = v27;
          xxxCallHook(0, 0LL, (__int64)v28, 12);
        }
      }
      return 1LL;
    }
    else
    {
      *(_OWORD *)v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v16 = 0LL;
      if ( BugCheckParameter3 )
      {
        LODWORD(v28[0]) = a7 != 0 ? 257 : 1;
        v28[1] = (__int64)BugCheckParameter3;
        *(_QWORD *)&v29 = a6;
        v16 = v28;
      }
      return xxxInterSendMsgEx(a1, a2, a3, v9, 0, a1[2], v16, a8, a9);
    }
  }
}
