void __fastcall EtwTiLogReadWriteVm(int a1, __int64 a2, _KPROCESS *a3, int a4, void *a5, char a6)
{
  int v6; // r14d
  REGHANDLE v10; // rsi
  ULONGLONG v11; // r8
  ULONGLONG v12; // r8
  int v13; // r15d
  __int64 *v14; // rbx
  __int64 *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // r11d
  int v19; // eax
  int v20; // r11d
  __int64 v21; // rax
  unsigned int v22; // r11d
  __int64 v23; // rax
  unsigned int v24; // r11d
  int v25; // eax
  int v26; // r11d
  PVOID v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v30[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v34[46]; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+260h] [rbp+160h] BYREF

  v35 = a1;
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  v6 = 0;
  LODWORD(P) = 0;
  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    v10 = EtwThreatIntProvRegHandle;
    v11 = 196608LL;
    if ( a4 != 16 )
      v11 = 786432LL;
    if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v11) )
    {
      if ( (_KPROCESS *)a2 == a3 )
      {
        v13 = 0;
        v14 = THREATINT_READVM_LOCAL;
        v15 = THREATINT_WRITEVM_LOCAL;
      }
      else
      {
        v12 = 0x100000000LL;
        if ( a4 != 16 )
          v12 = 0x200000000LL;
        v13 = EtwProviderEnabled(v10, 0, v12);
        v14 = THREATINT_READVM_REMOTE;
        v15 = (__int64 *)&THREATINT_WRITEVM_REMOTE;
      }
      if ( a4 != 16 )
        v14 = v15;
      if ( EtwEventEnabled(v10, (PCEVENT_DESCRIPTOR)v14) )
      {
        if ( v13 )
        {
          v27 = a5;
          v6 = EtwpTiQueryVad((__int64)v30, a3, &v27, 1u, 1);
        }
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v35;
        v16 = EtwpTiFillProcessIdentity(v34, a2, &v28);
        v17 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v16 + 1)), (__int64)KeGetCurrentThread());
        v19 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v17 + v18), (__int64)a3, &v29);
        v21 = (unsigned int)(v19 + v20);
        v22 = v21 + 1;
        v21 *= 2LL;
        *(&UserData.Ptr + v21) = (ULONGLONG)&a5;
        *((_QWORD *)&UserData.Size + v21) = 8LL;
        v23 = v22;
        v24 = v22 + 1;
        v23 *= 2LL;
        *(&UserData.Ptr + v23) = (ULONGLONG)&a6;
        *((_QWORD *)&UserData.Size + v23) = 8LL;
        if ( v13 && v6 )
          v25 = EtwpTiFillVad((__int64)(&UserData + v24), (__int64)v30);
        else
          v25 = EtwpTiFillZeroVad(&UserData.Ptr + 2 * v24);
        EtwWrite(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v14, 0LL, v25 + v26, &UserData);
        if ( v6 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
    }
  }
}
