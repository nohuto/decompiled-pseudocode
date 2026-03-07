void *__fastcall PopTraceZoneCr3Tripped(int a1, __int64 a2)
{
  void *result; // rax
  void *v5; // rdi
  __int64 v6; // r9
  int v7; // r11d
  char v8; // cl
  bool v9; // zf
  const size_t *v10; // rdx
  const size_t *v11; // r10
  bool v12; // [rsp+38h] [rbp-69h] BYREF
  char v13; // [rsp+39h] [rbp-68h] BYREF
  bool v14; // [rsp+3Ah] [rbp-67h] BYREF
  int v15; // [rsp+3Ch] [rbp-65h] BYREF
  int v16; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+44h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-59h] BYREF
  int *v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+70h] [rbp-31h]
  int v21; // [rsp+74h] [rbp-2Dh]
  bool *v22; // [rsp+78h] [rbp-29h]
  int v23; // [rsp+80h] [rbp-21h]
  int v24; // [rsp+84h] [rbp-1Dh]
  char *v25; // [rsp+88h] [rbp-19h]
  int v26; // [rsp+90h] [rbp-11h]
  int v27; // [rsp+94h] [rbp-Dh]
  bool *v28; // [rsp+98h] [rbp-9h]
  int v29; // [rsp+A0h] [rbp-1h]
  int v30; // [rsp+A4h] [rbp+3h]
  int *v31; // [rsp+A8h] [rbp+7h]
  int v32; // [rsp+B0h] [rbp+Fh]
  int v33; // [rsp+B4h] [rbp+13h]
  int *v34; // [rsp+B8h] [rbp+17h]
  int v35; // [rsp+C0h] [rbp+1Fh]
  int v36; // [rsp+C4h] [rbp+23h]
  _BYTE v37[16]; // [rsp+C8h] [rbp+27h] BYREF
  _BYTE v38[16]; // [rsp+D8h] [rbp+37h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL) && (unsigned int)dword_140C03928 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
      {
        v8 = *(_BYTE *)(a2 + 65);
        v21 = 0;
        v9 = *(_BYTE *)(a2 + 228) == 0;
        v19 = &v15;
        v12 = !v9;
        v22 = &v12;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v13 = v8 & 1;
        v25 = &v13;
        v28 = &v14;
        v31 = &v16;
        v17 = *(_DWORD *)(a2 + 136);
        v23 = 1;
        v26 = 1;
        v14 = (v8 & 4) != 0;
        v29 = 1;
        v10 = *(const size_t **)(v6 + 136);
        v34 = &v17;
        v15 = a1;
        v20 = 4;
        v16 = v7;
        v32 = 4;
        v35 = 4;
        tlgCreate1Sz_wchar_t((__int64)v37, v10);
        tlgCreate1Sz_wchar_t((__int64)v38, v11);
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03928,
          (unsigned __int8 *)&byte_14002EC47,
          0LL,
          0LL,
          0xAu,
          &v18);
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
  return result;
}
