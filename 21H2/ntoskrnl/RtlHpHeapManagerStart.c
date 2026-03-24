/*
 * XREFs of RtlHpHeapManagerStart @ 0x14039D788
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039D5C4 (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x1403C3DE8 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpMetadataHeapStart @ 0x1402A5E1C (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCreate @ 0x14037AEE0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039D858 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x14039D950 (RtlCSparseBitmapStart.c)
 */

NTSTATUS __fastcall RtlHpHeapManagerStart(
        union _RTL_RUN_ONCE *a1,
        unsigned int a2,
        union _RTL_RUN_ONCE a3,
        unsigned __int64 a4,
        char a5)
{
  NTSTATUS result; // eax
  unsigned int v10; // edi
  char v11; // bl
  __int128 Parameter; // [rsp+30h] [rbp-10h] BYREF

  a1[1].Ptr = a3.Ptr;
  result = RtlCSparseBitmapStart(&a1[2], 2 * (a4 >> 20), a2, a2 == 1);
  if ( result >= 0 )
  {
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlpHpVaMgrCtxStart)(
               &a1[11],
               a2,
               (union _RTL_RUN_ONCE)a3.Value,
               a4 - 1);
    if ( result >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        Parameter = 0LL;
        *(_WORD *)((char *)&Parameter + 1) = 1;
        LOBYTE(Parameter) = (2 * (a2 & 3)) | 1;
        RtlpHpMetadataHeapCreate(a1 + 1814, &Parameter, 0LL);
      }
      if ( (a5 & 1) != 0 )
      {
        v10 = 0;
        v11 = 2 * (a2 & 3);
        while ( 1 )
        {
          Parameter = 0LL;
          *(_WORD *)((char *)&Parameter + 1) = (unsigned __int8)v10;
          LOBYTE(Parameter) = v11 | (v10 != 0);
          result = RtlpHpMetadataHeapStart(&a1[2 * v10 + 1811], &Parameter);
          if ( result < 0 )
            break;
          if ( ++v10 >= 3 )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
