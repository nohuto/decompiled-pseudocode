int __fastcall xxxRequestAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  int v3; // edi
  struct tagDDECONV *v4; // r14
  void **v5; // rbx
  char v7; // r13
  void *v8; // r9
  void *v10; // rcx
  __int64 v11; // rsi
  __int16 v12; // r15
  int v13; // ebx
  struct tagINTDDEINFO *v14; // r15
  __int16 v15; // ax
  void *v16; // rdx
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // esi
  unsigned int v21; // esi
  void *v22; // rax
  int v23; // eax
  void *v24; // rdx
  struct tagXSTATE *v25; // rax
  struct tagXSTATE *v26; // rdx
  int v27; // ebx
  struct tagINTDDEINFO *v28; // [rsp+40h] [rbp-10h] BYREF
  void *v29; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v31; // [rsp+98h] [rbp+48h]
  int DDEFlags; // [rsp+A8h] [rbp+58h]

  v31 = a2;
  v3 = 0;
  v4 = a3;
  v28 = 0LL;
  v5 = (void **)a2;
  v29 = 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v8 = &WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      4,
      14,
      40,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  if ( *a1 == 996 )
  {
    v27 = xxxCopyAckIn(a1, v5, v4, &v28);
    if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) == 0 && (v3 = v27, v27 == 2) )
    {
      PopState(v4);
      return 2;
    }
    else
    {
      return v3;
    }
  }
  else
  {
    if ( *a1 != 997 )
      return xxxUnexpectedServerPost(a1, (__int64 *)v5, v4);
    v10 = *v5;
    v11 = *((_QWORD *)v4 + 7);
    v30 = 131;
    DDEFlags = xxxClientGetDDEFlags(v10, 131LL, a3, v8);
    v12 = DDEFlags;
    if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) != 0 || *((_QWORD *)v4 + 7) != v11 )
      return 3;
    if ( (v12 & 0x1000) == 0 )
      return xxxAdviseData(a1, v5, v4);
    v13 = xxxCopyDdeIn(*v5, &v30, &v29, &v28);
    if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) != 0 || *((_QWORD *)v4 + 7) != v11 )
    {
      v13 = 3;
      if ( v28 )
        Win32FreePool(v28);
    }
    else if ( v13 == 2 )
    {
      v14 = v28;
      v15 = *((_WORD *)v28 + 36);
      if ( (v15 & 0xA000) == 0 )
        *((_WORD *)v28 + 36) = v15 | 0x2000;
      if ( (DDEFlags & 0x2000) != 0 )
      {
        if ( IsObjectPublic(*((void **)v14 + 6)) )
        {
          Win32FreePool(v14);
          return 3;
        }
        v17 = GiveObject(
                *((unsigned __int16 *)v14 + 37),
                v16,
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 6) + 16LL) + 424LL) + 56LL));
        v20 = v30;
        if ( v17 )
          v20 = v30 | 0x4000;
        v21 = v20 | 0x400;
      }
      else
      {
        v23 = AddPublicObject(
                *((unsigned __int16 *)v14 + 37),
                *((void **)v14 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 16LL) + 424LL) + 56LL));
        v21 = v30;
        if ( v23 )
          v21 = v30 | 0x2000;
      }
      *a1 |= 0x80000000;
      if ( (DDEFlags & 0x8000) != 0 )
      {
        v22 = AnticipatePost(
                *((struct tagDDECONV **)v4 + 4),
                (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                0LL,
                v29,
                v14,
                v21);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v7 = 0;
        }
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = &WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids;
          LOBYTE(v24) = v7;
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v24,
            v18,
            v19,
            4,
            14,
            41,
            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
        }
        FreeListAdd((PETHREAD **)v4, v29, v21 & 0xFFFFFFFE);
        v25 = Createpxs(0LL, 0LL, 0LL, v14, v21 | 0x200);
        v26 = v25;
        if ( v25 )
        {
          v22 = *(void **)v25;
          *((_QWORD *)v26 + 2) = *(_QWORD *)(*((_QWORD *)v4 + 6) + 16LL);
        }
        else
        {
          v22 = 0LL;
        }
      }
      *v31 = (__int64)v22;
      if ( v22 )
        PopState(v4);
      else
        return 3;
    }
    return v13;
  }
}
