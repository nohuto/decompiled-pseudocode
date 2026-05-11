/*
 * XREFs of USBType1Build1MsecIsocRequest @ 0x1C0005E00
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1C0005FD8 (USBType1ProcessStreamPointer.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1C00056A4 (USBType1BuildIsochUrbRequest.c)
 *     memmove @ 0x1C0013540 (memmove.c)
 */

__int64 __fastcall USBType1Build1MsecIsocRequest(struct _KSPIN *a1, struct _KSSTREAM_POINTER **a2)
{
  _QWORD *Context; // r13
  struct _KSSTREAM_POINTER *v4; // r15
  unsigned int v5; // esi
  __int64 v6; // r14
  ULONG Remaining; // ebx
  PUCHAR Data; // rdx
  unsigned int *v9; // rdi
  ULONG v10; // eax
  ULONG v11; // ebp
  KIRQL v12; // al
  _QWORD *v13; // rdx
  KIRQL v14; // cl
  void **v15; // rax
  struct _KSSTREAM_POINTER *PoolWithTag; // r8

  Context = a1->Context;
  v4 = *a2;
  v5 = 0;
  v6 = Context[19];
  Remaining = (*a2)->OffsetIn.Remaining;
  Data = (*a2)->OffsetIn.Data;
  v9 = *(unsigned int **)(v6 + 136);
  v10 = *(_DWORD *)(v6 + 124);
  if ( v10 >= Remaining )
    v10 = Remaining;
  v11 = v10;
  memmove((void *)(*((_QWORD *)v9 + 6) + v9[9]), Data, v10);
  if ( Remaining == v11 )
  {
    KsStreamPointerAdvanceOffsetsAndUnlock(v4, v11, 0, 0);
    *a2 = 0LL;
  }
  else
  {
    KsStreamPointerAdvanceOffsets(v4, v11, 0, 0);
  }
  *(_DWORD *)(v6 + 124) -= v11;
  v9[9] += v11;
  if ( !*(_DWORD *)(v6 + 124) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    v13 = *(_QWORD **)v9;
    v14 = v12;
    if ( *(unsigned int **)(*(_QWORD *)v9 + 8LL) != v9 || (v15 = (void **)*((_QWORD *)v9 + 1), *v15 != v9) )
      __fastfail(3u);
    *v15 = v13;
    v13[1] = v15;
    KeReleaseSpinLock(Context + 14, v14);
    PoolWithTag = (struct _KSSTREAM_POINTER *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x41627845u);
    if ( PoolWithTag )
    {
      PoolWithTag->Offset = &PoolWithTag->OffsetIn;
      PoolWithTag->Pin = a1;
      PoolWithTag->OffsetIn.Data = (PUCHAR)*((_QWORD *)v9 + 6);
      PoolWithTag->OffsetIn.Count = v9[9];
      PoolWithTag->OffsetIn.Remaining = v9[9];
      PoolWithTag->Context = v9;
      return (unsigned int)USBType1BuildIsochUrbRequest(PoolWithTag, USBType1MsCompleteCallback);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
