/*
 * XREFs of IsPciBusAsyncWorker @ 0x1C0035350
 * Callers:
 *     IsPciBusAsync @ 0x1C0035270 (IsPciBusAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AcpipFreePciBusState @ 0x1C0034968 (AcpipFreePciBusState.c)
 *     IsPciBusAsync @ 0x1C0035270 (IsPciBusAsync.c)
 *     PciConfigInternal @ 0x1C0035ECC (PciConfigInternal.c)
 *     ACPIConvertStringDelimitation @ 0x1C0043964 (ACPIConvertStringDelimitation.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 */

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, int a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rax
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rbp
  const char *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // edi
  void *v20; // rcx
  void *v21; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  volatile signed __int32 *v28; // rax
  volatile signed __int32 *v29; // rbp
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rbp

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = *a4;
  if ( !*a4 )
    goto LABEL_2;
  if ( a2 < 0 )
    goto LABEL_2;
  v9 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
  if ( !v9 )
    goto LABEL_2;
  v10 = *(_QWORD *)(v9 + 8);
  if ( (v10 & 0x2000000) == 0 )
  {
    if ( (v10 & 0x100000000LL) == 0 )
    {
      v12 = *((_DWORD *)a4 + 2);
      if ( (v12 & 1) == 0 )
      {
        v13 = (__int64)(a4 + 2);
        *((_DWORD *)a4 + 2) = v12 | 1;
        a4[2] = 0LL;
        v14 = AMLIGetNamedChild(v7, 1145653343LL);
        if ( v14 )
        {
          v6 = ACPIGet(*a4, 0x4449485Fu, 738722310, 0LL, 0, (__int64)IsPciBusAsyncWorker, (__int64)a4, v13, 0LL);
          AMLIDereferenceHandleEx(v14);
          if ( v6 == 259 )
            return 259LL;
          if ( v6 < 0 )
          {
LABEL_21:
            v8 = (_BYTE *)a4[8];
            goto LABEL_22;
          }
        }
      }
      v15 = (const char *)a4[2];
      if ( v15 )
      {
        if ( strstr(v15, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
        {
          _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 192), a4[2], 0LL) )
            ExFreePoolWithTag((PVOID)a4[2], 0);
          _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x21u);
          a4[2] = 0LL;
          goto LABEL_37;
        }
        ExFreePoolWithTag((PVOID)a4[2], 0);
        a4[2] = 0LL;
      }
      v16 = *((_DWORD *)a4 + 2);
      if ( (v16 & 0x80u) == 0 )
      {
        v17 = *a4;
        a4[3] = 0LL;
        *((_DWORD *)a4 + 2) = v16 | 0x80;
        v18 = AMLIGetNamedChild(v17, 1145652063LL);
        if ( v18 )
        {
          v6 = ACPIGet(
                 *a4,
                 0x4449435Fu,
                 738722055,
                 0LL,
                 0,
                 (__int64)IsPciBusAsyncWorker,
                 (__int64)a4,
                 (__int64)(a4 + 3),
                 0LL);
          AMLIDereferenceHandleEx(v18);
          if ( v6 == 259 )
            return 259LL;
          if ( v6 < 0 )
            goto LABEL_21;
        }
      }
      v23 = a4[3];
      if ( !v23 )
        goto LABEL_42;
      ACPIConvertStringDelimitation(v23);
      if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
      {
        ExFreePoolWithTag((PVOID)a4[3], 0);
        a4[3] = 0LL;
LABEL_42:
        v24 = *((_DWORD *)a4 + 2);
        if ( (v24 & 8) == 0 )
        {
          *((_DWORD *)a4 + 2) = v24 | 8;
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
          {
            v25 = ACPIGet(
                    *a4,
                    0x5244415Fu,
                    -1543240702,
                    0LL,
                    0,
                    (__int64)IsPciBusAsyncWorker,
                    (__int64)a4,
                    (__int64)(a4 + 4),
                    0LL);
            v6 = v25;
            if ( v25 == 259 )
              return 259LL;
            if ( v25 < 0 )
              goto LABEL_21;
          }
          else
          {
            *((_DWORD *)a4 + 8) = *(_DWORD *)(v9 + 92);
          }
        }
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(v9 + 92), *((_DWORD *)a4 + 8));
          _InterlockedOr((volatile signed __int32 *)(v9 + 88), 0x80u);
        }
        v26 = *((_DWORD *)a4 + 2);
        if ( (v26 & 0x20) != 0 )
          goto LABEL_56;
        v27 = *a4;
        *((_DWORD *)a4 + 2) = v26 | 0x20;
        v28 = (volatile signed __int32 *)AMLIGetParent(v27);
        v29 = v28;
        if ( !v28 )
        {
          v6 = -1073741661;
          goto LABEL_21;
        }
        v6 = IsPciBusAsync(v28, (__int64)IsPciBusAsyncWorker, (__int64)a4, (_BYTE *)a4 + 36);
        AMLIDereferenceHandleEx(v29);
        if ( v6 != 259 )
        {
          if ( v6 < 0 )
            goto LABEL_21;
LABEL_56:
          if ( !*((_BYTE *)a4 + 36) )
            goto LABEL_21;
          v30 = *((_DWORD *)a4 + 2);
          if ( (v30 & 0x40) == 0 )
          {
            v31 = *a4;
            v32 = v30 | 0x40;
            *((_DWORD *)a4 + 2) = v32;
            v33 = PciConfigInternal(
                    v32,
                    v31,
                    a3,
                    (_DWORD)a4,
                    (__int64)IsPciBusAsyncWorker,
                    (__int64)a4,
                    (__int64)(a4 + 9));
            v6 = v33;
            if ( v33 == 259 )
              return 259LL;
            if ( v33 < 0 )
              goto LABEL_21;
          }
          if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF )
          {
            v34 = *((unsigned __int8 *)a4 + 86);
            if ( (_BYTE)v34 != 0xFF
              && *((_BYTE *)a4 + 83) != 0xFF
              && *((_BYTE *)a4 + 82) != 0xFF
              && *((_BYTE *)a4 + 81) != 0xFF )
            {
              if ( (v34 & 0xFFFFFF7F) - 1 <= 1 )
              {
                _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
                *(_BYTE *)(v9 + 96) = *((_BYTE *)a4 + 86);
                *(_BYTE *)a4[8] = 1;
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x100000000uLL);
                v5 = 1;
                *(_BYTE *)a4[8] = 0;
              }
              v35 = AMLIGetParent(*a4);
              if ( v35 )
              {
                v36 = *(_QWORD *)(*(_QWORD *)v35 + 104LL);
                AMLIDereferenceHandleEx(v35);
                if ( v36 )
                {
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v36 + 184), 0, 0) & 1) != 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)(v9 + 88), 2u);
                    if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                      _InterlockedOr64((volatile signed __int64 *)(v9 + 1008), 0x8000uLL);
                  }
                  goto LABEL_23;
                }
              }
            }
          }
          goto LABEL_21;
        }
        return 259LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), a4[3], 0LL) )
        ExFreePoolWithTag((PVOID)a4[3], 0);
      _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x41u);
      a4[3] = 0LL;
LABEL_37:
      v11 = (_BYTE *)a4[8];
      goto LABEL_7;
    }
LABEL_2:
    v8 = (_BYTE *)a4[8];
LABEL_22:
    *v8 = 0;
    goto LABEL_23;
  }
  v11 = (_BYTE *)a4[8];
LABEL_7:
  *v11 = 1;
LABEL_23:
  v19 = 0;
  if ( v6 != -1073741772 )
    v19 = v6;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[6])(*a4, v19, 0LL, a4[7]);
  v20 = (void *)a4[2];
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (void *)a4[3];
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  AcpipFreePciBusState(a4);
  return v19;
}
