__int64 __fastcall WmipProcessEvent(_DWORD *P, __int64 a2, char a3)
{
  char v3; // bp
  PVOID v4; // rsi
  PVOID v5; // rdi
  PVOID v6; // rbx
  volatile signed __int64 *GEByGuid; // r13
  unsigned int v8; // r15d
  volatile signed __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbp
  void (__fastcall *v13)(PVOID, _QWORD); // rax
  void *v16; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = P;
  if ( (P[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = P;
    v16 = 0LL;
LABEL_3:
    if ( (*((_DWORD *)v6 + 11) & 0x80u) != 0 )
      v6 = (PVOID)WmipIncludeStaticNames(v6);
    GEByGuid = WmipFindGEByGuid((_QWORD *)v6 + 3, 1);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v10 = (volatile signed __int64 *)*((_QWORD *)GEByGuid + 5);
      if ( v10 != GEByGuid + 5 )
      {
        do
        {
          v12 = (__int64)(v10 - 5);
          v10 = (volatile signed __int64 *)*v10;
          if ( ObReferenceObjectSafe(v12) )
          {
            if ( (*(_DWORD *)(v12 + 164) & 2) != 0 )
            {
              v13 = *(void (__fastcall **)(PVOID, _QWORD))(v12 + 72);
              if ( v13 )
                v13(v6, *(_QWORD *)(v12 + 80));
            }
            else if ( (int)WmipWriteWnodeToObject((PRKEVENT)v12, (unsigned int *)v6) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v12);
          }
        }
        while ( v10 != GEByGuid + 5 );
        v5 = v16;
        v4 = P;
        v3 = a3;
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v11 = WmipDereferenceEvent();
  v16 = (void *)v11;
  v5 = (PVOID)v11;
  if ( v11 )
  {
    v6 = (PVOID)v11;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
