/*
 * XREFs of KiFatalExceptionFilter @ 0x140B7015C
 * Callers:
 *     KiLockServiceTable @ 0x1402E3C60 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x1402B274C (RtlCaptureImageExceptionValues.c)
 *     RtlLookupExceptionHandler @ 0x1403BEEE8 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v1; // r9
  unsigned int v2; // edx
  char *v3; // rbx
  unsigned int *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax
  int v8; // r10d
  int v9; // edx
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v12; // [rsp+60h] [rbp+18h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  RtlCaptureImageExceptionValues(0x140000000LL, &v11, &v10);
  if ( !v11 )
    goto LABEL_9;
  v2 = v10 / 0xC;
  if ( !(v10 / 0xC) )
    goto LABEL_9;
  v3 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v4 = (unsigned int *)(v11 + 12LL * (v2 - 1));
  v5 = *v4;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < v5 )
  {
    v8 = 0;
    v1 = v2 - 2;
    if ( (int)v1 >= 0 )
    {
      do
      {
        v9 = (v8 + (int)v1) >> 1;
        v4 = (unsigned int *)(v11 + 12LL * v9);
        if ( (unsigned __int64)v3 >= *v4 )
        {
          LODWORD(v5) = *v4;
          if ( (unsigned __int64)v3 < v4[3] )
            break;
          v8 = v9 + 1;
        }
        else
        {
          v1 = (unsigned int)(v9 - 1);
        }
        LODWORD(v5) = *v4;
      }
      while ( (int)v1 >= v8 );
    }
  }
  if ( (unsigned __int64)v3 < (unsigned int)v5 || (unsigned __int64)v3 >= v4[1] || !v4 )
LABEL_9:
    KeBugCheck(0x31u);
  v6 = RtlLookupExceptionHandler(v4, 0x140000000uLL, 1u, v1, &v12, 0LL);
  if ( v6 < 0 )
    KeBugCheckEx(0x31u, v6, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v12;
  KiHardwareTriggerLock = 0LL;
  return 0LL;
}
