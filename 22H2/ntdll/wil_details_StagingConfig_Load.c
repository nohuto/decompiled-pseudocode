/*
 * XREFs of wil_details_StagingConfig_Load @ 0x18009C548
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x18011B0A8 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A0150 (ZwQueryWnfStateData.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // r13
  __int64 Heap; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // rdx
  unsigned int v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF

  v24 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v6 = 0;
  v7 = 200LL;
  *(_QWORD *)a1 = 0LL;
  Heap = 0LL;
  v9 = 0LL;
  v25 = _WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v10 = -(__int64)(a4 != 0) & 0xC8;
  v22 = a4 != 0 ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&v25, 0LL, 0LL, a1 + 8, a4, &v22);
  v12 = v11;
  if ( v11 )
    goto LABEL_13;
  v9 = v24;
  if ( v24 )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    v13 = v10;
    v10 = v22;
    if ( v13 >= v22 )
      v10 = v13;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    if ( !Heap )
      return 3221225626LL;
    v22 = v10;
    v11 = ZwQueryWnfStateData(&v25, 0LL, 0LL, a1 + 8, Heap, &v22);
    v12 = v11;
    v9 = Heap;
LABEL_13:
    ;
  }
  while ( v11 == -1073741789 );
  if ( v12 || !v9 )
  {
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v12;
  }
  else
  {
    v14 = v22;
    if ( v22 > 4 )
      *(_BYTE *)(a1 + 12) = *(_BYTE *)v9;
    if ( (unsigned int)v14 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *(_WORD *)(v9 + 2) >= 0x10u
      && (v15 = *(unsigned __int16 *)(v9 + 4),
          v14 >= *(unsigned __int16 *)(v9 + 2) + 16 * (unsigned __int64)*(unsigned __int16 *)(v9 + 6) + 12 * v15) )
    {
      v23 = 0;
      v16 = 0;
      if ( (_WORD)v15 )
      {
        v26 = _WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        LODWORD(v24) = 0;
        ZwQueryWnfStateData(&v26, 0LL, 0LL, &v23, 0LL, &v24);
        LODWORD(v14) = v22;
        v16 = v23;
      }
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9 + 16;
      *(_QWORD *)(a1 + 40) = v9 + 16 + 12LL * *(unsigned __int16 *)(v9 + 4);
      *(_DWORD *)(a1 + 48) = v16 != 0;
      if ( *(_BYTE *)v9 == 2 && *(_BYTE *)(v9 + 1) < 2u )
      {
        v17 = 16 * *(unsigned __int16 *)(v9 + 6);
        v18 = 3 * *(unsigned __int16 *)(v9 + 4);
        v19 = *(unsigned __int16 *)(v9 + 2);
        *(_DWORD *)(a1 + 16) = 1;
        LODWORD(v14) = v19 + v17 + 4 * v18;
      }
    }
    else
    {
      v22 = 16;
      *(_OWORD *)v9 = 0LL;
      *(_DWORD *)v9 = 1049090;
      LODWORD(v14) = v22;
      *(_QWORD *)(a1 + 24) = v9;
      v21 = v9 + *(unsigned __int16 *)(v9 + 2);
      *(_QWORD *)(a1 + 32) = v21;
      *(_QWORD *)(a1 + 40) = v21 + 12LL * *(unsigned __int16 *)(v9 + 4);
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v14;
    if ( Heap )
      v7 = v10;
    *(_QWORD *)(a1 + 56) = v9;
    *(_QWORD *)(a1 + 72) = v7;
    LOBYTE(v6) = v9 == Heap;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v6;
  }
  return result;
}
