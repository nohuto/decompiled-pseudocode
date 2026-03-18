/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1402037E8
 * Callers:
 *     SepRmCallLsa @ 0x140203950 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x1403CD84C (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x14041BBA0 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x14041E780 (ZwRequestPort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CF0D0 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x1409CF1A0 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 ServerSiloGlobals; // rax
  __int64 v3; // rsi
  __int16 v4; // ax
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  void *v9; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  void *v13; // rax
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-D8h] BYREF
  PVOID v16[64]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v17[128]; // [rsp+238h] [rbp+130h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v17, 0, sizeof(v17));
  ServerSiloGlobals = PsGetServerSiloGlobals(*(_QWORD *)(a1 + 56));
  v3 = ServerSiloGlobals + 784;
  if ( *(_QWORD *)(ServerSiloGlobals + 792) )
  {
    v4 = *(_WORD *)(a1 + 36);
    v17[10] = 0;
    v5 = *(_DWORD *)(a1 + 16);
    WORD1(v16[0]) = v4 + 48;
    LOWORD(v16[0]) = v4 + 8;
    LOWORD(v17[0]) = *(_WORD *)(a1 + 48);
    HIWORD(v17[0]) = LOWORD(v17[0]) + 40;
    LODWORD(v16[5]) = *(_DWORD *)(a1 + 32);
    if ( v5 == 1 )
    {
      v6 = *(_DWORD *)(a1 + 36);
      HIDWORD(v16[5]) = 1;
      if ( v6 <= 0x1D0 )
      {
        memmove(&v16[6], (const void *)(a1 + 24), v6);
LABEL_5:
        if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
          v7 = ZwRequestWaitReplyPort(*(_QWORD *)(v3 + 8), v16, v17);
        else
          v7 = ZwRequestPort(*(_QWORD *)(v3 + 8), v16);
        v8 = v7;
        if ( v7 >= 0 )
        {
          v9 = *(void **)(a1 + 40);
          if ( v9 )
            memmove(v9, &v17[11], *(unsigned int *)(a1 + 48));
          v8 = v17[10];
        }
        if ( HIDWORD(v16[5]) == 3 )
        {
          RegionSize = 0LL;
          return (unsigned int)ZwFreeVirtualMemory(*(HANDLE *)v3, &v16[6], &RegionSize, 0x8000u);
        }
        return v8;
      }
    }
    else if ( (unsigned int)(v5 - 4) <= 2 )
    {
      v11 = *(unsigned int *)(a1 + 36);
      v12 = *(const void **)(a1 + 24);
      if ( (unsigned int)v11 > 0x1D0 )
      {
        if ( (unsigned int)v11 > 0x1000 )
        {
          v14 = SepAdtCopyToLsaSharedMemory(*(HANDLE *)v3);
          v8 = v14;
          if ( v14 < 0 )
          {
            SepAuditFailed((unsigned int)v14);
            return v8;
          }
          v13 = 0LL;
          HIDWORD(v16[5]) = 3;
        }
        else
        {
          memmove(*(void **)(v3 + 64), v12, v11);
          v13 = *(void **)(v3 + 56);
          HIDWORD(v16[5]) = 2;
        }
        v5 = *(_DWORD *)(a1 + 16);
        v16[6] = v13;
        LODWORD(v16[0]) = 3670032;
      }
      else
      {
        memmove(&v16[6], v12, v11);
        HIDWORD(v16[5]) = 1;
      }
      if ( (unsigned int)(v5 - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
