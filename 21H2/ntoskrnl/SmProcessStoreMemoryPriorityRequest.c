/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x14061D834
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SmRereferenceProcessObject @ 0x14024E910 (SmRereferenceProcessObject.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     SmpKeyedStoreEntryGet @ 0x140287698 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  __int128 *v3; // r9
  int v4; // edi
  NTSTATUS v5; // ebx
  __int64 v7; // rax
  PADAPTER_OBJECT DmaAdapter; // [rsp+20h] [rbp-68h] BYREF
  int v9; // [rsp+28h] [rbp-60h]
  PADAPTER_OBJECT v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  _OWORD v12[3]; // [rsp+48h] [rbp-40h] BYREF

  v3 = (__int128 *)a1;
  memset(v12, 0, sizeof(v12));
  v10 = 0LL;
  DmaAdapter = 0LL;
  v4 = 0;
  v9 = 0;
  v11 = 0LL;
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
    v11 = *v3;
    if ( (_BYTE)v11 == 1 )
    {
      if ( (v11 & 0xFFFFFC00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v11 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v11 + 1), a2, a3, &DmaAdapter);
        if ( v5 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&DmaAdapter[135].DmaOperations + 1, 0x40000u);
          if ( (v11 & 0x200) != 0 )
          {
            if ( (PADAPTER_OBJECT)KeGetCurrentThread()->ApcState.Process != DmaAdapter )
            {
              v4 = 1;
              KiStackAttachProcess((_KPROCESS *)DmaAdapter, 0, (__int64)v12);
            }
            v10 = DmaAdapter;
            v7 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &v10, 0, 0);
            if ( v7 )
              *(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v7 + 16) & 0x3FF) + 6023LL) = 1;
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
    KiUnstackDetachProcess((__int64)v12, 0LL);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)v5;
}
