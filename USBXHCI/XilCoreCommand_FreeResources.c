/*
 * XREFs of XilCoreCommand_FreeResources @ 0x1C0052ACC
 * Callers:
 *     XilCommand_FreeResources @ 0x1C00316D4 (XilCommand_FreeResources.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x1C0014C68 (XilRegister_WriteUlong64.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCoreCommand_FreeResources(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  XilRegister_WriteUlong64(*(_QWORD *)(v2 + 88), *(_DWORD **)(a1 + 8), 0LL);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
