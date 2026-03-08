/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C004617C
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01661E4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C03079BC (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0307A78 (-InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B110 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker_0 @ 0x1C004622C (RtlUnicodeStringValidateSrcWorker_0.c)
 */

NTSTATUS __fastcall RtlStringCbCopyUnicodeString(char *a1, unsigned __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rbx
  NTSTATUS result; // eax
  size_t v6; // rcx
  signed __int64 v7; // rdx
  unsigned __int16 *v8; // rax
  ULONG v9; // [rsp+20h] [rbp-18h]
  size_t v10; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2 >> 1;
  if ( (a2 >> 1) - 1 > 0x7FFE )
    return -1073741811;
  v11 = 0LL;
  v10 = 0LL;
  result = RtlUnicodeStringValidateSrcWorker_0(a3, &v11, &v10, (const size_t)a3, v9);
  if ( result < 0 )
  {
    *(_WORD *)a1 = 0;
  }
  else
  {
    v6 = v10 - v3;
    v7 = (char *)v11 - a1;
    do
    {
      if ( !(v6 + v3) )
        break;
      *(_WORD *)a1 = *(_WORD *)&a1[v7];
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v8 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v8 = (unsigned __int16 *)a1;
    *v8 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
