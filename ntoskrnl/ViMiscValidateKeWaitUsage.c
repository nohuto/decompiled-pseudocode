/*
 * XREFs of ViMiscValidateKeWaitUsage @ 0x140ADE5E0
 * Callers:
 *     VfMiscKeWaitForMultipleObjects_Entry @ 0x140ADD140 (VfMiscKeWaitForMultipleObjects_Entry.c)
 *     VfMiscKeWaitForSingleObject_Entry @ 0x140ADD170 (VfMiscKeWaitForSingleObject_Entry.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 */

char __fastcall ViMiscValidateKeWaitUsage(unsigned int a1, ULONG_PTR *a2, char a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbp
  int v9; // eax
  ULONG_PTR v10; // rdx
  int v11; // esi
  __int64 v12; // rdi
  ULONG_PTR v13; // rbx
  ULONG_PTR v15; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v16[2]; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  v16[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = a1;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    LOBYTE(v9) = CurrentThread->WaitIrql;
  else
    LOBYTE(v9) = KeGetCurrentIrql();
  if ( (unsigned __int8)v9 <= 2u )
  {
    if ( (_BYTE)v9 != 2 )
      goto LABEL_12;
    if ( a4 )
    {
      if ( !*a4 )
        goto LABEL_12;
      v10 = 290LL;
    }
    else
    {
      v10 = 289LL;
    }
  }
  else
  {
    v10 = 288LL;
  }
  LOBYTE(v9) = VerifierBugCheckIfAppropriate(0xC4u, v10, (unsigned __int8)v9, *a2, (__int64)a4);
LABEL_12:
  if ( a3 == 1 && (!a4 || *a4) && (v9 = *(&CurrentThread->MiscFlags + 1), (v9 & 0x40) != 0) )
  {
    LOBYTE(v9) = RtlpGetStackLimits((__int64)&v15, (__int64)v16);
    v11 = (unsigned __int8)v9;
  }
  else
  {
    v11 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v12 = v8;
    do
    {
      v13 = *a2;
      LOBYTE(v9) = ViMiscValidateSynchronizationObject(*a2);
      if ( v11 && v13 >= v15 && v13 < v16[0] )
        LOBYTE(v9) = VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, v13, 0LL, 0LL);
      ++a2;
      --v12;
    }
    while ( v12 );
  }
  return v9;
}
