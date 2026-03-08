/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x1C00A6260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x1C00EE162 (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceRetrievePostMessage(__int64 a1)
{
  char v1; // si
  __int64 v2; // rdi
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    LOBYTE(v3) = GetCallbackCount();
    McTemplateK0cppppqqq_EtwWriteTransfer(v4, (unsigned int)&RetrievePostMessage, v5, v3, v1, v2);
  }
}
