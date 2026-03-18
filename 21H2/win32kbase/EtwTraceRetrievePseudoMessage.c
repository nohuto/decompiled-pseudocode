/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C009E050
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x1C00E55CE (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C014C390 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // r9d
  int v5; // ecx
  int v6; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000) != 0 )
  {
    v3 = *a2;
    LOBYTE(v4) = GetCallbackCount();
    McTemplateK0cppppqqq_EtwWriteTransfer(v5, (unsigned int)&RetrievePseudoMessage, v6, v4, a1, v3);
  }
}
