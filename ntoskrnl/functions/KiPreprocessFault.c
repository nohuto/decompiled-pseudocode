char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  char v6; // r14
  __int16 v7; // ax
  void *v8; // rdx
  void *v9; // rcx
  bool v10; // cf
  int v11; // edi
  int v12; // eax
  __int64 v13; // r14
  char v14; // si
  struct _KTHREAD *CurrentThread; // rdx
  void *v17; // rax
  unsigned __int16 SListFaultCount; // ax
  unsigned __int16 v19; // ax
  _QWORD v20[14]; // [rsp+30h] [rbp-39h] BYREF

  memset(v20, 0, sizeof(v20));
  v6 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0x10000001:
      v11 = 0x80000000;
      goto LABEL_22;
    case 0x10000002:
      goto LABEL_34;
    case 0x10000003:
      v11 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
  }
  if ( *(_DWORD *)a1 != 268435460 )
  {
    if ( *(_DWORD *)a1 == 268435462 )
    {
      v6 = 1;
      if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
        return 1;
      goto LABEL_5;
    }
    if ( *(_DWORD *)a1 != 268435463 )
    {
      if ( *(_DWORD *)a1 != 268435472 )
        return 0;
      if ( (int)KiEnableOptionalXStateFeatures(KeGetCurrentThread(), *(_QWORD *)(a1 + 32)) >= 0 )
        return 1;
LABEL_34:
      v11 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    }
    v11 = 0x4000000;
LABEL_22:
    *(_DWORD *)a1 = -1073741819;
    goto LABEL_10;
  }
LABEL_5:
  v7 = *(_WORD *)(a2 + 56);
  if ( v7 == 16 )
  {
    v8 = &ExpInterlockedPopEntrySListFault;
    v9 = &ExpInterlockedPopEntrySListResume;
  }
  else
  {
    if ( v7 != 51 )
      goto LABEL_8;
    v8 = (void *)qword_140D1F370;
    v9 = (void *)qword_140D1F378;
  }
  if ( *(void **)(a2 + 248) != v8 )
    goto LABEL_8;
  if ( v7 == 16 )
  {
    *(_QWORD *)(a2 + 248) = v9;
    if ( (_BYTE)KiKernelCetEnabled && (*(_DWORD *)(a2 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a2 + 1256) + a2 + 1240) = v9;
    return 1;
  }
  CurrentThread = KeGetCurrentThread();
  v17 = *(void **)(a1 + 40);
  if ( v17 == CurrentThread->SListFaultAddress )
  {
    SListFaultCount = CurrentThread->SListFaultCount;
    if ( SListFaultCount > 0x400u )
    {
      CurrentThread->SListFaultCount = 0;
LABEL_8:
      v10 = *(_DWORD *)(a1 + 24) < 2u;
      v11 = 0x10000000;
      *(_DWORD *)a1 = -1073741819;
      if ( v10 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
      {
LABEL_10:
        v12 = KiOpDecode(a1, a2, a3, v11, v20);
        if ( v12 < 0 )
        {
          v14 = 0;
        }
        else
        {
          if ( v6 )
          {
            HIDWORD(v20[7]) |= 0x2000000u;
            v20[13] = -1LL;
          }
          v13 = v20[11];
          if ( v20[11] )
            v12 = (*(__int64 (__fastcall **)(_QWORD *))(v20[11] + 16LL))(v20);
          v14 = 0;
          if ( v12 >= 0 )
          {
            if ( v13 )
            {
              v14 = v20[12];
              if ( LOBYTE(v20[12]) )
                return v14;
            }
          }
        }
        if ( v11 == 0x80000000 )
        {
          if ( *(_DWORD *)a1 == -1073741819 && !BYTE1(v20[12]) )
          {
            *(_DWORD *)(a1 + 24) = 2;
            *(_QWORD *)(a1 + 40) = -1LL;
            *(_QWORD *)(a1 + 32) = 0LL;
          }
        }
        else if ( v11 == 0x8000000 )
        {
          if ( (int)KiCheckForAtlThunk(v20) >= 0 )
            return v20[12];
        }
        else if ( v11 == 0x10000000 && (v20[7] & 0x200000000000000LL) != 0 )
        {
          KiOpCheckUnhandledSecurePciAccessViolation(v20, a1);
          if ( *(_DWORD *)a1 == 268435465 )
            KeBugCheckEx(0x1EAu, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56));
        }
        return v14;
      }
      if ( a3 )
      {
        v11 = 0x8000000;
        goto LABEL_10;
      }
      return 0;
    }
    v19 = SListFaultCount + 1;
  }
  else
  {
    CurrentThread->SListFaultAddress = v17;
    v19 = 0;
  }
  CurrentThread->SListFaultCount = v19;
  *(_QWORD *)(a2 + 248) = v9;
  return 1;
}
