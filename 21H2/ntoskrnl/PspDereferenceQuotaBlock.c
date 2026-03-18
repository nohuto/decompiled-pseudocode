/*
 * XREFs of PspDereferenceQuotaBlock @ 0x140724E14
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1406C86A0 (PspAssignProcessQuotaBlock.c)
 *     PsReturnSharedPoolQuota @ 0x140724DC8 (PsReturnSharedPoolQuota.c)
 *     ObpFreeObject @ 0x1407CDBA0 (ObpFreeObject.c)
 *     PspDereferenceQuota @ 0x1409AD164 (PspDereferenceQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x140243648 (PspReturnResourceQuota.c)
 *     PspRemoveQuotaBlock @ 0x1409AD180 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PspDereferenceQuotaBlock(volatile signed __int32 *P)
{
  signed int v2; // esi
  char *v3; // r14
  char *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v2 = 0;
    v3 = PspResourceFlags;
    for ( i = (char *)(P + 18); ; i += 128 )
    {
      if ( (*v3 & 3) == 1 )
      {
        v5 = *((_QWORD *)i + 1);
        v6 = *((_QWORD *)i - 1);
        if ( v6 + *(_QWORD *)i )
        {
          if ( v5 )
          {
            v7 = _InterlockedExchange64((volatile __int64 *)i, 0LL);
            v6 = _InterlockedExchange64((volatile __int64 *)i - 1, 0LL) + v7;
          }
          if ( v6 )
          {
LABEL_11:
            PspReturnResourceQuota(v2, (__int64)(i - 72), v6, v5 != 0);
            goto LABEL_12;
          }
        }
        else
        {
          v6 = 0LL;
        }
        if ( v5 )
          goto LABEL_11;
      }
LABEL_12:
      ++v2;
      v3 += 8;
      if ( v2 >= 4 )
      {
        PspRemoveQuotaBlock(P);
        ExFreePoolWithTag((PVOID)P, 0);
        return;
      }
    }
  }
}
