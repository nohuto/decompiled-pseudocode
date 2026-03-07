char __fastcall IopLiveDumpCallRemovePagesCallbacks(_DWORD *a1)
{
  _DWORD *v1; // r13
  ULONG v2; // edi
  __int64 *v3; // rsi
  bool IsTracingEnabled; // r12
  __int64 v5; // r14
  __int64 *v6; // rax
  void *v7; // rcx
  bool v8; // r13
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  char *v12; // rdx
  int v13; // eax
  size_t pcbLength; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-C8h]
  _DWORD *v17; // [rsp+48h] [rbp-C0h]
  __int128 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A8h]
  _QWORD v20[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h]
  _DWORD *v22; // [rsp+88h] [rbp-80h]
  __int128 v23; // [rsp+90h] [rbp-78h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-58h]
  __int128 v26; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-38h] BYREF

  v1 = a1;
  v17 = a1;
  v22 = a1;
  v18 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v2 = 1;
  pcbLength = 1LL;
  v3 = qword_140A8EEA0;
  v16 = qword_140A8EEA0;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  if ( IsTracingEnabled )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START, 0LL, 0, 0LL);
  v5 = KeBugCheckAddRemovePagesCallbackListHead;
  v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  v20[0] = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v20[1] = v5;
    if ( (__int64 *)v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v21 = v5;
    LOBYTE(v6) = KeValidateBugCheckCallbackRecord(v5, 6, v20);
    if ( (_BYTE)v6 )
    {
      if ( IsTracingEnabled )
      {
        v7 = *(void **)(v5 + 24);
        if ( v7 && MmIsAddressValid(v7) && RtlStringCbLengthA(*(STRSAFE_PCNZCH *)(v5 + 24), 0x101uLL, &pcbLength) >= 0 )
        {
          v3 = *(__int64 **)(v5 + 24);
          v2 = ++pcbLength;
        }
        else
        {
          pcbLength = 1LL;
          v2 = 1;
          v3 = qword_140A8EEA0;
        }
        v16 = v3;
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(
          IopLiveDumpEtwRegHandle,
          &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_START,
          0LL,
          1u,
          &UserData);
      }
      *(_QWORD *)&v18 = 0LL;
      HIDWORD(v18) = *v1;
      do
      {
        v19 = 0uLL;
        DWORD2(v18) = 0;
        v8 = 0;
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(v21 + 16))(6LL, v21, &v18);
        if ( *((_QWORD *)&v19 + 1) )
        {
          v9 = DWORD2(v18);
          if ( (DWORD2(v18) & 0x80000003) != 0 )
          {
            v10 = DWORD2(v18) & 0x80000000;
            if ( SDWORD2(v18) < 0 )
            {
              v9 = DWORD2(v18) & 0x7FFFFFFF;
              DWORD2(v18) &= ~0x80000000;
            }
            v8 = v10 != 0;
            if ( ((v9 - 1) & v9) != 0 )
            {
              v13 = -1073741811;
            }
            else
            {
              v11 = v9 & 1;
              v12 = (char *)v19;
              if ( !v11 )
                v12 = (char *)((unsigned __int64)v19 >> 12);
              v23 = *((_OWORD *)v17 + 36);
              *(_QWORD *)&v25 = &v23;
              v13 = IoFreeDumpRange((__int64)&v24, v12, *((__int64 *)&v19 + 1), 2 * (v11 ^ 1u));
            }
            if ( v13 < 0 )
            {
              v8 = 0;
              IopLiveDumpTraceRemovePagesCallbackFailure((__int64)v3, v2, v13);
            }
          }
        }
      }
      while ( v8 );
      if ( IsTracingEnabled )
      {
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_END, 0LL, 1u, &UserData);
      }
      v1 = v17;
    }
    else if ( !v20[0] )
    {
      break;
    }
    v5 = *(_QWORD *)v5;
    v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  }
  if ( IsTracingEnabled )
    LOBYTE(v6) = EtwWrite(
                   IopLiveDumpEtwRegHandle,
                   &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END,
                   0LL,
                   0,
                   0LL);
  return (char)v6;
}
