/*
 * XREFs of AcpiNativeMethodEvalRequestHandler @ 0x1C00375E0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCleanupObjDataArguments @ 0x1C0036C18 (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0036CA4 (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiDispatchNativeMethodEvalRequest @ 0x1C00373D4 (AcpiDispatchNativeMethodEvalRequest.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EA0 (AcpiSetupNativeMethodContext.c)
 */

__int64 __fastcall AcpiNativeMethodEvalRequestHandler(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int16 *v6; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v6 = *(unsigned __int16 **)(v2 + 56);
      if ( !v6 )
        return *(unsigned int *)(v2 + 64);
      if ( *(int *)(v2 + 64) < 0 )
        return *(unsigned int *)(v2 + 64);
      result = AcpiConvertMethodArgumentsToObjData(v6, *(_QWORD *)(v2 + 48), *(_DWORD *)(v2 + 40), *(_QWORD *)(a1 + 16));
      if ( (int)result >= 0 )
        return *(unsigned int *)(v2 + 64);
    }
    else if ( *(_DWORD *)a1 == 2 )
    {
      AcpiCleanupObjDataArguments(*(_QWORD *)(a1 + 16), 1u);
      v4 = *(void **)(v2 + 32);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x4E706341u);
        *(_QWORD *)(v2 + 32) = 0LL;
      }
      v5 = *(void **)(v2 + 56);
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0x4E706341u);
        *(_QWORD *)(v2 + 56) = 0LL;
      }
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    result = AcpiSetupNativeMethodContext(a1, *(_QWORD *)(a1 + 8));
    if ( (int)result >= 0 )
      return AcpiDispatchNativeMethodEvalRequest(v2, *(_QWORD *)(a1 + 16));
    else
      *(_DWORD *)(v2 + 64) = result;
  }
  return result;
}
