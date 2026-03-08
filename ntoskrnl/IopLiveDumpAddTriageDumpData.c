/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x140A97160
 * Callers:
 *     <none>
 * Callees:
 *     KiValidateTriageDumpDataArray @ 0x1403A2C14 (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405670E8 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x140568864 (KiValidateComponentName.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddTriageDumpData(int *a1, __int64 a2)
{
  PVOID *v2; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+B0h] [rbp+40h] BYREF
  PVOID *v17; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (PVOID *)KeBugCheckReasonCallbackListHead;
  v16 = 0;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( KeBugCheckReasonCallbackListHead && qword_140C41EA8 )
  {
    v17 = &KeBugCheckReasonCallbackListHead;
    while ( v2 != &KeBugCheckReasonCallbackListHead )
    {
      if ( KeValidateBugCheckCallbackRecord((__int64)v2, 7, &v17) )
      {
        v5 = *a1;
        *(_QWORD *)&v12 = 0LL;
        LODWORD(v13) = v5;
        *((_QWORD *)&v13 + 1) = *((_QWORD *)a1 + 1);
        v14 = *((_OWORD *)a1 + 1);
        v15 = *((_QWORD *)a1 + 4);
        HIDWORD(v12) = 0x2000000;
        ((void (__fastcall *)(__int64, PVOID *, __int128 *))v2[2])(7LL, v2, &v12);
        if ( (_QWORD)v12 )
        {
          if ( KiValidateTriageDumpDataArray(v12, v6, 0x2000000u) )
          {
            if ( KiValidateComponentName((__int64)v2[3], &v16) )
            {
              if ( *(_DWORD *)(v12 + 16) )
              {
                MmAddRangeToCrashDump(a2, (unsigned __int64)v2[3], v16 + 1LL);
                v7 = v12;
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 16); i = (unsigned int)(i + 1) )
                {
                  v9 = *(_QWORD *)(v7 + 16 * (i + 3));
                  if ( v9 )
                  {
                    v10 = *(_QWORD *)(v7 + 16LL * (unsigned int)i + 56);
                    if ( v10 )
                    {
                      MmAddRangeToCrashDump(a2, v9, v10);
                      v7 = v12;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( !v17 )
      {
        return 0LL;
      }
      v2 = (PVOID *)*v2;
    }
  }
  return 0LL;
}
