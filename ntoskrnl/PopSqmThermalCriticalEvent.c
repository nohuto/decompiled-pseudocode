/*
 * XREFs of PopSqmThermalCriticalEvent @ 0x14099DC68
 * Callers:
 *     PopSqmThermalCriticalShutdown @ 0x14099DE38 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x14099DE5C (PopSqmThermalHibernate.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void *__fastcall PopSqmThermalCriticalEvent(__int64 a1, unsigned int a2, int a3)
{
  void *result; // rax
  void *v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // r11d
  char v10; // cl
  bool v11; // zf
  const size_t *v12; // rdx
  const size_t *v13; // r10
  bool v14; // [rsp+30h] [rbp-89h] BYREF
  char v15; // [rsp+31h] [rbp-88h] BYREF
  bool v16; // [rsp+32h] [rbp-87h] BYREF
  bool v17; // [rsp+33h] [rbp-86h] BYREF
  int v18; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+40h] [rbp-79h] BYREF
  bool *v22; // [rsp+60h] [rbp-59h]
  int v23; // [rsp+68h] [rbp-51h]
  int v24; // [rsp+6Ch] [rbp-4Dh]
  char *v25; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+78h] [rbp-41h]
  int v27; // [rsp+7Ch] [rbp-3Dh]
  bool *v28; // [rsp+80h] [rbp-39h]
  int v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+8Ch] [rbp-2Dh]
  int *v31; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+98h] [rbp-21h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  int *v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A8h] [rbp-11h]
  int v36; // [rsp+ACh] [rbp-Dh]
  int *v37; // [rsp+B0h] [rbp-9h]
  int v38; // [rsp+B8h] [rbp-1h]
  int v39; // [rsp+BCh] [rbp+3h]
  bool *v40; // [rsp+C0h] [rbp+7h]
  int v41; // [rsp+C8h] [rbp+Fh]
  int v42; // [rsp+CCh] [rbp+13h]
  _BYTE v43[16]; // [rsp+D0h] [rbp+17h] BYREF
  _BYTE v44[16]; // [rsp+E0h] [rbp+27h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v7 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL) && (unsigned int)dword_140C03928 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) )
      {
        v10 = *(_BYTE *)(a1 + 65);
        v11 = *(_BYTE *)(a1 + 228) == 0;
        v22 = &v14;
        v14 = !v11;
        v23 = 1;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v15 = v10 & 1;
        v25 = &v15;
        v28 = &v16;
        v31 = &v18;
        v34 = (int *)&v19;
        v16 = (v10 & 4) != 0;
        v37 = (int *)&v20;
        v26 = 1;
        v29 = 1;
        v32 = 4;
        v35 = 4;
        v17 = v9 > a2;
        v42 = 0;
        v38 = 4;
        v41 = 1;
        v12 = *(const size_t **)(v8 + 136);
        v40 = &v17;
        v18 = a3;
        v19 = v9;
        v20 = a2;
        tlgCreate1Sz_wchar_t((__int64)v43, v12);
        tlgCreate1Sz_wchar_t((__int64)v44, v13);
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03928,
          (unsigned __int8 *)byte_1400325BB,
          0LL,
          0LL,
          0xBu,
          &v21);
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v7, 0x67446F50u);
  }
  return result;
}
