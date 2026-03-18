/*
 * XREFs of NVMeCompleteSubmissionQueueRequests @ 0x1C0018820
 * Callers:
 *     NVMeControllerCompleteAllIORequests @ 0x1C0018AD4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeLunCompleteAllIORequests @ 0x1C0019ABC (NVMeLunCompleteAllIORequests.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C000A4E4 (IsInternalSrb.c)
 *     _guard_dispatch_icall_nop @ 0x1C00106A0 (_guard_dispatch_icall_nop.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 */

void __fastcall NVMeCompleteSubmissionQueueRequests(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  unsigned int v7; // edi
  __int64 v8; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  int v16; // r11d
  __int64 v17; // rbx
  __int64 SrbExtension; // rax
  void (__fastcall *v19)(__int64, __int64, _QWORD); // rax

  if ( a3 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      v13 = *(_QWORD *)(a2 + 32);
      v14 = *(_QWORD *)(v8 + v13);
      if ( v14 )
      {
        v15 = *(_BYTE *)(v14 + 2) == 40 ? *(_BYTE *)(*(unsigned int *)(v14 + 52) + v14 + 10) : *(_BYTE *)(v14 + 7);
        v16 = v15;
        if ( (a6 != 1 || !IsInternalSrb(a1, v14)) && (a5 == 1 || a4 == v16) )
        {
          v17 = _InterlockedExchange64((volatile __int64 *)(v13 + 16LL * v7), 0LL);
          if ( v17 )
          {
            SrbExtension = GetSrbExtension(v17);
            *(_BYTE *)(v17 + 3) = a7;
            v19 = *(void (__fastcall **)(__int64, __int64, _QWORD))(SrbExtension + 4224);
            if ( v19 )
              v19(a1, v17, 0LL);
            NVMeRequestComplete(a1, v17, 0LL);
            ++*(_DWORD *)(a2 + 132);
            _InterlockedDecrement16((volatile signed __int16 *)(a2 + 128));
          }
        }
      }
      ++v7;
      v8 += 16LL;
    }
    while ( v7 < a3 );
  }
}
