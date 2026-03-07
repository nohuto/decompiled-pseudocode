__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  __int64 v13; // r13
  _QWORD *v14; // r12
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rdx
  char v18; // cl
  PRKMUTEX v19; // r14
  __int64 v20; // r12
  PRKMUTEX v21; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v23)(PRKMUTEX, __int64 *); // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  PRKMUTEX Mutex; // [rsp+88h] [rbp+48h]
  PERESOURCE Resource; // [rsp+90h] [rbp+50h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = -1073741637;
  v27 = 0LL;
  v7 = *(unsigned int *)(v2 + 24);
  v8 = *(_DWORD *)(v2 + 8);
  v9 = *(_DWORD *)(v2 + 16);
  v10 = *(_QWORD *)(v2 + 32);
  v11 = *(_DWORD *)(v2 + 24) - 2302031;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      if ( v12 == 1972 )
      {
        v26 = DpiSharedPowerRegister(a1, v7, v10, v9, *(_QWORD *)(a2 + 112), v8, (__int64)&v27);
        v5 = v27;
        v6 = v26;
        goto LABEL_21;
      }
      v25 = 3LL;
LABEL_29:
      WdLogSingleEntry1(v25, v7);
      goto LABEL_21;
    }
    if ( v9 >= 0x10 && v10 )
    {
      v6 = 0;
      v13 = *(_QWORD *)(v10 + 8);
      Mutex = *(PRKMUTEX *)v10;
      KeEnterCriticalRegion();
      Resource = (PERESOURCE)(v4 + 3320);
      ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3320), 1u);
      v14 = (_QWORD *)(v4 + 3480);
      v15 = *(_QWORD **)(v4 + 3480);
      while ( v15 != v14 )
      {
        v16 = v15 - 4;
        v15 = (_QWORD *)*v15;
        v27 = 0LL;
        if ( *(_DWORD *)v16 == 1 )
        {
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64 *))v13)(Mutex, &v27);
          if ( v6 < 0 )
            break;
          v17 = *((int *)v16 + 4);
          if ( *((_DWORD *)v16 + 4) == 1 || (unsigned int)(*((_DWORD *)v16 + 4) - 3) <= 1 )
            *(_DWORD *)(v27 + 8) = v17;
          else
            WdLogSingleEntry2(2LL, v17, -1073741811LL);
          *(_DWORD *)v27 = *((_DWORD *)v16 + 6);
          *(_DWORD *)(v27 + 4) = *((_DWORD *)v16 + 1);
          *(_DWORD *)(v27 + 12) = *((_DWORD *)v16 + 2);
          v18 = *((_BYTE *)v16 + 12);
          v19 = Mutex;
          *(_BYTE *)(v27 + 16) = v18;
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64))(v13 + 8))(v19, v27);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(PRKMUTEX, __int64))(v13 + 16))(v19, v27);
            break;
          }
        }
      }
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      goto LABEL_21;
    }
LABEL_28:
    v7 = -1073741789LL;
    v6 = -1073741789;
    v25 = 2LL;
    goto LABEL_29;
  }
  if ( v9 < 0x10 || !v10 )
    goto LABEL_28;
  Mutex = (PRKMUTEX)(v4 + 3600);
  KeWaitForSingleObject((PVOID)(v4 + 3600), Executive, 0, 0, 0LL);
  v6 = 0;
  v20 = *(_QWORD *)(v10 + 8);
  v21 = *(PRKMUTEX *)v10;
  for ( i = 0; i < *(_DWORD *)(v4 + 2684); ++i )
  {
    v23 = *(__int64 (__fastcall **)(PRKMUTEX, __int64 *))v20;
    v27 = 0LL;
    v6 = v23(v21, &v27);
    if ( v6 < 0 )
      break;
    *(_DWORD *)v27 = i;
    *(_DWORD *)(v27 + 4) = 0;
    v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64))(v20 + 8))(v21, v27);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(PRKMUTEX, __int64))(v20 + 16))(v21, v27);
      break;
    }
  }
  KeReleaseMutex(Mutex, 0);
LABEL_21:
  *(_DWORD *)(a2 + 48) = v6;
  *(_QWORD *)(a2 + 56) = v5;
  IofCompleteRequest((PIRP)a2, 1);
  return (unsigned int)v6;
}
