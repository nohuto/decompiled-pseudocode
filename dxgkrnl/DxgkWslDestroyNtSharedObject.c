__int64 __fastcall DxgkWslDestroyNtSharedObject(unsigned int a1)
{
  unsigned int v2; // r15d
  HMGRTABLE *v3; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdi
  unsigned int v6; // ebp
  unsigned int v7; // edx
  int EntryType; // eax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  int v11; // ecx
  __int64 v12; // rdi
  const wchar_t *v13; // r9
  struct DXGSYNCOBJECT **v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF
  char v23; // [rsp+58h] [rbp-20h]

  v2 = -1073741811;
  v3 = (HMGRTABLE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v22,
    (struct DXGGLOBAL *)((char *)Global + 40));
  v5 = (a1 >> 6) & 0xFFFFFF;
  v6 = a1 >> 30;
  if ( (unsigned int)v5 >= *((_DWORD *)v3 + 4) )
    goto LABEL_26;
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 16LL * (unsigned int)v5 + 8);
  if ( v6 != ((v7 >> 5) & 3) || (v7 & 0x2000) != 0 || (v7 & 0x1F) == 0 )
    goto LABEL_26;
  EntryType = HMGRTABLE::GetEntryType((__int64)v3, v5);
  if ( EntryType == 4 )
  {
    if ( (unsigned int)v5 < *((_DWORD *)v3 + 4) )
    {
      v18 = *(_DWORD *)(*(_QWORD *)v3 + 16LL * (unsigned int)v5 + 8);
      if ( v6 == ((v18 >> 5) & 3) && (v18 & 0x2000) == 0 )
      {
        v19 = v18 & 0x1F;
        if ( v19 )
        {
          if ( v19 != 4 )
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    v12 = 1118LL;
    WdLogSingleEntry1(2LL, 1118LL);
    goto LABEL_14;
  }
  if ( EntryType != 8 )
  {
LABEL_26:
    v12 = 1132LL;
    WdLogSingleEntry1(2LL, 1132LL);
    v13 = L"Invalid shared object type handle";
LABEL_27:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    if ( v23 )
    {
      v20 = v22;
      *(_QWORD *)(v22 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
    }
    return v2;
  }
  if ( (unsigned int)v5 >= *((_DWORD *)v3 + 4)
    || (v9 = 2 * v5, v10 = *(_DWORD *)(*(_QWORD *)v3 + 8 * v9 + 8), v6 != ((v10 >> 5) & 3))
    || (v10 & 0x2000) != 0
    || (v11 = v10 & 0x1F) == 0 )
  {
LABEL_13:
    v12 = 1127LL;
    WdLogSingleEntry1(2LL, 1127LL);
LABEL_14:
    v13 = L"Invalid syncobject handle";
    goto LABEL_27;
  }
  if ( v11 != 8 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_13;
  }
  v14 = *(struct DXGSYNCOBJECT ***)(*(_QWORD *)v3 + 8 * v9);
  if ( !v14 )
    goto LABEL_13;
  HMGRTABLE::FreeHandle(v3, a1);
  if ( v23 )
  {
    v17 = v22;
    *(_QWORD *)(v22 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
  DxgkSharedSyncObjectObDeleteProcedure(v14, v15, v16);
  return 0;
}
