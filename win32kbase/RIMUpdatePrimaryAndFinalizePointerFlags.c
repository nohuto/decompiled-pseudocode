void __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // r12
  __int64 v4; // r14
  int v5; // r13d
  __int64 active; // rax
  int v8; // esi
  __int64 v9; // xmm1_8
  int v10; // edx
  __int64 v11; // rbx
  _DWORD *v12; // rcx
  int v13; // r12d
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int IsPointerInputTypeRedirected; // eax
  __int64 v19; // rdx
  int v20; // r15d
  int v21; // r8d
  _DWORD *v22; // rdx
  int v23; // ecx
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  int v27; // ebx
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+30h] [rbp-28h]
  __int64 v30; // [rsp+38h] [rbp-20h] BYREF
  int v31; // [rsp+40h] [rbp-18h]
  __int64 v32; // [rsp+48h] [rbp-10h]
  int IsContactDeliveringPointerData; // [rsp+B8h] [rbp+60h]

  v2 = 0;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0LL;
  v5 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v30, a2);
  v8 = 1;
  v9 = *(_QWORD *)(active + 16);
  v28 = *(_OWORD *)active;
  v29 = v9;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v30, a2);
    if ( (_QWORD)v28 == v30 && DWORD2(v28) == v31 && v29 == v32 )
      break;
    v10 = *(_DWORD *)(v29 + 2668);
    v11 = v29 - 16;
    v12 = (_DWORD *)(v29 - 16 + 2444);
    if ( (v10 & 2) != 0 || (v13 = 1, (*v12 & 2) == 0) )
      v13 = 0;
    if ( (v10 & 4) == 0 && (*v12 & 4) != 0 )
      v2 = 1;
    if ( (*(_DWORD *)(v11 + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1714);
    if ( (*(_DWORD *)(v11 + 32) & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1715);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v11) )
      ++v5;
    if ( (*(_DWORD *)(v11 + 2364) & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 1016) && (v13 || v2) && !v4 && !(unsigned int)RIMCmIsContactSuppressed(v11) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v11);
        v4 = v11;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v11);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v28);
    v2 = 0;
  }
  if ( v4 && (!v5 || v5 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 1016) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1751);
    *(_DWORD *)(v4 + 32) |= 8u;
    *(_DWORD *)(v4 + 2444) |= 0x4000000u;
    *(_QWORD *)(a2 + 1016) = v4;
  }
  if ( *(_QWORD *)(a2 + 1016) )
  {
    v14 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = RIMApiSetIsPointerInputTypeRedirected(v14, v15, v16, v17);
    v19 = *(_QWORD *)(a2 + 1016);
    v20 = IsPointerInputTypeRedirected;
    v21 = *(_DWORD *)(v19 + 2684);
    v22 = (_DWORD *)(v19 + 2444);
    if ( (v21 & 2) != 0 || (v23 = 1, (*v22 & 2) == 0) )
      v23 = 0;
    if ( (v21 & 4) != 0 || (v24 = 1, (*v22 & 4) == 0) )
      v24 = 0;
    if ( v23 || (v25 = 0, v24) )
      v25 = 1;
    v26 = *(_QWORD *)(v3 + 480);
    if ( v26 )
    {
      v27 = RIMGetPointerInputType(v26);
      if ( (v27 == (unsigned int)RIMGetPointerInputType(a2)
         || (unsigned int)rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 480))
         || !(unsigned int)rimIsPointerDevicePrimaryContactDown(a2))
        && (!*(_DWORD *)(v3 + 488) || v20) )
      {
        v8 = 0;
      }
    }
    if ( v25 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1016) + 2444LL) |= 0x2000u;
      RIMUpdatePrimaryDevice(v3, a2);
    }
  }
}
