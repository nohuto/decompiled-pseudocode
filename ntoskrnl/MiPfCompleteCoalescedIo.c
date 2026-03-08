/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x14062F780
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14020DA48 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14020DAF4 (MiPfCompleteInPageSupport.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x14061A580 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(char *P, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int *v5; // r14
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx

  v2 = 0;
  KeWaitForSingleObject(P + 32, WrPageIn, 0, 0, 0LL);
  v5 = (unsigned int *)(P + 80);
  if ( _bittest16((const signed __int16 *)P + 141, 9u) )
  {
    MiRetardMdl((__int64)(P + 272));
    *((_QWORD *)P + 11) = 0LL;
    *v5 = -1073741670;
  }
  if ( (P[282] & 1) != 0 )
    MmUnmapLockedPages(*((PVOID *)P + 37), (PMDL)(P + 272));
  if ( (*v5 & 0x80000000) != 0 )
  {
    v2 = *v5;
  }
  else
  {
    v6 = *((unsigned int *)P + 78);
    v7 = *((_QWORD *)P + 11);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, (ULONG_PTR)P);
  }
  v8 = (__int64 *)(P + 16);
  while ( 1 )
  {
    v9 = *v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *(__int64 **)(v9 + 8) != v8 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_DWORD *)(v9 + 80) = *v5;
    if ( (*v5 & 0x80000000) != 0 )
      v11 = 0LL;
    else
      v11 = *(unsigned int *)(v9 + 184);
    *(_QWORD *)(v9 + 88) = v11;
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v12 = MiPfCompleteInPageSupport(v9, a2);
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag(P, 0);
  return v2;
}
