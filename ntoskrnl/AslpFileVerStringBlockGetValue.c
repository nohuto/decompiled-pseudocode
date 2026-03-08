/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x14076C2E4
 * Callers:
 *     AslpFileQueryVersionString @ 0x1406D48D0 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x1402468AC (AslpFileVerBlockGetValueOffset.c)
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall AslpFileVerStringBlockGetValue(__int64 *a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  NTSTATUS result; // eax
  size_t v9; // r11
  size_t v10; // rbx
  __int64 v11; // r10
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( result >= 0 )
  {
    if ( v12 > a4 )
    {
      return -1073741811;
    }
    else
    {
      if ( v12 == a4 )
      {
        v11 = a3 + v12 - 2;
      }
      else
      {
        v10 = a4 - v12;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)(v12 + a3), v10, &pcbLength) < 0 )
        {
          v9 = v10 - 2;
          *(_WORD *)(v11 + 2 * ((v10 - 2) >> 1)) = 0;
        }
        else
        {
          v9 = pcbLength;
        }
      }
      result = 0;
      *a2 = v9 >> 1;
      *a1 = v11;
    }
  }
  return result;
}
