/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C00B86E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x1C00EE162 (McTemplateK0cppppqqq_EtwWriteTransfer.c)
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
