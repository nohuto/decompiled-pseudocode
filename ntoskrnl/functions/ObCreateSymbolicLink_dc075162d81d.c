__int64 __fastcall ObCreateSymbolicLink(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rsi
  PVOID *p_Object; // rcx
  int IntegrityLevel; // r14d
  _QWORD *v9; // rbx
  __int16 v10; // cx
  void *Pool2; // rcx
  unsigned __int16 v12; // ax
  __int64 v13; // r12
  unsigned __int16 *v15; // rax
  REGHANDLE v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rax
  unsigned int v19; // r9d
  ULONGLONG v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v29[3]; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-A8h] BYREF

  v5 = a4;
  v28 = a3;
  v30 = a1;
  v26 = a2;
  v29[1] = a3;
  v29[2] = a4;
  v29[0] = 0LL;
  Object = 0LL;
  p_Object = &Object;
  LOBYTE(a4) = a5;
  LOBYTE(p_Object) = a5;
  IntegrityLevel = ObCreateObjectEx((_DWORD)p_Object, (_DWORD)ObpSymbolicLinkObjectType, a3, a4);
  if ( IntegrityLevel < 0 )
  {
    v9 = Object;
    goto LABEL_30;
  }
  v9 = Object;
  *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
  v9[3] = 0LL;
  if ( (*(_DWORD *)v5 & 1) != 0 )
  {
    *((_DWORD *)v9 + 7) = 16;
    v9[1] = *(_QWORD *)(v5 + 8);
    v9[2] = *(_QWORD *)(v5 + 16);
  }
  else
  {
    if ( a5 )
    {
      *((_WORD *)v9 + 5) = *(_WORD *)(v5 + 10);
    }
    else
    {
      v10 = *(_WORD *)(v5 + 8);
      *((_WORD *)v9 + 5) = v10;
      if ( *(_WORD *)(v5 + 10) > *(_WORD *)(v5 + 8) )
        *((_WORD *)v9 + 5) = v10 + 2;
    }
    *((_WORD *)v9 + 4) = *(_WORD *)(v5 + 8);
    if ( (*(_DWORD *)v5 & 2) != 0 )
      *((_DWORD *)v9 + 7) |= 0x20u;
    if ( *((_WORD *)v9 + 5) )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, *((unsigned __int16 *)v9 + 5), 1953331539LL);
      v9[2] = Pool2;
      if ( !Pool2 )
      {
        IntegrityLevel = -1073741801;
        goto LABEL_30;
      }
      if ( a5 )
        v12 = *((_WORD *)v9 + 5);
      else
        v12 = *((_WORD *)v9 + 4);
      memmove(Pool2, *(const void **)(v5 + 16), v12);
    }
    else
    {
      v9[2] = 0LL;
    }
  }
  IntegrityLevel = ObpGetIntegrityLevel(0LL);
  if ( IntegrityLevel >= 0 )
  {
    if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
      *((_DWORD *)v9 + 7) |= 2u;
    IntegrityLevel = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)v29);
    v9 = 0LL;
    Object = 0LL;
    if ( IntegrityLevel >= 0 )
    {
      *v30 = v29[0];
      v13 = v28;
      IntegrityLevel = 0;
      goto LABEL_19;
    }
  }
LABEL_30:
  v13 = v28;
LABEL_19:
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( (*(_DWORD *)v5 & 5) == 0 )
  {
    LODWORD(Object) = IntegrityLevel;
    v15 = *(unsigned __int16 **)(v13 + 16);
    LODWORD(v28) = a2;
    v16 = EtwApiCallsProvRegHandle;
    if ( EtwApiCallsProvRegHandle )
    {
      LOWORD(v26) = 0;
      v17 = 0;
      if ( *((_QWORD *)v15 + 1) )
      {
        UserData[0].Ptr = *((_QWORD *)v15 + 1);
        UserData[0].Size = *v15;
        UserData[0].Reserved = 0;
        v17 = 1;
      }
      v18 = v17;
      UserData[v18].Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&UserData[v18].Size = 2LL;
      v19 = v17 + 1;
      v20 = *(_QWORD *)(v5 + 16);
      if ( v20 )
      {
        v21 = v19;
        UserData[v21].Ptr = v20;
        UserData[v21].Size = *(unsigned __int16 *)(v5 + 8);
        *(&UserData[0].Reserved + 1 * v21) = 0;
        ++v19;
      }
      v22 = v19;
      UserData[v22].Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&UserData[v22].Size = 2LL;
      v23 = v19 + 1;
      v24 = v23;
      UserData[v24].Ptr = (ULONGLONG)&v28;
      *(_QWORD *)&UserData[v24].Size = 4LL;
      v25 = ++v23;
      UserData[v25].Ptr = (ULONGLONG)&Object;
      *(_QWORD *)&UserData[v25].Size = 4LL;
      EtwWrite(v16, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v23 + 1, UserData);
    }
  }
  return (unsigned int)IntegrityLevel;
}
