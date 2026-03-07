__int64 __fastcall PspInitializeProcessSecurity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _DWORD *a14)
{
  _DWORD *v14; // r15
  int v15; // esi
  _DWORD *v17; // r14
  ULONG_PTR v20; // r12
  int SessionId; // eax
  int v22; // r9d
  int v23; // r10d
  signed __int64 v24; // rax
  __int64 v26; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v27[4]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int16 v30; // [rsp+C8h] [rbp+37h] BYREF
  char v31; // [rsp+CAh] [rbp+39h]

  v14 = a14;
  v15 = 0;
  v26 = 0LL;
  v30 = 0;
  v31 = 0;
  v17 = a14 + 1;
  *a14 = 0;
  *v17 = 0;
  v20 = 0LL;
  if ( a1 )
  {
    v27[0] = a5;
    v27[1] = a12;
    v27[2] = a6;
    v27[3] = a7;
    v29 = a13;
    v28 = a1;
    SessionId = MmGetSessionId(a2);
    v15 = SeSubProcessToken(
            a2,
            v23,
            (unsigned int)&v26,
            v22 != 0 ? 1 : 3,
            SessionId,
            (__int64)v27,
            a8,
            a9,
            a10,
            a11,
            (__int64)&v30);
    if ( v15 >= 0 )
    {
      ObInitializeFastReference(a2 + 1208, v26);
      if ( a4 || (_BYTE)v30 )
        *v14 = 1;
      if ( HIBYTE(v30) )
        *v17 = 1;
      if ( v31 && !*v17 )
      {
        v20 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
        v15 = PspIdentityBasedJobBreakaway(v20, v26, v17);
      }
    }
    if ( *v14 || *(int *)(a1 + 2512) < 0 || (*(_DWORD *)(a2 + 2172) & 0x800000) != 0 && !*(_QWORD *)(a1 + 2528) )
      v24 = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      v24 = *(_QWORD *)(a1 + 2528);
    *(_QWORD *)(a2 + 2528) = v24;
    *(_QWORD *)(a2 + 2536) = v24;
    if ( v20 )
      ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v20, 0x746C6644u);
  }
  else
  {
    *(_QWORD *)(a2 + 1208) = 0LL;
    SeAssignPrimaryToken(a2, a3);
  }
  return (unsigned int)v15;
}
