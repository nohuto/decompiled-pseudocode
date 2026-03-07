struct tagQMSG *__fastcall DeferMessagesOnQueue(struct tagMLIST *a1, struct tagQMSG *a2)
{
  int v2; // esi
  __int64 v4; // rax
  struct tagQMSG **v5; // rax
  struct tagQMSG *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+28h] [rbp-50h]
  char v15; // [rsp+40h] [rbp-38h]
  char v16; // [rsp+48h] [rbp-30h]

  v2 = 0;
  if ( a2 )
  {
    do
    {
      v4 = *((_QWORD *)a2 + 13);
      if ( !v4 || (*(_DWORD *)(v4 + 488) & 0x10000) == 0 )
        break;
      v5 = (struct tagQMSG **)*((_QWORD *)a2 + 1);
      v6 = *(struct tagQMSG **)a2;
      if ( v5 )
        *v5 = v6;
      else
        *(_QWORD *)a1 = v6;
      v7 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v7;
      else
        *((_QWORD *)a1 + 1) = v7;
      if ( a2 == *((struct tagQMSG **)a1 + 4) )
        *((_QWORD *)a1 + 4) = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
      DeferMessage(a1, a2);
      if ( !(unsigned int)IsHiddenByInputService(v8) )
      {
        ++v2;
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = *(_QWORD *)(v9 + 136);
          v15 = v9;
          LOBYTE(v9) = v11;
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            v11,
            v13,
            v14,
            17,
            (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
            v15,
            v16,
            (char)a1,
            *((_DWORD *)a1 + 5),
            *((_DWORD *)a1 + 4) - v2);
        }
      }
      a2 = v6;
    }
    while ( v6 );
  }
  *((_DWORD *)a1 + 4) -= v2;
  return a2;
}
