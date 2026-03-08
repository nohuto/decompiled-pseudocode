/*
 * XREFs of ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C00821B4
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0082070 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C00821E0 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::HResultUtil::HRESULTFromNTStatus(CoreMessagingK::HResultUtil *this)
{
  unsigned int v1; // ebx
  int v2; // edi
  signed int v4; // eax

  v1 = 0;
  v2 = (int)this;
  if ( (int)this < 0 )
  {
    if ( (_DWORD)this == -1073741559 )
    {
      return (unsigned int)-2147024579;
    }
    else
    {
      v4 = RtlNtStatusToDosError((NTSTATUS)this);
      if ( !v4 || v4 == 317 )
      {
        return v2 | 0x10000000u;
      }
      else if ( v4 > 0 )
      {
        return (unsigned __int16)v4 | 0x80070000;
      }
      else
      {
        return (unsigned int)v4;
      }
    }
  }
  return v1;
}
