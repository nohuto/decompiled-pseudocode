/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01031CC
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00F2284 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01026A0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0102D80 (GetLocalMachineRegistryDWORDValues.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F4AA0 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C0103240 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  USHORT Length; // dx
  USHORT MaximumLength; // ax
  wchar_t *Buffer; // rcx
  size_t v6; // rdx
  NTSTATUS result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = (size_t)a2;
  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a1->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = a1->Buffer;
  v6 = (unsigned __int64)a1->MaximumLength >> 1;
  pcchNewDestLength = 0LL;
  result = RtlWideCharArrayCopyStringWorker(Buffer, v6, &pcchNewDestLength, 0LL, v8);
  a1->Length = 2 * pcchNewDestLength;
  return result;
}
