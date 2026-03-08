/*
 * XREFs of ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01E0588
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01E0604 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1C01E170C (-_VerifyTHQBlob@@YAHGGPEAE0@Z.c)
 */

__int64 __fastcall CoreSignatureVerify(unsigned __int16 a1, unsigned __int16 a2, unsigned __int8 *a3, unsigned int *a4)
{
  unsigned int v8; // r10d

  v8 = _VerifyTHQBlob(a1, a2, a3, "RSA1");
  if ( v8 )
  {
    *a4 = 1;
  }
  else
  {
    v8 = _VerifyTHQBlob(a1, a2, a3, "RSA1");
    *a4 = v8 != 0 ? 2 : 0;
  }
  return v8;
}
