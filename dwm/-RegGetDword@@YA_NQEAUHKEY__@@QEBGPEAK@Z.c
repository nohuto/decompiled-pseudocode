/*
 * XREFs of ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x14000E5E0
 * Callers:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x14000E654 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDword(HKEY a1, const unsigned __int16 *const a2, unsigned int *a3)
{
  bool v3; // bl
  DWORD v6; // [rsp+40h] [rbp+8h] BYREF
  DWORD v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = HIDWORD(a2);
  v3 = 0;
  v7 = 4;
  if ( a1 && !RegQueryValueExW(a1, L"DisableInstrumentationBreaking", 0LL, &v6, (LPBYTE)&v9, &v7) )
  {
    v3 = v6 == 4;
    *a3 = v9;
  }
  return v3;
}
