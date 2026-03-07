__int64 __fastcall PspSetJobRateControl(_QWORD *Object, __int64 a2, char a3)
{
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // edi
  char **v6; // rsi
  int v7; // r15d
  __int64 *RateControl; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)Object + 384);
  v15 = 0LL;
  v4 = v3 & 0x4000000;
  v5 = 0;
  v6 = 0LL;
  v7 = v3 & 0x2000000;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( v4 )
    {
      PspRemoveRateControl((__int64)Object);
      return v5;
    }
    v5 = -1073741811;
    goto LABEL_13;
  }
  if ( !v4 )
  {
    if ( v7 )
    {
      v5 = -1073741637;
      goto LABEL_13;
    }
    RateControl = PspAllocateRateControl(0LL);
    v6 = (char **)RateControl;
    if ( !RateControl )
    {
      v5 = -1073741801;
      goto LABEL_13;
    }
    Object[191] = RateControl;
    _InterlockedOr((volatile signed __int32 *)Object + 384, 0x4000000u);
    PspModifyAncestorBits((__int64)Object, 0x2000000u, 1);
  }
  LODWORD(v15) = 0;
  *((_QWORD *)&v14 + 1) = Object;
  BYTE4(v15) = 1;
  v5 = PspEnumJobsAndProcessesInJobHierarchy(
         Object,
         (int)PspSetRateControlJobPreCallback,
         0,
         (int)PspSetRateControlProcessCallback,
         (__int64)v13,
         5);
  if ( (v5 & 0x80000000) == 0 )
    return v5;
  if ( v6 )
    PspFreeRateControl(v6, 0);
LABEL_13:
  Object[191] = 0LL;
  _InterlockedAnd((volatile signed __int32 *)Object + 384, 0xFBFFFFFF);
  if ( !v7 )
  {
    PspModifyAncestorBits((__int64)Object, 0x2000000u, 0);
    v13[0] &= v10;
    v13[1] &= v10;
    LODWORD(v15) = v10 & v15;
    v14 = 0LL;
    BYTE4(v15) = v10;
    PspEnumJobsAndProcessesInJobHierarchy(
      v11,
      (int)PspSetRateControlJobPreCallback,
      v10,
      (int)PspSetRateControlProcessCallback,
      (__int64)v13,
      5);
  }
  return v5;
}
