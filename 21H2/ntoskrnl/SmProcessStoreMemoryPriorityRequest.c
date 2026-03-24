/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x1406BE5D4
 * Callers:
 *     SmSetStoreInformation @ 0x1406BE524 (SmSetStoreInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     SmRereferenceProcessObject @ 0x1402D0590 (SmRereferenceProcessObject.c)
 *     SmpKeyedStoreEntryGet @ 0x1402D6348 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1402D95D8 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  __int128 *v3; // r9
  int v4; // edi
  NTSTATUS v5; // ebx
  _DWORD *v6; // r9
  __int64 v8; // rax
  PADAPTER_OBJECT DmaAdapter; // [rsp+20h] [rbp-68h] BYREF
  int v10; // [rsp+28h] [rbp-60h]
  PADAPTER_OBJECT v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h]
  _OWORD v13[3]; // [rsp+48h] [rbp-40h] BYREF

  v3 = (__int128 *)a1;
  memset(v13, 0, sizeof(v13));
  v11 = 0LL;
  DmaAdapter = 0LL;
  v4 = 0;
  v10 = 0;
  v12 = 0LL;
  if ( (_DWORD)a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
    }
    v12 = *v3;
    if ( (_BYTE)v12 == 1 )
    {
      if ( (v12 & 0xFFFFFC00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v12 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v12 + 1), a2, a3, &DmaAdapter);
        if ( v5 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&DmaAdapter[135].DmaOperations + 1, 0x40000u);
          if ( (v12 & 0x200) != 0 )
          {
            if ( (PADAPTER_OBJECT)KeGetCurrentThread()->ApcState.Process != DmaAdapter )
            {
              v4 = 1;
              KiStackAttachProcess((_KPROCESS *)DmaAdapter, 0LL, (__int64)v13, v6);
            }
            v11 = DmaAdapter;
            v8 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &v11, 0, 0);
            if ( v8 )
              *(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v8 + 16) & 0x3FF) + 6023LL) = 1;
            else
              v5 = -1073741632;
          }
          else
          {
            v5 = 0;
          }
        }
      }
      else
      {
        v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741735;
    }
  }
  else
  {
    v5 = -1073741306;
  }
  if ( v4 )
    KiUnstackDetachProcess((__int64)v13, 0);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)v5;
}
