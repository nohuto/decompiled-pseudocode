/*
 * XREFs of CommonBuffer_AcquireShadowBuffer @ 0x1C003229C
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C001BAFC (XilCommonBuffer_AcquireBufferEx.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0038BDC (XilEndpoint_AllocateStreamContextArray.c)
 *     TR_CreateSecureObject @ 0x1C004139C (TR_CreateSecureObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommonBuffer_AcquireShadowBuffer(int a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a1 + 88;
  result = ExAllocatePool2(64LL, (unsigned int)(a1 + 88), 1229146200LL);
  if ( result )
  {
    *(_DWORD *)(result + 40) = v3;
    *(_QWORD *)(result + 16) = result + 88;
    *(_DWORD *)(result + 44) = a1;
    *(_DWORD *)(result + 64) = a3;
    *(_QWORD *)(result + 72) = a2;
    *(_DWORD *)(result + 80) = 2;
  }
  return result;
}
