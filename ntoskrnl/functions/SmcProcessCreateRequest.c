__int64 __fastcall SmcProcessCreateRequest(unsigned __int64 a1, int a2, char a3)
{
  struct _PRIVILEGE_SET *v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // r14
  int Prepare; // ebx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 NonPaged; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-478h] BYREF
  struct _EX_RUNDOWN_REF *v16; // [rsp+30h] [rbp-468h]
  _QWORD v17[132]; // [rsp+40h] [rbp-458h] BYREF

  v6 = 0LL;
  v15[0] = -1;
  v7 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( a2 == 1056 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v9 = a1;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 1055) = *(_BYTE *)(v9 + 1055);
    }
    v10 = (_OWORD *)a1;
    v11 = v17;
    v12 = 8LL;
    do
    {
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v11[4] = v10[4];
      v11[5] = v10[5];
      v11[6] = v10[6];
      v11 += 8;
      *(v11 - 1) = v10[7];
      v10 += 8;
      --v12;
    }
    while ( v12 );
    *v11 = *v10;
    v11[1] = v10[1];
    if ( LOBYTE(v17[0]) != 3 || (v17[0] & 0xFFFFFF00) != 0 || HIDWORD(v17[2]) )
    {
      Prepare = -1073741811;
    }
    else
    {
      v7 = (struct _EX_RUNDOWN_REF *)(SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 2128);
      v16 = v7;
      Prepare = SmcCacheCreatePrepare((__int64)v7);
      if ( Prepare >= 0 )
      {
        NonPaged = SSHSupportAllocateNonPaged(1064LL, 0x61436D73u);
        v6 = (struct _PRIVILEGE_SET *)NonPaged;
        if ( NonPaged )
        {
          SmcCacheInitialize(NonPaged);
          HIWORD(v17[131]) = 0;
          Prepare = SmcCacheStart(v7);
          if ( Prepare >= 0 )
          {
            Prepare = SmcCacheAdd(v7, v6, v15);
            if ( Prepare >= 0 )
            {
              v6 = 0LL;
              v15[1] = 1;
              Prepare = 0;
              *(_DWORD *)(a1 + 4) = v15[0];
            }
          }
        }
        else
        {
          Prepare = -1073741670;
        }
      }
    }
  }
  else
  {
    Prepare = -1073741306;
  }
  if ( v15[0] != -1 )
    ExReleaseRundownProtection_0(&v7[4 * (v15[0] & 0xF) + 1]);
  if ( v6 )
  {
    SmcCacheCleanup(v7, v6);
    CmSiFreeMemory(v6);
  }
  return (unsigned int)Prepare;
}
