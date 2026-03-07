__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // r14
  int v6; // eax
  bool v7; // dl
  BOOL v8; // ecx
  __int16 v9; // ax
  signed __int32 v11[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v12; // [rsp+20h] [rbp-88h]
  bool v13; // [rsp+21h] [rbp-87h]
  _DWORD *v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  __int64 v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+48h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v16 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v4 = *(_DWORD **)(a1 + 240);
  v14 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    v15 = v5;
    if ( *(_QWORD *)(a2 + 184) == v5 )
    {
      v12 = 0;
    }
    else
    {
      KeStackAttachProcess((PRKPROCESS)v5, &ApcState);
      v12 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1352)) )
    {
      do
      {
        v17 = a1 + 1376;
        v6 = *(_DWORD *)(a1 + 1376) & 8;
        v7 = v6 != 0;
        v13 = v6 != 0;
        v8 = v6 != 0;
        v4[1511] = v8;
        v4[1530] = 0;
        if ( *(_QWORD *)(v5 + 1408) )
        {
          v9 = *(_WORD *)(v5 + 2412);
          if ( v9 == 332 || v9 == 452 )
          {
            v4[3047] = v8;
            v4[3057] = 0;
          }
        }
        _InterlockedOr(v11, 0);
      }
      while ( v7 != ((*(_DWORD *)(a1 + 1376) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1352));
    }
    if ( v12 )
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  }
  return 0LL;
}
