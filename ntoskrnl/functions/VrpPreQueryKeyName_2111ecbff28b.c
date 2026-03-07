__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // r15
  const void **v3; // r14
  __int64 *v4; // rsi
  __int64 *v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 *v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  void *v12; // r13
  _QWORD v14[3]; // [rsp+30h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+60h] [rbp-78h] BYREF
  int *v17; // [rsp+80h] [rbp-58h]
  __int64 v18; // [rsp+88h] [rbp-50h]
  __int64 v19; // [rsp+90h] [rbp-48h]
  int v20; // [rsp+98h] [rbp-40h] BYREF
  int v21; // [rsp+9Ch] [rbp-3Ch]
  _QWORD *v22; // [rsp+A0h] [rbp-38h]
  __int64 v23; // [rsp+A8h] [rbp-30h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = (const void **)(v2 + 24);
  if ( (unsigned int)dword_140C043C0 <= 2 )
  {
    v4 = &EmptyUnicodeString;
  }
  else
  {
    v4 = &EmptyUnicodeString;
    v5 = (__int64 *)(v2 + 16);
    if ( !*v3 )
      v5 = &EmptyUnicodeString;
    v6 = *(unsigned __int16 *)v5;
    v7 = v5[1];
    v17 = &v20;
    v18 = 2LL;
    v19 = v7;
    v20 = v6;
    v21 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)&byte_14003A13F,
      &ActivityId,
      0LL,
      4u,
      v16);
  }
  v14[2] = v2 + 24;
  v8 = (__int64 *)(v2 + 16);
  v14[1] = v8;
  v9 = v8;
  v14[0] = v8;
  v10 = *(unsigned __int16 *)v8 + 18;
  **(_DWORD **)(a1 + 24) = v10;
  if ( *(_DWORD *)(a1 + 16) >= v10 )
  {
    v12 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v12, *v3, *(unsigned __int16 *)v8);
    *((_WORD *)v12 + ((unsigned __int64)*(unsigned __int16 *)v8 >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *(_WORD *)v8;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *(_WORD *)v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v12;
    v11 = -1073740541;
    v9 = (__int64 *)v14[0];
  }
  else
  {
    v11 = -1073741820;
  }
  if ( (unsigned int)dword_140C043C0 > 5 )
  {
    if ( *v3 )
      v4 = v9;
    v17 = &v20;
    v19 = v4[1];
    v20 = *(unsigned __int16 *)v4;
    v22 = v14;
    v18 = 2LL;
    v21 = 0;
    LODWORD(v14[0]) = v11;
    v23 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)byte_14003A051,
      &ActivityId,
      0LL,
      5u,
      v16);
  }
  return v11;
}
