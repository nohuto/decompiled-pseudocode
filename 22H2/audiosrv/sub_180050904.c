/*
 * XREFs of sub_180050904 @ 0x180050904
 * Callers:
 *     sub_180002BB0 @ 0x180002BB0 (sub_180002BB0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005104C @ 0x18005104C (sub_18005104C.c)
 *     sub_180051090 @ 0x180051090 (sub_180051090.c)
 *     sub_1800510D4 @ 0x1800510D4 (sub_1800510D4.c)
 *     sub_1800511D8 @ 0x1800511D8 (sub_1800511D8.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_1800513F8 @ 0x1800513F8 (sub_1800513F8.c)
 *     sub_180051468 @ 0x180051468 (sub_180051468.c)
 *     sub_18005151C @ 0x18005151C (sub_18005151C.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B779C @ 0x1800B779C (sub_1800B779C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180050904(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *pvData; // rcx
  int v14; // edi
  __int64 v15; // r14
  int v16; // r15d
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edi
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  int v26; // r8d
  int v27; // r9d
  _DWORD *v29; // rdi
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // ecx
  __int64 v33; // rax
  void *v34; // rax
  void *v35; // rcx
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+50h] [rbp-20h]
  PROPVARIANT v38[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v39; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v41; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+48h] BYREF
  SAFEARRAY *ppsaOut; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+58h] BYREF

  v37 = 0LL;
  v2 = *(_QWORD *)(a1 + 992);
  *(_OWORD *)pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &unk_18015C250, pvar);
  v4 = v3;
  if ( v3 < 0 )
    sub_18006D26C(retaddr, 4423LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v3);
  if ( !v4 && LOWORD(pvar[0]) == 4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    *(_DWORD *)(a1 + 848) = pvar[1];
    v6 = (_DWORD *)sub_180008448(v5, sub_1800B6240)[1];
    if ( *v6 > 4u )
    {
      LODWORD(v41) = *(_DWORD *)(a1 + 848);
      v42 = *(_QWORD *)(a1 + 728);
      sub_1800512F4((_DWORD)v6, (unsigned int)&unk_180166945, v7, v8, (__int64)&v42, (__int64)&v41);
    }
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  }
  PropVariantClear(pvar);
  v9 = *(_QWORD *)(a1 + 992);
  v39 = 0LL;
  *(_OWORD *)v38 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(v9, &unk_18015C238, v38);
  v11 = v10;
  if ( v10 < 0 )
    sub_18006D26C(retaddr, 4445LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v10);
  if ( !v11 && LOWORD(v38[0]) == 8196 )
  {
    ppsaOut = 0LL;
    v12 = sub_180051468(&ppsaOut, (SAFEARRAY *)v38[1]);
    if ( v12 < 0 )
      sub_1800B8610((unsigned int)v12);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    if ( *(_DWORD *)(a1 + 960) && *(_DWORD *)(a1 + 960) != (unsigned int)sub_1800513F8(&ppsaOut) )
    {
      v29 = (_DWORD *)sub_180008448((__int64)pvData, sub_1800B6240)[1];
      if ( *v29 > 4u )
      {
        LODWORD(v41) = sub_1800513F8(&ppsaOut);
        LODWORD(v42) = *(_DWORD *)(a1 + 960);
        v44 = *(_QWORD *)(a1 + 728);
        sub_1800B779C((_DWORD)v29, (unsigned int)&unk_180166845, v30, v31, (__int64)&v44, (__int64)&v42, (__int64)&v41);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 968) )
        goto LABEL_17;
      v32 = sub_1800513F8(&ppsaOut);
      v33 = 4LL * v32;
      *(_DWORD *)(a1 + 960) = v32;
      if ( !is_mul_ok(v32, 4uLL) )
        v33 = -1LL;
      v34 = (void *)sub_18006A1B0(v33, &unk_18019F848);
      v35 = *(void **)(a1 + 968);
      *(_QWORD *)(a1 + 968) = v34;
      if ( v35 )
      {
        sub_180033A70(v35);
        v34 = *(void **)(a1 + 968);
      }
      if ( v34 )
      {
        memset(v34, 0, 4LL * *(unsigned int *)(a1 + 960));
        if ( *(_QWORD *)(a1 + 968) )
        {
LABEL_17:
          v14 = 0;
          if ( *(int *)(a1 + 960) > 0 )
          {
            v15 = 0LL;
            do
            {
              if ( !ppsaOut )
                sub_1800B8610(2147500037LL);
              v16 = sub_180051090(&ppsaOut);
              if ( v14 < v16 || v14 > (int)sub_18005104C(&ppsaOut) )
                sub_1800B8610(2147942487LL);
              v17 = v14 - v16;
              ++v14;
              pvData = ppsaOut->pvData;
              *(_DWORD *)(v15 + *(_QWORD *)(a1 + 968)) = pvData[v17];
              v15 += 4LL;
            }
            while ( v14 < *(_DWORD *)(a1 + 960) );
          }
          v18 = (_DWORD *)sub_180008448((__int64)pvData, sub_1800B6240)[1];
          if ( *v18 > 4u )
          {
            pvar[0] = *(PROPVARIANT *)(a1 + 968);
            LOWORD(pvar[1]) = *(_WORD *)(a1 + 960);
            v41 = *(_QWORD *)(a1 + 728);
            sub_1800511D8((_DWORD)v18, (unsigned int)&unk_1801668E0, v19, v20, (__int64)&v41, (__int64)pvar);
          }
        }
      }
    }
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    sub_18005151C(&ppsaOut);
  }
  PropVariantClear(v38);
  v21 = *(_QWORD *)(a1 + 992);
  v37 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(v21, &unk_18015C220, pvar);
  v23 = v22;
  if ( v22 < 0 )
    sub_18006D26C(retaddr, 4509LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v22);
  if ( !v23 && LOWORD(pvar[0]) == 11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    v25 = (_DWORD *)sub_180008448(v24, sub_1800B6240)[1];
    if ( *v25 > 4u )
    {
      v42 = *(_QWORD *)(a1 + 728);
      LOBYTE(v41) = LOWORD(pvar[1]) == 0xFFFF;
      sub_1800510D4((_DWORD)v25, (unsigned int)&unk_1801667F2, v26, v27, (__int64)&v42, (__int64)&v41);
    }
    *(_DWORD *)(a1 + 852) = LOWORD(pvar[1]) == 0xFFFF;
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  }
  PropVariantClear(pvar);
  return 0LL;
}
