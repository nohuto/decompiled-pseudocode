/*
 * XREFs of ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01E6A0C
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01E7508 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     _VerifyTHQBlob @ 0x1C01D19F8 (_VerifyTHQBlob.c)
 */

_BOOL8 __fastcall CoreSignatureVerify(__int16 a1, __int64 a2, unsigned __int8 *a3, unsigned int *a4)
{
  unsigned __int16 v6; // si
  BOOL v8; // r10d

  v6 = a2;
  v8 = VerifyTHQBlob(a1, a2, a3, (UCHAR *)gTHQAPublicKey);
  if ( v8 )
  {
    *a4 = 1;
  }
  else
  {
    v8 = VerifyTHQBlob(a1, v6, a3, (UCHAR *)gTHQAExceptionPublicKey);
    *a4 = v8 ? 2 : 0;
  }
  return v8;
}
