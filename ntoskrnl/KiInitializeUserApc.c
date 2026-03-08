/*
 * XREFs of KiInitializeUserApc @ 0x1403664E8
 * Callers:
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KeContextFromKframes @ 0x1403620F0 (KeContextFromKframes.c)
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     KePopulateContinuationContext @ 0x140365578 (KePopulateContinuationContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetupForInstrumentationReturn @ 0x14056E9C0 (KiSetupForInstrumentationReturn.c)
 *     KeCopyExceptionRecord @ 0x140576430 (KeCopyExceptionRecord.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057E274 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x1405A8DD4 (RtlpGetNonLegacyXStateAreaLength.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // r15d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 result; // rax
  _QWORD *v20; // r8
  const char *i; // rax
  unsigned int v22; // r9d
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  unsigned int Size; // [rsp+34h] [rbp-194h]
  _QWORD *v29; // [rsp+40h] [rbp-188h]
  __int64 v31; // [rsp+60h] [rbp-168h]
  _QWORD *v33; // [rsp+80h] [rbp-148h]
  struct _KTHREAD *v34; // [rsp+88h] [rbp-140h]
  char v35[2]; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v36; // [rsp+AAh] [rbp-11Eh]
  _QWORD *v37; // [rsp+B8h] [rbp-110h]
  _QWORD *v38; // [rsp+C0h] [rbp-108h]
  _QWORD *v39; // [rsp+C8h] [rbp-100h]
  SIZE_T v40; // [rsp+D0h] [rbp-F8h]
  int v41[38]; // [rsp+F0h] [rbp-D8h] BYREF

  v7 = a4;
  v8 = a3;
  memset(v41, 0, sizeof(v41));
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  if ( a1 )
  {
    v11 = 1048603;
    v12 = 0LL;
    if ( (a7 & 2) != 0 && (KeFeatureBits & 0x800000) != 0 )
    {
      v11 = 1048667;
      v12 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v11 |= 0x100040u;
      v13 = v12 | 0x800;
    }
    else
    {
      v13 = v12 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    v14 = *(_QWORD **)(a2 + 384);
    v29 = v14;
    v15 = v14;
    Size = 0;
    if ( (v11 & 0x100040) == 0x100040 )
    {
      Size = RtlpGetNonLegacyXStateAreaLength(v13);
      v15 = (_QWORD *)(((unsigned __int64)v15 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v14 = v29;
    }
    v33 = (_QWORD *)((unsigned __int64)(v15 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v37 = v33;
    v16 = (__int64)(v33 - 4);
    v38 = v33 - 8;
    v39 = v33 - 12;
    v17 = (__int64)(v33 - 166);
    v40 = (char *)v14 - (char *)(v33 - 166);
    ProbeForWrite(v33 - 166, v40, 0x10u);
    *((_OWORD *)v33 - 4) = 0LL;
    *(v33 - 6) = 0LL;
    *((_DWORD *)v33 - 16) = 1;
    *((_DWORD *)v33 - 15) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v33 - 15) = 3;
    if ( (v11 & 0x100040) == 0x100040 )
    {
      v26 = v33 - 12;
      *v26 = -1232;
      v26[1] = *(_DWORD *)(a2 + 384) - v17;
      v26[2] = -1232;
      v26[3] = 1232;
      v26[4] = (_DWORD)v15 - ((_DWORD)v33 - 96);
      v26[5] = *(_DWORD *)(a2 + 384) - (_DWORD)v15;
      memset(v15, 0, Size);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v15[1] = v13 | 0x8000000000000000uLL;
    }
    *(_DWORD *)(v17 + 48) = v11;
    KeContextFromKframes(a2, a1, v17);
    *(_QWORD *)(((unsigned __int64)(v15 - 5) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) = *(_QWORD *)(v17 + 152);
    v18 = *(_QWORD *)(v17 + 248);
    *v33 = v18;
    KePopulateContinuationContext(v18);
    v7 = a4;
    v8 = a3;
  }
  else
  {
    v31 = *(_QWORD *)(a2 + 208);
    v24 = v31 + 1296;
    if ( (((_BYTE)v31 + 16) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v24 >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v24 = *(_BYTE *)v24;
    *(_BYTE *)(v24 + 31) = *(_BYTE *)(v24 + 31);
    v17 = v31;
    if ( (v34->MiscFlags & 0x100000) != 0 )
    {
      v25 = KiUnwindUserSspForApcContextCopyBypass(v31);
      if ( v25 < 0 )
        RtlRaiseStatus(v25);
    }
    v16 = v31 + 1296;
  }
  *(_OWORD *)v16 = 0LL;
  *(_OWORD *)(v16 + 16) = 0LL;
  if ( (a7 & 4) != 0 )
  {
    *(_QWORD *)v16 = a5;
    *(_QWORD *)(v16 + 8) = v17;
    a5 = v16;
  }
  *(_QWORD *)v17 = v7;
  *(_QWORD *)(v17 + 8) = a5;
  *(_QWORD *)(v17 + 16) = a6;
  *(_QWORD *)(v17 + 24) = v8;
  *(_QWORD *)(v17 + 32) = a7;
  *(_QWORD *)(a2 + 384) = v17;
  *(_QWORD *)(a2 + 360) = qword_140D1F348;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140C648E0 )
  {
    __sidt(v35);
    v20 = (_QWORD *)v36;
    for ( i = (const char *)v36; (unsigned __int64)i < v36 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v22 = 848;
    v23 = qword_140C648D0;
    while ( v22 >= 8 )
    {
      v23 = __ROR8__(v23 - *v20++, qword_140C648D8);
      v22 -= 8;
    }
    while ( v22 )
    {
      v23 = __ROR8__(v23 - *(unsigned __int8 *)v20, qword_140C648D8);
      v20 = (_QWORD *)((char *)v20 + 1);
      --v22;
    }
    if ( qword_140C648E8 != v23 )
    {
      if ( qword_140C648A0 )
        goto LABEL_28;
      qword_140C648A0 = (unsigned int)__ROR4__(150994945, 88);
      qword_140C648A8 = 0LL;
      qword_140C648B0 = 0LL;
      qword_140C648B8 = 269LL;
      qword_140C648C0 = v36;
    }
    if ( !qword_140C648A0 )
    {
LABEL_27:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C648E0 = result;
      return result;
    }
LABEL_28:
    if ( (KDEFERRED_ROUTINE *)qword_140C64878 != KiScanQueues )
    {
      LODWORD(dword_140C64860) = 275;
      qword_140C64878 = (__int64)KiScanQueues;
      qword_140C64880 = (__int64)&dword_140C64860;
      qword_140C64898 = 0LL;
      qword_140C64870 = 0LL;
    }
    qword_140C648C8 = 1018368LL;
    KiInsertQueueDpc((ULONG_PTR)&dword_140C64860, 0LL, 0LL, 0LL, 0);
    goto LABEL_27;
  }
  return result;
}
