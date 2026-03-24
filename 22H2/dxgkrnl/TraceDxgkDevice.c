/*
 * XREFs of TraceDxgkDevice @ 0x1C0027680
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C0043744 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkDevice(int a1, char a2, int a3, char a4, __int64 a5, char a6, unsigned __int8 a7, char a8)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        return McTemplateK0ppqpttq_EtwWriteTransfer(
                 a7,
                 (unsigned int)&EventDestroyDevice,
                 a3,
                 a3,
                 a2,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      return McTemplateK0ppqpttq_EtwWriteTransfer(a7, (unsigned int)&EventReportDevice, a3, a3, a2, a4, a5, a6, a7, a8);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    return McTemplateK0ppqpttq_EtwWriteTransfer(a7, (unsigned int)&EventCreateDevice, a3, a3, a2, a4, a5, a6, a7, a8);
  }
  return result;
}
