/*
 * XREFs of PopSqmThermalCriticalEvent @ 0x1408F9CD8
 * Callers:
 *     PopSqmThermalCriticalShutdown @ 0x1408F9EB0 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1408F9ED4 (PopSqmThermalHibernate.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopSqmThermalCriticalEvent(__int64 a1, unsigned int a2, int a3)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // r11d
  char v11; // cl
  bool v12; // zf
  const size_t *v13; // rdx
  const size_t *v14; // r10
  bool v16; // [rsp+30h] [rbp-89h] BYREF
  char v17; // [rsp+31h] [rbp-88h] BYREF
  bool v18; // [rsp+32h] [rbp-87h] BYREF
  bool v19; // [rsp+33h] [rbp-86h] BYREF
  int v20; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-79h] BYREF
  bool *v24; // [rsp+60h] [rbp-59h]
  int v25; // [rsp+68h] [rbp-51h]
  int v26; // [rsp+6Ch] [rbp-4Dh]
  char *v27; // [rsp+70h] [rbp-49h]
  int v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  bool *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  int *v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+98h] [rbp-21h]
  int v35; // [rsp+9Ch] [rbp-1Dh]
  int *v36; // [rsp+A0h] [rbp-19h]
  int v37; // [rsp+A8h] [rbp-11h]
  int v38; // [rsp+ACh] [rbp-Dh]
  int *v39; // [rsp+B0h] [rbp-9h]
  int v40; // [rsp+B8h] [rbp-1h]
  int v41; // [rsp+BCh] [rbp+3h]
  bool *v42; // [rsp+C0h] [rbp+7h]
  int v43; // [rsp+C8h] [rbp+Fh]
  int v44; // [rsp+CCh] [rbp+13h]
  _BYTE v45[16]; // [rsp+D0h] [rbp+17h] BYREF
  _BYTE v46[16]; // [rsp+E0h] [rbp+27h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v7 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v8 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v8 = 0LL;
  if ( v8 )
  {
    DeviceAttachmentBaseRefWithTag = *(void **)(a1 + 1048);
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL);
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
      {
        v11 = *(_BYTE *)(a1 + 65);
        v12 = *(_BYTE *)(a1 + 228) == 0;
        v24 = &v16;
        v16 = !v12;
        v25 = 1;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v17 = v11 & 1;
        v27 = &v17;
        v30 = &v18;
        v33 = &v20;
        v36 = (int *)&v21;
        v18 = (v11 & 4) != 0;
        v39 = (int *)&v22;
        v28 = 1;
        v31 = 1;
        v34 = 4;
        v37 = 4;
        v19 = v10 > a2;
        v44 = 0;
        v40 = 4;
        v43 = 1;
        v13 = *(const size_t **)(v9 + 136);
        v42 = &v19;
        v20 = a3;
        v21 = v10;
        v22 = a2;
        tlgCreate1Sz_wchar_t((__int64)v45, v13);
        tlgCreate1Sz_wchar_t((__int64)v46, v14);
        LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgWriteTransfer_EtwWriteTransfer(
                                                   (__int64)&dword_140C02228,
                                                   (unsigned __int8 *)byte_14002A971,
                                                   0LL,
                                                   0LL,
                                                   0xBu,
                                                   &v23);
      }
    }
  }
  if ( v7 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v7, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
