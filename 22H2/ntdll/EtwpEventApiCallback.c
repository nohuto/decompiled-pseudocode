/*
 * XREFs of EtwpEventApiCallback @ 0x180043934
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180047DB4 (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  __int64 v6; // rdx
  char v7; // r11
  unsigned int v8; // ecx
  void (__fastcall *v9)(__int64, _QWORD); // rax
  int v11; // r11d
  __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned __int8 *v14; // r11
  void *v15; // r8
  _DWORD *Heap; // rax
  unsigned int Size; // [rsp+60h] [rbp-10h]
  int Size_4; // [rsp+64h] [rbp-Ch]

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a2 + 248);
  if ( v2 == 2 )
  {
    v6 = *(_QWORD *)(a1 + 96);
  }
  else
  {
    v6 = -1LL;
    if ( *(_BYTE *)(a2 + 124) )
    {
      v7 = 1;
      v6 = *(_QWORD *)(a2 + 104);
    }
    else
    {
      v7 = 0;
    }
    if ( *(_BYTE *)(a2 + 244) )
    {
      v7 = 1;
      v6 &= *(_QWORD *)(a2 + 224);
    }
    if ( v7 )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      *(_DWORD *)(a1 + 116) = 0;
      v6 = 0LL;
    }
  }
  v8 = 0;
  if ( *(_DWORD *)(a1 + 116) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 16LL * v8 + 132);
      if ( v11 >= 0 || v11 == 0x80000000 )
        break;
      if ( ++v8 >= *(_DWORD *)(a1 + 116) )
        goto LABEL_9;
    }
    Size_4 = *(_DWORD *)(a1 + 16LL * v8 + 132);
    v12 = a1 + *(_QWORD *)(a1 + 16LL * v8 + 120);
    v13 = 0;
    Size = *(_DWORD *)(a1 + 16LL * v8 + 128);
    if ( *(__int16 *)(a1 + 78) < 0 && v11 == 0x80000000 )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      v14 = (unsigned __int8 *)(a2 + 150);
      *(_DWORD *)(v12 + 20) = 0;
      *(_DWORD *)(v12 + 16) = Size;
      while ( !*(v14 - 2) || *v14 != (*(_WORD *)(a1 + 78) & 0x7FFF) )
      {
        ++v13;
        v14 += 24;
        if ( v13 >= 4 )
          goto LABEL_27;
      }
      *(_QWORD *)(v12 + 8) = 1LL << ((unsigned __int8)v13 + 32);
LABEL_27:
      if ( v3 )
      {
        EtwpAcquireGuidEntryExclusive(v3, v6);
        v15 = *(void **)(v3 + 168);
        if ( v15 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size + 16LL);
        *(_QWORD *)(v3 + 168) = Heap;
        if ( Heap )
        {
          Heap[2] = Size;
          *(_DWORD *)(*(_QWORD *)(v3 + 168) + 12LL) = Size_4;
          **(_QWORD **)(v3 + 168) = *(_QWORD *)(v3 + 168) + 16LL;
          memmove(**(void ***)(v3 + 168), (const void *)v12, Size);
        }
        *(_DWORD *)(v3 + 48) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 40));
      }
    }
  }
LABEL_9:
  v9 = *(void (__fastcall **)(__int64, _QWORD))(a2 + 48);
  if ( v9 )
    v9(a1 + 56, v2);
  return 0LL;
}
