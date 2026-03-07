struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        struct _KTHREAD **this,
        struct _LUID *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rdx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  char *v6; // rbx
  _BYTE v8[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 9, 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v4 = (DXGVIRTUALGPUMANAGER *)(this + 13);
  v10 = 1;
  v5 = this[13];
  if ( v5 == (DXGVIRTUALGPUMANAGER *)(this + 13) )
  {
LABEL_5:
    WdLogSingleEntry2(2LL, a2->HighPart, a2->LowPart);
    v6 = 0LL;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"A virtual GPU with given LUID is not found: 0x%I64x 0x%I64x",
      a2->HighPart,
      a2->LowPart,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    while ( 1 )
    {
      v6 = (char *)v5 - 120;
      if ( a2->LowPart == *((_DWORD *)v5 - 23) && a2->HighPart == *((_DWORD *)v6 + 8) )
        break;
      v5 = *(DXGVIRTUALGPUMANAGER **)v5;
      if ( v5 == v4 )
        goto LABEL_5;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return (struct DXGK_VIRTUAL_GPU *)v6;
}
