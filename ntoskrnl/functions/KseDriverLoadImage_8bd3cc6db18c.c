__int64 __fastcall KseDriverLoadImage(__int64 a1, _DWORD *a2)
{
  int ShimsForDriver; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0;
  v12 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  *a2 = 0;
  if ( !a1 || MmIsSessionAddress(*(_QWORD *)(a1 + 48)) || dword_140C649B4 != 2 || (KseEngine & 1) != 0 )
    goto LABEL_11;
  ShimsForDriver = KsepStringDuplicateUnicode(&v8, a1 + 88);
  if ( ShimsForDriver >= 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(v10, a1 + 72);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepGetShimsForDriver(
                         (__int64)&v8,
                         (int)v10,
                         *(_QWORD *)(a1 + 48),
                         *(_DWORD *)(a1 + 64),
                         &v12,
                         &v11);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepApplyShimsToDriver(a1, &v8, v12, v11);
        if ( ShimsForDriver >= 0 )
        {
          v6 = v11;
          v7 = v12;
          *a2 = 1;
          KsepEvntLogShimsApplied((unsigned __int16 *)&v8, v7, v6);
        }
      }
    }
  }
  if ( !ShimsForDriver )
  {
    dword_140C649B8 |= 0x800u;
    qword_140C64A08 = *(_QWORD *)(a1 + 48);
    goto LABEL_14;
  }
  if ( ShimsForDriver >= 0 )
  {
LABEL_14:
    KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458959LL;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v11, v9);
    KsepLogInfo(4, "KSE: Applied %d shim(s) to [%ws].\n", v11, v9);
    goto LABEL_12;
  }
  if ( ShimsForDriver != -1073740948 )
  {
LABEL_11:
    ShimsForDriver = 0;
    goto LABEL_12;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458950LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(4LL, "KSE: driver blocked from loading [%ws].\n", v9);
  KsepLogInfo(4, "KSE: driver blocked from loading [%ws].\n", v9);
LABEL_12:
  KsepStringFree(&v8);
  KsepStringFree(v10);
  return (unsigned int)ShimsForDriver;
}
