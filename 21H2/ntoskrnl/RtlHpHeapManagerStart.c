/*
 * XREFs of RtlHpHeapManagerStart @ 0x14036EDD4
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14036EEAC (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x1403C445C (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpMetadataHeapStart @ 0x140371378 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x140371D3C (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x140372070 (RtlCSparseBitmapStart.c)
 *     RtlpHpMetadataHeapCreate @ 0x1403DE6A0 (RtlpHpMetadataHeapCreate.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(
        union _RTL_RUN_ONCE *a1,
        int a2,
        __int64 a3,
        union _RTL_RUN_ONCE a4,
        unsigned __int64 a5,
        char a6)
{
  int Ptr; // edi
  int v9; // ebx
  __int64 result; // rax
  unsigned int v11; // edi
  char v12; // bl
  __int128 Parameter; // [rsp+30h] [rbp-10h] BYREF

  a1[1].Ptr = a4.Ptr;
  Ptr = (int)a4.Ptr;
  v9 = a3;
  result = RtlCSparseBitmapStart(&a1[2], 2 * (a5 >> 20), a3, a2 == 1);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((int)a1 + 88, a2, v9, Ptr, a5 - 1);
    if ( (int)result >= 0 )
    {
      if ( (a6 & 2) != 0 )
      {
        Parameter = 0LL;
        *(_WORD *)((char *)&Parameter + 1) = 1;
        LOBYTE(Parameter) = (2 * (v9 & 3)) | 1;
        RtlpHpMetadataHeapCreate(a1 + 1814, &Parameter, 0LL);
      }
      if ( (a6 & 1) != 0 )
      {
        v11 = 0;
        v12 = 2 * (v9 & 3);
        while ( 1 )
        {
          Parameter = 0LL;
          *(_WORD *)((char *)&Parameter + 1) = (unsigned __int8)v11;
          LOBYTE(Parameter) = v12 | (v11 != 0);
          result = RtlpHpMetadataHeapStart(&a1[2 * v11 + 1811], &Parameter);
          if ( (int)result < 0 )
            break;
          if ( ++v11 >= 4 )
            return 0LL;
        }
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
