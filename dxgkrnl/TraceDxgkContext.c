/*
 * XREFs of TraceDxgkContext @ 0x1C0025AE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0047864 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkContext(
        int a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 result; // rax
  char v12; // r10

  result = a8 != 0 ? 4 : 0;
  v12 = (a8 != 0 ? 4 : 0) | (a7 != 0 ? 2 : 0) | (a6 != 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        return McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                 (_DWORD)a5,
                 (unsigned int)&EventDestroyContext,
                 a3,
                 a2,
                 a3,
                 a4,
                 *a5,
                 a5[1],
                 a5[2],
                 a5[3],
                 a5[4],
                 v12,
                 a9,
                 a10,
                 a11);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      return McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
               (_DWORD)a5,
               (unsigned int)&EventReportContext,
               a3,
               a2,
               a3,
               a4,
               *a5,
               a5[1],
               a5[2],
               a5[3],
               a5[4],
               v12,
               a9,
               a10,
               a11);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
  {
    return McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
             (_DWORD)a5,
             (unsigned int)&EventCreateContext,
             a3,
             a2,
             a3,
             a4,
             *a5,
             a5[1],
             a5[2],
             a5[3],
             a5[4],
             v12,
             a9,
             a10,
             a11);
  }
  return result;
}
