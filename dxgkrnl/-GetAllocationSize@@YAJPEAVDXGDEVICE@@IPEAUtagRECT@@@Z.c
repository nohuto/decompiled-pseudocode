__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rdi
  volatile signed __int32 *v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // edi
  int v13; // edx
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  struct _DXGKARG_DESCRIBEALLOCATION v17; // [rsp+50h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+C8h] [rbp+48h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v7 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 2561LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 2561LL, 0LL, 0LL, 0LL, 0LL);
    return -1073741811LL;
  }
  v9 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)v7 + 74) )
  {
    v12 = a2;
  }
  else
  {
    v11 = *((_QWORD *)v7 + 35);
    v12 = a2;
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
      && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 5 )
        {
          v14 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v10);
          goto LABEL_12;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v14 = 0LL;
LABEL_12:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v14);
  _InterlockedDecrement(v9 + 4);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v12, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    v16 = -1073741823;
    goto LABEL_20;
  }
  v15 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL) == *(_QWORD *)(v15 + 16) )
  {
    memset(&v17, 0, sizeof(v17));
    v17.hAllocation = *(HANDLE *)(v19[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 2928LL), &v17, v15) >= 0 )
    {
      a3->right = v17.Width;
      a3->bottom = v17.Height;
      *(_QWORD *)&a3->left = 0LL;
      v16 = 0;
      goto LABEL_20;
    }
    WdLogSingleEntry2(2LL, v17.hAllocation, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to query source surface size for source 0x%I64x, device 0x%I64x",
      (__int64)v17.hAllocation,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  v16 = -1073741811;
  WdLogSingleEntry3(2LL, a1, v19, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    (__int64)a1,
    (__int64)v19,
    -1073741811LL,
    0LL,
    0LL);
LABEL_20:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
  return v16;
}
