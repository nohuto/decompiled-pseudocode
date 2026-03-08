/*
 * XREFs of EtwTraceRetrieveInputMessage @ 0x1C00B9640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpppqqq_EtwWriteTransfer @ 0x1C00EE24E (McTemplateK0cpppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceRetrieveInputMessage(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  int v5; // r9d
  int v6; // edx
  int v7; // r8d

  result = MEMORY[0xFFFFF78000000320];
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    v4 = *a1;
    LOBYTE(v5) = GetCallbackCount();
    return McTemplateK0cpppqqq_EtwWriteTransfer(a2 != 0, v6, v7, v5, v4);
  }
  return result;
}
