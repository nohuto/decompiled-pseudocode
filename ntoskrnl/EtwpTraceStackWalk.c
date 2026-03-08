/*
 * XREFs of EtwpTraceStackWalk @ 0x140460A6C
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x140460750 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkApc @ 0x140460860 (EtwpStackWalkApc.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpGetStackLookasideListEntry @ 0x140460460 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceStackKey @ 0x140461010 (EtwpTraceStackKey.c)
 *     PsPicoWalkUserStack @ 0x1409B220C (PsPicoWalkUserStack.c)
 */

void __fastcall EtwpTraceStackWalk(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int v6; // ecx
  int v7; // r13d
  PSLIST_ENTRY StackLookasideListEntry; // rdi
  int v9; // r8d
  void *v10; // rsp
  unsigned int v11; // esi
  ULONG v12; // r14d
  unsigned int v13; // r15d
  ULONG v14; // r8d
  ULONG v15; // esi
  unsigned int v16; // r9d
  PVOID *v17; // rcx
  unsigned int v18; // r15d
  ULONG v19; // r14d
  unsigned int v20; // r14d
  unsigned int v21; // ebx
  bool v22; // zf
  unsigned int v23; // r8d
  __int64 v24; // rdx
  char v25; // [rsp+10h] [rbp-600h] BYREF
  unsigned int v26; // [rsp+610h] [rbp+0h] BYREF
  __int64 v27; // [rsp+618h] [rbp+8h] BYREF
  __int64 v28; // [rsp+620h] [rbp+10h] BYREF
  __int64 v29; // [rsp+628h] [rbp+18h]
  _QWORD *v30; // [rsp+630h] [rbp+20h]
  __int128 v31; // [rsp+638h] [rbp+28h] BYREF
  __int64 v32; // [rsp+648h] [rbp+38h]
  _QWORD v33[3]; // [rsp+650h] [rbp+40h] BYREF
  int v34; // [rsp+668h] [rbp+58h]
  int v35; // [rsp+66Ch] [rbp+5Ch]

  v29 = a3;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v30 = a4;
  v32 = 0LL;
  v31 = 0LL;
  if ( (unsigned __int8)KeQueryCurrentStackInformation((__int64)&v26, (__int64)&v27, (__int64)&v28) )
  {
    if ( v26 > 9 || (v6 = 929, !_bittest(&v6, v26)) )
    {
      v7 = 256;
      StackLookasideListEntry = EtwpGetStackLookasideListEntry();
      if ( !StackLookasideListEntry )
      {
        if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v27] <= 0x1438 )
          return;
        v10 = alloca(1536LL);
        StackLookasideListEntry = (PSLIST_ENTRY)&v25;
        v7 = 192;
      }
      v11 = 0;
      v12 = 0;
      if ( (*(_DWORD *)(a1 + 816) & 0x40000000) != 0 && (a2 & 0x800) != 0 )
      {
        v11 = 1;
        StackLookasideListEntry->Next = (_SLIST_ENTRY *)PsNtosImageBase;
        a2 &= ~0x800u;
      }
      if ( (a2 & 0x800) != 0 )
      {
        v13 = (a2 >> 20) & 0xF;
        v14 = (v13 << 8) | 2;
        if ( (a2 & 0x2000000) == 0 )
          v14 = ((a2 >> 20) & 0xF) << 8;
        v15 = RtlWalkFrameChain((PVOID *)&StackLookasideListEntry->Next, v13 + v7, v14);
        if ( v15 > v13 )
          v11 = v15 - v13;
        else
          v11 = 0;
      }
      if ( (a2 & 0x1000) != 0 )
      {
        v16 = v7 - v11;
        v17 = (PVOID *)(&StackLookasideListEntry->Next + v11);
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].Affinity.Count )
        {
          v12 = PsPicoWalkUserStack(v17, v16);
        }
        else
        {
          v18 = HIWORD(a2) & 0xF;
          v19 = RtlWalkFrameChain(v17, v16 + v18, (v18 << 8) | 1);
          if ( v19 > v18 )
            v12 = v19 - v18;
          else
            v12 = 0;
        }
      }
      v20 = v11 + v12;
      if ( v20 )
      {
        v21 = a2 & 0xFFFFE600 | 2;
        v33[1] = 16LL;
        v22 = (*(_DWORD *)(a1 + 816) & 0x1000000) == 0;
        DWORD2(v31) = *(_DWORD *)(v29 + 1224);
        HIDWORD(v31) = *(_DWORD *)(v29 + 1232);
        *(_QWORD *)&v31 = *v30;
        v33[0] = &v31;
        if ( v22
          || v20 < 4
          || (LOWORD(v9) = 6182 - (v11 != 0),
              !(unsigned __int8)EtwpTraceStackKey(a1, v21, v9, (unsigned int)v33, (__int64)StackLookasideListEntry, v20)) )
        {
          v23 = *(_DWORD *)a1;
          v24 = *(_QWORD *)(a1 + 1096);
          v34 = 8 * v20;
          v33[2] = StackLookasideListEntry;
          v35 = 0;
          EtwpLogKernelEvent((__int64)v33, v24, v23, 2u, 0x1820u, v21);
        }
      }
      if ( v7 == 256 )
        RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, StackLookasideListEntry - 1);
    }
  }
}
