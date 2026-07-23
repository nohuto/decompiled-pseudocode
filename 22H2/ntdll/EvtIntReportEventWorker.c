/*
 * XREFs of EvtIntReportEventWorker @ 0x18004FE90
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x18004FE20 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x1801118A0 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     EtwpEventWriteFull @ 0x180050388 (EtwpEventWriteFull.c)
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     EtwWriteUMSecurityEvent @ 0x18007C8C0 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008D6E0 (_local_unwind.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        char a6,
        unsigned __int8 *Sid,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // esi
  unsigned __int8 *v13; // r12
  _BYTE *Heap; // rdi
  unsigned __int8 v15; // r15
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  ULONG v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rax
  int v28; // edx
  LONG v29; // eax
  __int64 v30; // rcx
  __int64 v32; // [rsp+0h] [rbp-2D8h] BYREF
  int v33; // [rsp+50h] [rbp-288h]
  LONG Win32Error; // [rsp+54h] [rbp-284h]
  int v35; // [rsp+58h] [rbp-280h] BYREF
  int v36; // [rsp+5Ch] [rbp-27Ch] BYREF
  unsigned int i; // [rsp+60h] [rbp-278h]
  int v38; // [rsp+64h] [rbp-274h]
  _BYTE *v39; // [rsp+68h] [rbp-270h]
  __int64 v40; // [rsp+70h] [rbp-268h] BYREF
  __int64 v41; // [rsp+78h] [rbp-260h]
  __int64 *v42; // [rsp+80h] [rbp-258h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-250h] BYREF
  _BYTE v44[512]; // [rsp+A0h] [rbp-238h] BYREF

  v42 = &v32;
  v11 = a4;
  v38 = a2;
  v41 = a1;
  v13 = Sid;
  Win32Error = 0;
  Heap = v44;
  v39 = v44;
  v15 = 0;
  v35 = 0;
  if ( a9 && !a11 || !a10 && a8 || !a3 )
  {
    Win32Error = 87;
    goto LABEL_32;
  }
  v16 = a8 + (Sid != 0LL) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v39 = Heap;
    if ( !Heap )
    {
      Win32Error = 8;
      goto LABEL_32;
    }
  }
  v17 = 0x8000000000000000uLL;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v15 = 2;
        break;
      case 2:
        v15 = 3;
        break;
      case 4:
        v15 = 4;
        break;
      case 8:
        v17 = 0x8020000000000000uLL;
        break;
      case 16:
        v17 = 0x8010000000000000uLL;
        break;
    }
  }
  *(_DWORD *)&EventDescriptor.Id = 0;
  EventDescriptor.Level = v15;
  EventDescriptor.Task = a5;
  EventDescriptor.Opcode = 0;
  EventDescriptor.Keyword = v17;
  if ( v13 )
  {
    if ( !RtlValidSid(v13) )
    {
      Win32Error = 87;
      local_unwind(v42, &loc_1800501E6);
      goto LABEL_29;
    }
    v35 = 4 * v13[1] + 8;
  }
  v40 = MEMORY[0x7FFE0014];
  *(_QWORD *)Heap = &v40;
  *((_QWORD *)Heap + 1) = 8LL;
  *((_QWORD *)Heap + 2) = &a6;
  *((_QWORD *)Heap + 3) = 4LL;
  v33 = 2;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_WORD *)(a3 + 2 * v18) );
  v36 = (unsigned __int16)(v18 + 1);
  *((_QWORD *)Heap + 4) = &v36;
  *((_QWORD *)Heap + 5) = 2LL;
  v19 = 2 * v36;
  *((_QWORD *)Heap + 6) = a3;
  *((_DWORD *)Heap + 14) = v19;
  *((_DWORD *)Heap + 15) = 0;
  *((_QWORD *)Heap + 8) = &v35;
  *((_QWORD *)Heap + 9) = 2LL;
  v20 = 5;
  v33 = 5;
  v21 = v35;
  if ( v35 )
  {
    *((_QWORD *)Heap + 10) = v13;
    *((_DWORD *)Heap + 22) = v21;
    *((_DWORD *)Heap + 23) = 0;
    v20 = 6;
    v33 = 6;
  }
  v22 = 2LL * v20;
  *(_QWORD *)&Heap[8 * v22] = &a8;
  *(_QWORD *)&Heap[8 * v22 + 8] = 2LL;
  v23 = v20 + 1;
  v33 = v23;
  v24 = 0;
  for ( i = 0; ; i = v24 )
  {
    v25 = 2LL * v23++;
    if ( v24 >= a8 )
      break;
    v26 = *(_QWORD *)(a10 + 8LL * v24);
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(v26 + 2 * v27) );
    *(_QWORD *)&Heap[8 * v25] = v26;
    *(_QWORD *)&Heap[8 * v25 + 8] = (unsigned int)(2 * v27 + 2);
    v33 = v23;
    ++v24;
  }
  *(_QWORD *)&Heap[8 * v25] = &a9;
  *(_QWORD *)&Heap[8 * v25 + 8] = 4LL;
  v33 = v23;
  v28 = a9;
  if ( a9 )
  {
    v30 = 2LL * v23;
    *(_QWORD *)&Heap[8 * v30] = a11;
    *(_DWORD *)&Heap[8 * v30 + 8] = v28;
    *(_DWORD *)&Heap[8 * v30 + 12] = 0;
    v33 = ++v23;
  }
  if ( !v38 )
  {
    v29 = EtwpEventWriteFull(v41, (unsigned int)&EventDescriptor, 0, 0, 4, 0LL, 0LL, v23, (__int64)Heap);
    goto LABEL_30;
  }
LABEL_29:
  v29 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, v23, (PEVENT_DATA_DESCRIPTOR)Heap);
LABEL_30:
  Win32Error = v29;
  if ( Heap != v44 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_32:
  RtlSetLastWin32Error(Win32Error);
  return Win32Error == 0;
}
