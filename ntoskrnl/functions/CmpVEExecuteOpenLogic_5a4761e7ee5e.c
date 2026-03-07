__int64 __fastcall CmpVEExecuteOpenLogic(
        __int64 a1,
        __int64 a2,
        char a3,
        __m128i *a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  int v10; // ebx
  char PathByName; // bl
  void *v13; // rcx
  signed __int64 *v14; // rbx
  __int64 v15; // rbp
  ULONG_PTR v16; // rbp
  ULONG_PTR v17; // rdx
  __int64 CellFlat; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR v24[2]; // [rsp+48h] [rbp-40h] BYREF
  __m128i P; // [rsp+58h] [rbp-30h] BYREF

  v21 = 0;
  v24[0] = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
  HvpGetCellContextReinitialize(&v22);
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( CmpIsSystemEntity(a5, a6, (int *)(a2 + 16)) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (*(_DWORD *)(a2 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(a2 + 168));
            *(_DWORD *)(a2 + 160) |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(a1, &P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16LL, &v23);
            if ( v10 < 0 )
            {
              if ( v23 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, &P, 0LL, 16, &v21, v24);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v13 = (void *)a4->m128i_i64[1];
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
                *a4 = P;
                RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
                *(_DWORD *)a2 |= 8u;
                v10 = 260;
              }
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !CmpIsKeyDeleted(a1)) )
              {
                v14 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
                v15 = KeAbPreAcquire((__int64)v14, 0LL);
                if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx(v14, 0, v15, (__int64)v14);
                if ( v15 )
                  *(_BYTE *)(v15 + 18) = 1;
                v16 = *(_QWORD *)(a1 + 32);
                v17 = *(unsigned int *)(a1 + 40);
                if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v16, v17);
                else
                  CellFlat = HvpGetCellPaged(v16, v17, (unsigned int *)&v22);
                v19 = CellFlat;
                if ( CellFlat )
                {
                  v10 = HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40));
                  if ( v10 >= 0 )
                  {
                    *(_WORD *)(v19 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *(_DWORD *)a2 |= 8u;
                    v10 = 260;
                  }
                  v20 = *(_QWORD *)(a1 + 32);
                  if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v20, &v22);
                  else
                    HvpReleaseCellPaged(v20, (unsigned int *)&v22);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v16 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
                  KeAbPostRelease(v16 + 72);
                }
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P.m128i_i64[1] )
    ExFreePoolWithTag((PVOID)P.m128i_i64[1], 0);
  return (unsigned int)v10;
}
