/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1402E88D8
 * Callers:
 *     SepRmCallLsa @ 0x1402E8690 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x140412750 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x140415390 (ZwRequestPort.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CED84 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rax
  void **v4; // r14
  __int16 v5; // ax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // eax
  void **v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // ecx
  size_t v14; // r8
  const void *v15; // rdx
  void *v16; // rax
  int v17; // eax
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v19[64]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v20[128]; // [rsp+230h] [rbp+130h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v20, 0, sizeof(v20));
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  v4 = (void **)(ServerSiloGlobals + 98);
  if ( ServerSiloGlobals[99] )
  {
    v5 = *(_WORD *)(a1 + 36);
    v20[10] = 0;
    v6 = *(_DWORD *)(a1 + 16);
    WORD1(v19[0]) = v5 + 48;
    LOWORD(v19[0]) = v5 + 8;
    LOWORD(v20[0]) = *(_WORD *)(a1 + 48);
    HIWORD(v20[0]) = LOWORD(v20[0]) + 40;
    LODWORD(v19[5]) = *(_DWORD *)(a1 + 32);
    v7 = v6 - 1;
    if ( v7 )
    {
      v13 = v7 - 3;
      if ( !v13 || (unsigned int)(v13 - 1) < 2 )
      {
        v14 = *(unsigned int *)(a1 + 36);
        v15 = *(const void **)(a1 + 24);
        if ( (unsigned int)v14 > 0x1D0 )
        {
          if ( (unsigned int)v14 > 0x1000 )
          {
            v17 = SepAdtCopyToLsaSharedMemory(*v4);
            v11 = v17;
            if ( v17 < 0 )
            {
              SepAuditFailed((unsigned int)v17);
              return v11;
            }
            v16 = 0LL;
            HIDWORD(v19[5]) = 3;
          }
          else
          {
            memmove(v4[8], v15, v14);
            v16 = v4[7];
            HIDWORD(v19[5]) = 2;
          }
          v19[6] = v16;
          LODWORD(v19[0]) = 3670032;
        }
        else
        {
          memmove(&v19[6], v15, v14);
          HIDWORD(v19[5]) = 1;
        }
        if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
          ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
        goto LABEL_5;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 36);
      HIDWORD(v19[5]) = 1;
      if ( v8 <= 0x1D0 )
      {
        memmove(&v19[6], (const void *)(a1 + 24), v8);
LABEL_5:
        v9 = (void **)(a1 + 40);
        if ( *(_DWORD *)(a1 + 32) != 3 || *v9 )
          v10 = ZwRequestWaitReplyPort(v4[1], v19, v20);
        else
          v10 = ZwRequestPort(v4[1], v19);
        v11 = v10;
        if ( v10 >= 0 )
        {
          if ( *v9 )
            memmove(*v9, &v20[11], *(unsigned int *)(a1 + 48));
          v11 = v20[10];
        }
        if ( HIDWORD(v19[5]) == 3 )
          return (unsigned int)ZwFreeVirtualMemory(*v4, &v19[6], &RegionSize, 0x8000u);
        return v11;
      }
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
