/*
 * XREFs of EtwTraceBeginRetrieveSendMessage @ 0x1C00B9370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x1C00EE0AA (McTemplateK0cppppqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginRetrieveSendMessage(__int64 a1)
{
  char v1; // bl
  __int64 *v2; // rax
  int v3; // esi
  __int64 v4; // rdi
  int v5; // r9d
  int v6; // ecx
  int v7; // r8d

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v2 = *(__int64 **)(a1 + 112);
    v3 = *(_DWORD *)(a1 + 80);
    if ( v2 )
      v4 = *v2;
    else
      LOBYTE(v4) = 0;
    LOBYTE(v5) = GetCallbackCount();
    McTemplateK0cppppqq_EtwWriteTransfer(v6, (unsigned int)&BeginRetrieveSendMessage, v7, v5, v1, v4, 0, 0, 0, v3);
  }
}
