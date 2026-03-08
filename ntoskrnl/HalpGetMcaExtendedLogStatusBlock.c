/*
 * XREFs of HalpGetMcaExtendedLogStatusBlock @ 0x140500E34
 * Callers:
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404FFE04 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpVerifyGenericError @ 0x140501F00 (HalpVerifyGenericError.c)
 */

_DWORD *__fastcall HalpGetMcaExtendedLogStatusBlock(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v1 = 0LL;
  if ( HalpMcaExtendedLoggingSupported )
  {
    if ( qword_140D18A30 )
    {
      if ( ((int (__fastcall *)(_QWORD, int *, _QWORD))off_140C01BD8[0])(*(unsigned int *)(a1 + 16), &v7, 0LL) >= 0 )
      {
        v3 = (unsigned int)(*(_DWORD *)(a1 + 36) + v7 * dword_140D18A40);
        if ( v3 < qword_140D18A38 )
        {
          v4 = *(_QWORD *)(qword_140D18A30 + 8 * v3 + 64);
          if ( v4 < 0 )
          {
            v5 = v4 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v5 >= qword_140D18A48 && v5 + 4096 <= qword_140D18A48 + qword_140D18A58 )
            {
              v1 = (char *)qword_140D18A50 + v5 - qword_140D18A48;
              if ( !*v1 )
                return 0LL;
              if ( (int)HalpVerifyGenericError(a1, (char *)qword_140D18A50 + v5 - qword_140D18A48) < 0 )
              {
                *v1 = 0;
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
