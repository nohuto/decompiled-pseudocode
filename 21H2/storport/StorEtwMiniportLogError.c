/*
 * XREFs of StorEtwMiniportLogError @ 0x1C003878C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006674 (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x1C00124D8 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer @ 0x1C0037624 (McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0056D20 (StorpTelemetryMiniportLogError.c)
 */

__int64 __fastcall StorEtwMiniportLogError(__int64 a1, __int64 a2, int a3, const wchar_t *a4, int a5, __int64 a6)
{
  char v6; // r15
  __int64 v7; // rdi
  char v9; // r12
  char v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // r8d
  int v14; // r9d
  __int64 Unit; // rax
  void *v16; // rsi
  int v17; // eax
  const char *v18; // r8
  const char *v19; // rdx
  const char *v20; // rcx
  NTSTATUS v21; // eax
  void *v22; // rcx
  void *v23; // rax
  int v24; // edx
  int v26; // [rsp+90h] [rbp-39h]
  __int128 v29; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-1h] BYREF

  v6 = -1;
  v7 = 0LL;
  v9 = -1;
  HIBYTE(v26) = -1;
  v10 = -1;
  v29 = 0LL;
  v30 = 0LL;
  if ( !StorEtwLoggingEnabled )
    return (unsigned int)-1056964607;
  v12 = **(_QWORD **)(a1 - 16);
  if ( !v12 )
    return (unsigned int)-1056964602;
  RaidDriverGetName(*(_QWORD *)(v12 + 16), (__int64)&v29);
  v31 = *(_OWORD *)(v12 + 5192);
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return (unsigned int)-1056964602;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return (unsigned int)-1056964602;
    v6 = *(_BYTE *)(a2 + 8);
    v9 = *(_BYTE *)(a2 + 9);
    v10 = *(_BYTE *)(a2 + 10);
    LOBYTE(v26) = v6;
    BYTE1(v26) = v9;
    BYTE2(v26) = v10;
    Unit = RaidAdapterFindUnit(v12, v26);
    v7 = Unit;
    if ( !Unit )
      return (unsigned int)-1056964602;
    v30 = *(_OWORD *)(Unit + 1976);
  }
  v16 = &unk_1C005B660;
  if ( (byte_1C0069844 & 4) != 0 )
  {
    if ( v7 )
      LOBYTE(v17) = *(_BYTE *)(v7 + 450) & 1;
    else
      v17 = *(unsigned __int8 *)(v12 + 104) >> 7;
    v18 = (const char *)(v7 + 186);
    if ( v7 )
    {
      v19 = (const char *)(v7 + 169);
    }
    else
    {
      v18 = (const char *)&unk_1C005B660;
      v19 = (const char *)&unk_1C005B660;
    }
    v20 = (const char *)(v7 + 160);
    if ( !v7 )
      v20 = (const char *)&unk_1C005B660;
    v21 = McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer(
            (__int64)v20,
            (__int64)v19,
            (__int64)v18,
            *(_DWORD *)(v12 + 56),
            v6,
            v9,
            v10,
            (__int64)&v30,
            (__int64)&v31,
            *((const wchar_t **)&v29 + 1),
            v20,
            v19,
            v18,
            v17,
            a5,
            a6,
            a3,
            a4);
  }
  else
  {
    v21 = 0;
  }
  v22 = (void *)(v7 + 186);
  v11 = (v21 >> 31) & 0xC1000001;
  if ( v7 )
  {
    v23 = (void *)(v7 + 169);
  }
  else
  {
    v22 = &unk_1C005B660;
    v23 = &unk_1C005B660;
  }
  if ( v7 )
    v16 = (void *)(v7 + 160);
  LOBYTE(v14) = v10;
  LOBYTE(v13) = v9;
  v24 = a5;
  LOBYTE(v24) = v6;
  StorpTelemetryMiniportLogError(
    *(_DWORD *)(v12 + 56),
    v24,
    v13,
    v14,
    (__int64)&v30,
    (__int64)&v31,
    *((__int64 *)&v29 + 1),
    (__int64)v16,
    (__int64)v23,
    (__int64)v22,
    a5,
    a6,
    a3,
    (__int64)a4);
  return v11;
}
