/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AlpcpLocateView @ 0x1406A0954 (AlpcpLocateView.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x1406A29BC (AlpcpRestoreWriteAccess.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x1407155FC (AlpcpDeleteView.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(PVOID Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r15d
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // [rsp+20h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v12 = View;
    v8 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v8 == *(_QWORD *)(i + 80) )
    {
LABEL_13:
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_14;
    }
    if ( v8 && v8 == *(_QWORD *)(i + 72) )
    {
      if ( (*(_DWORD *)(v2 + 72) & 8) == 0 )
      {
        v11 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v11 )
        {
          if ( *(_QWORD *)(v8 + 64) )
          {
            KeStackAttachProcess(*(PRKPROCESS *)(v8 + 32), &ApcState);
            MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
            KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          *(_DWORD *)(v8 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v8);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_13;
        }
        *(_QWORD *)(v2 + 64) = v11;
      }
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v8 + 64) )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(v8 + 32), &ApcState);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        *(_QWORD *)(v8 + 64) = 0LL;
      }
      *(_DWORD *)(v8 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v8;
      AlpcpDereferenceBlobEx(v8);
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v2 + 72) & 8) != 0 )
      goto LABEL_9;
    v9 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v9 )
    {
      *(_QWORD *)(v2 + 64) = v9;
LABEL_9:
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v8 )
      {
        *(_QWORD *)(i + 80) = v8;
        goto LABEL_13;
      }
      v5 = AlpcpCreateView(i, Object);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v8 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object);
  if ( v5 >= 0 )
  {
LABEL_11:
    v8 = v12;
LABEL_12:
    *(_DWORD *)(a2 + 40) |= 0x8000u;
    goto LABEL_13;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_14:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v2);
  return (unsigned int)v5;
}
