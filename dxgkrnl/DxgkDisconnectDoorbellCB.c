__int64 __fastcall DxgkDisconnectDoorbellCB(int *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r8
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[3];
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    v4 = *(_QWORD *)a1;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v7,
      (struct DXGPUSHLOCK *const)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 448LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 456LL) != (_QWORD)KeGetCurrentThread());
    v5 = *(_QWORD *)(v4 + 144);
    if ( v5 )
    {
      if ( (unsigned int)**(_QWORD **)(v5 + 120) <= 1 )
      {
        v3 = DXGDOORBELL::Disconnect(*(_QWORD *)(v4 + 144), a1[3]);
      }
      else
      {
        WdLogSingleEntry2(3LL, v4, 0LL);
        v3 = 0;
      }
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry2(3LL, v4, -1073741811LL);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry2(3LL, v2, -1073741811LL);
  }
  return v3;
}
