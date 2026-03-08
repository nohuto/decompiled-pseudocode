/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C004DC80
 * Callers:
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C03081D8 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B110 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker_0 @ 0x1C004DD28 (RtlUnicodeStringValidateDestWorker_0.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, wchar_t *a2)
{
  NTSTATUS result; // eax
  size_t v5; // rdx
  __int64 v6; // r8
  wchar_t *v7; // r9
  __int16 v8; // cx
  size_t v9; // [rsp+20h] [rbp-18h]
  ULONG v10; // [rsp+28h] [rbp-10h]
  size_t v11; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  result = RtlUnicodeStringValidateDestWorker_0(a1, &v12, &v11, 0LL, v9, v10);
  if ( result >= 0 )
  {
    v5 = v11;
    v6 = 0x7FFFLL;
    v7 = v12;
    result = 0;
    v8 = 0;
    if ( !v11 )
      goto LABEL_13;
    do
    {
      if ( !v6 )
        break;
      if ( !*a2 )
        break;
      *v7++ = *a2++;
      --v6;
      ++v8;
      --v5;
    }
    while ( v5 );
    if ( !v5 && v6 )
    {
LABEL_13:
      if ( *a2 )
        result = -2147483643;
    }
    a1->Length = 2 * v8;
  }
  return result;
}
