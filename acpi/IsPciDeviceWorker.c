/*
 * XREFs of IsPciDeviceWorker @ 0x1C0035980
 * Callers:
 *     IsPciDevice @ 0x1C00358A8 (IsPciDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     IsPciBusAsync @ 0x1C0035270 (IsPciBusAsync.c)
 *     PciConfigInternal @ 0x1C0035ECC (PciConfigInternal.c)
 *     ACPIConvertStringDelimitation @ 0x1C0043964 (ACPIConvertStringDelimitation.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 */

__int64 __fastcall IsPciDeviceWorker(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rbp
  const char *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbp
  _BYTE *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rax
  volatile signed __int32 *v24; // rbp
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v29; // rax
  __int64 v30; // rbp
  unsigned int v31; // edi
  void *v32; // rcx
  void *v33; // rcx

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 9);
  v7 = *a4;
  if ( *a4 )
  {
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 6 && a2 >= 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
      if ( v9 )
      {
        if ( (*(_QWORD *)(v9 + 8) & 0x102000000LL) != 0 )
        {
          v17 = (_BYTE *)a4[7];
          goto LABEL_67;
        }
        v10 = *((_DWORD *)a4 + 2);
        if ( (v10 & 1) == 0 )
        {
          v11 = (__int64)(a4 + 2);
          *((_DWORD *)a4 + 2) = v10 | 1;
          a4[2] = 0LL;
          v12 = AMLIGetNamedChild(v7, 1145653343LL);
          if ( v12 )
          {
            v6 = ACPIGet(*a4, 0x4449485Fu, 738722310, 0LL, 0, (__int64)IsPciDeviceWorker, (__int64)a4, v11, 0LL);
            AMLIDereferenceHandleEx(v12);
            if ( v6 == 259 )
              return 259LL;
            if ( v6 < 0 )
            {
LABEL_12:
              v8 = (_BYTE *)a4[7];
              goto LABEL_3;
            }
          }
        }
        v13 = (const char *)a4[2];
        if ( v13 )
        {
          if ( strstr(v13, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
          {
            _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 192), a4[2], 0LL) )
              ExFreePoolWithTag((PVOID)a4[2], 0);
            _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x21u);
            a4[2] = 0LL;
LABEL_25:
            v17 = (_BYTE *)a4[7];
LABEL_67:
            *v17 = 1;
            goto LABEL_68;
          }
          ExFreePoolWithTag((PVOID)a4[2], 0);
          a4[2] = 0LL;
        }
        v14 = *((_DWORD *)a4 + 2);
        if ( (v14 & 0x80u) == 0 )
        {
          v15 = *a4;
          a4[3] = 0LL;
          *((_DWORD *)a4 + 2) = v14 | 0x80;
          v16 = AMLIGetNamedChild(v15, 1145652063LL);
          if ( v16 )
          {
            v6 = ACPIGet(
                   *a4,
                   0x4449435Fu,
                   738722055,
                   0LL,
                   0,
                   (__int64)IsPciDeviceWorker,
                   (__int64)a4,
                   (__int64)(a4 + 3),
                   0LL);
            AMLIDereferenceHandleEx(v16);
            if ( v6 == 259 )
              return 259LL;
            if ( v6 < 0 )
              goto LABEL_12;
          }
        }
        v18 = a4[3];
        if ( !v18 )
          goto LABEL_30;
        ACPIConvertStringDelimitation(v18);
        if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
        {
          ExFreePoolWithTag((PVOID)a4[3], 0);
          a4[3] = 0LL;
LABEL_30:
          v19 = *((_DWORD *)a4 + 2);
          if ( (v19 & 8) == 0 )
          {
            *((_DWORD *)a4 + 2) = v19 | 8;
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
            {
              v20 = ACPIGet(
                      *a4,
                      0x5244415Fu,
                      -1543240702,
                      0LL,
                      0,
                      (__int64)IsPciDeviceWorker,
                      (__int64)a4,
                      (__int64)a4 + 12,
                      0LL);
              v6 = v20;
              if ( v20 == 259 )
                return 259LL;
              if ( v20 < 0 )
                goto LABEL_12;
            }
            else
            {
              *((_DWORD *)a4 + 3) = *(_DWORD *)(v9 + 92);
            }
          }
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(v9 + 92), *((_DWORD *)a4 + 3));
            _InterlockedOr((volatile signed __int32 *)(v9 + 88), 0x80u);
          }
          v21 = *((_DWORD *)a4 + 2);
          if ( (v21 & 0x20) != 0 )
            goto LABEL_44;
          v22 = *a4;
          *((_DWORD *)a4 + 2) = v21 | 0x20;
          v23 = (volatile signed __int32 *)AMLIGetParent(v22);
          v24 = v23;
          if ( !v23 )
          {
            v6 = -1073741661;
            goto LABEL_12;
          }
          v6 = IsPciBusAsync(v23, (__int64)IsPciDeviceWorker, (__int64)a4, (_BYTE *)a4 + 32);
          AMLIDereferenceHandleEx(v24);
          if ( v6 != 259 )
          {
            if ( v6 < 0 )
              goto LABEL_12;
LABEL_44:
            if ( !*((_BYTE *)a4 + 32) )
              goto LABEL_12;
            v25 = *((_DWORD *)a4 + 2);
            if ( (v25 & 0x40) == 0 )
            {
              v26 = *a4;
              *((_DWORD *)a4 + 2) = v25 | 0x40;
              v27 = PciConfigInternal(0, v26, 0, 15, (__int64)IsPciDeviceWorker, (__int64)a4, (__int64)(a4 + 8));
              v6 = v27;
              if ( v27 == 259 )
                return 259LL;
              if ( v27 < 0 )
                goto LABEL_12;
            }
            if ( (*((_BYTE *)a4 + 78) & 0x7Fu) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
              if ( *((_WORD *)a4 + 32) == 0xFFFF
                || *((_WORD *)a4 + 33) == 0xFFFF
                || *((_BYTE *)a4 + 78) == 0xFF
                || *((_BYTE *)a4 + 75) == 0xFF
                || *((_BYTE *)a4 + 74) == 0xFF
                || *((_BYTE *)a4 + 73) == 0xFF )
              {
                *((_DWORD *)a4 + 2) &= ~0x40u;
              }
              else
              {
                *(_BYTE *)(v9 + 96) = *((_BYTE *)a4 + 78);
              }
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x100000000uLL);
              v5 = 1;
            }
            *(_BYTE *)a4[7] = 1;
            v29 = AMLIGetParent(*a4);
            if ( v29 )
            {
              v30 = *(_QWORD *)(*(_QWORD *)v29 + 104LL);
              AMLIDereferenceHandleEx(v29);
              if ( v30 )
              {
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v30 + 184), 0, 0) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)(v9 + 88), 2u);
                  if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                    _InterlockedOr64((volatile signed __int64 *)(v9 + 1008), 0x8000uLL);
                }
                goto LABEL_68;
              }
            }
            goto LABEL_12;
          }
          return 259LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 192), a4[3], 0LL) )
          ExFreePoolWithTag((PVOID)a4[3], 0);
        _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x41u);
        a4[3] = 0LL;
        goto LABEL_25;
      }
    }
  }
  v8 = (_BYTE *)a4[7];
LABEL_3:
  *v8 = 0;
LABEL_68:
  v31 = 0;
  if ( v6 != -1073741772 )
    v31 = v6;
  if ( *((_DWORD *)a4 + 9) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[5])(*a4, v31, 0LL, a4[6]);
  v32 = (void *)a4[2];
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  v33 = (void *)a4[3];
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( *a4 )
    AMLIDereferenceHandleEx(*a4);
  ExFreePoolWithTag(a4, 0x46706341u);
  return v31;
}
