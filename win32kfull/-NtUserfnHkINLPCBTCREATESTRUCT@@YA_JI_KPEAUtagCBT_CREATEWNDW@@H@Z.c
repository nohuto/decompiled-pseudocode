__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(int a1, unsigned __int64 a2, struct tagCBT_CREATEWNDW *a3, int a4)
{
  struct tagCBT_CREATEWNDW *v8; // rcx
  _BYTE *v9; // rcx
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v16; // [rsp+20h] [rbp-A8h]
  __int128 v17; // [rsp+28h] [rbp-A0h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v19; // [rsp+70h] [rbp-58h]
  __int128 v20; // [rsp+80h] [rbp-48h]
  _BYTE v21[16]; // [rsp+90h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+A0h] [rbp-28h] BYREF

  v17 = 0LL;
  memset_0(v18, 0, 0x70uLL);
  v8 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v8 = (struct tagCBT_CREATEWNDW *)MmUserProbeAddress;
  v17 = *(_OWORD *)v8;
  v9 = (_BYTE *)v17;
  if ( (unsigned __int64)v17 >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[79] = v9[79];
  v10 = (_DWORD *)v17;
  v16 = (_DWORD *)v17;
  v18[0] = *(_OWORD *)v17;
  v18[1] = *(_OWORD *)(v17 + 16);
  v18[2] = *(_OWORD *)(v17 + 32);
  v19 = *(_OWORD *)(v17 + 48);
  v20 = *(_OWORD *)(v17 + 64);
  *(_QWORD *)&v17 = v18;
  v11 = *((_QWORD *)&v19 + 1);
  if ( !a4 )
  {
    if ( *((_QWORD *)&v19 + 1) )
    {
      if ( (BYTE8(v19) & 1) != 0 )
        goto LABEL_18;
      v11 = *((_QWORD *)&v19 + 1);
      v10 = v16;
    }
    RtlInitLargeUnicodeString((__int64)v21, v11);
    v13 = v20;
    if ( (v20 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      goto LABEL_21;
    if ( (_QWORD)v20 )
    {
      if ( (v20 & 1) != 0 )
LABEL_18:
        ExRaiseDatatypeMisalignment();
      v13 = v20;
      v10 = v16;
    }
    RtlInitLargeUnicodeString((__int64)v22, v13);
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v19 + 1) )
  {
    v11 = *((_QWORD *)&v19 + 1);
    v10 = v16;
  }
  RtlInitLargeAnsiString((__int64)v21, v11);
  v12 = v20;
  if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (_QWORD)v20 )
    {
      v12 = v20;
      v10 = v16;
    }
    RtlInitLargeAnsiString((__int64)v22, v12);
  }
LABEL_21:
  v14 = xxxCallNextHookEx(a1, a2, (__int64)&v17);
  *((_QWORD *)a3 + 1) = *((_QWORD *)&v17 + 1);
  v10[11] = *(_DWORD *)(v17 + 44);
  v10[10] = *(_DWORD *)(v17 + 40);
  v10[9] = *(_DWORD *)(v17 + 36);
  v10[8] = *(_DWORD *)(v17 + 32);
  return v14;
}
