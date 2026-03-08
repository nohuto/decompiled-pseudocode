/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0109294
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0010D80 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnOUTSTRING @ 0x1C00EAB40 (SfnOUTSTRING.c)
 *     xxxClientExpandStringW @ 0x1C0108BE4 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0108F88 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C020833C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C020A090 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020A610 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ecx
  __int64 v7; // rbx
  ULONG v9; // edx
  unsigned __int64 v10; // rdx
  ULONG v12; // ecx
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+18h] BYREF

  BytesInUnicodeString = 0;
  v5 = *((_DWORD *)a1 + 2);
  v7 = a2;
  if ( v5 )
    ProbeForRead(*((volatile void **)a1 + 2), v5, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( a3 )
  {
    v10 = *((unsigned int *)a1 + 2);
    if ( a4 )
    {
LABEL_6:
      if ( (unsigned int)v7 < (unsigned int)v10 )
        LODWORD(v10) = v7;
      return (unsigned int)v10;
    }
    v12 = 2 * v7;
    if ( 2 * v7 >= v10 )
      v12 = *((_DWORD *)a1 + 2);
    RtlUnicodeToMultiByteSize(&BytesInUnicodeString, *((PCWCH *)a1 + 2), v12);
    LODWORD(v10) = BytesInUnicodeString;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 2);
    if ( !a4 )
    {
      LODWORD(v10) = v9 >> 1;
      goto LABEL_6;
    }
    if ( (unsigned int)v7 < v9 )
      v9 = v7;
    RtlMultiByteToUnicodeSize(&BytesInUnicodeString, *((const CHAR **)a1 + 2), v9);
    LODWORD(v10) = BytesInUnicodeString >> 1;
  }
  return (unsigned int)v10;
}
